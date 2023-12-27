module alu(
  input signed [3:0] A,
  input signed [3:0] B,
  input [2:0] opcode,
  output reg signed [3:0] out,
  output reg carry_out,
  output reg overflow,
  output reg equal
);

  always @(*)
  begin
    case (opcode)
      3'b000: // 加法
        out = A + B;
      3'b001: // 减法
        out = A - B;
      3'b010: // 取反
        out = ~A;
      3'b011: // 与
        out = A & B;
      3'b100: // 或
        out = A | B;
      3'b101: // 异或
        out = A ^ B;
      3'b110: // 比较大小
        if (A < B)
          out = 4'b0001;
        else
          out = 4'b0000;
      3'b111: // 判断相等
        if (A == B)
          out = 4'b0001;
        else
          out = 4'b0000;
      default:
        out = 4'b0000;
    endcase
  end

  always @(*)
  begin
    // 处理溢出标志
    if (opcode == 3'b000 || opcode == 3'b001) // 加法或减法
    begin
      if ((A[3] == B[3]) && (A[3] != out[3]))
        overflow = 1;
      else
        overflow = 0;
    end
    else
      overflow = 0;

    // 处理进位标志
    if (opcode == 3'b000) // 加法
    begin
      if ((A[3] & B[3]) | (~out[3] & (A[3] | B[3])))
        carry_out = 1;
      else
        carry_out = 0;
    end
    else
      carry_out = 0;
  end

  always @(*)
  begin
 //   if (opcode == 3'b110) // 比较大小
 //   begin
 //     if (A < B)
 //      equal = 0;
 //    else
 //     equal = 1;
 //   end
    if (opcode == 3'b111) // 判断相等
    begin
      if (A == B)
        equal = 1;
      else
        equal = 0;
    end
    else
      equal = 0;
  end

endmodule
