module lfsr_random (
  input        clk,         
  output [7:0] seg_data           
);

  reg    [7:0] lfsr;        

  always @(posedge clk) begin
    if (lfsr == 8'b00) begin     // 处理全零状态
      lfsr <= 8'b01;
    end else begin
      //lfsr <= {lfsr[6:0], lfsr[7] ^ lfsr[5] ^ lfsr[4] ^ lfsr[3]};	//左移
      lfsr <= {lfsr[4] ^ lfsr[3] ^ lfsr[2] ^ lfsr[0], lfsr[7:1]};
    end
  end

  assign seg_data  = lfsr;          // 将LFSR输出赋值给数码管显示值

endmodule
