module seg(
    input [2:0] i_seg,
    output reg [7:0] o_seg
);

    parameter num0 = 8'b1111_1100;
    parameter num1 = 8'b0110_0000;
    parameter num2 = 8'b1101_1010;
    parameter num3 = 8'b1111_0010;
    parameter num4 = 8'b0110_0110;
    parameter num5 = 8'b1011_0110;
    parameter num6 = 8'b1011_1110;
    parameter num7 = 8'b1110_0000;
    parameter num8 = 8'b1111_1110;
    parameter num9 = 8'b1111_0110;
   
      /*
    parameter num0 = 7'b1111_110;
    parameter num1 = 7'b0110_000;
    parameter num2 = 7'b1101_101;
    parameter num3 = 7'b1111_001;
    parameter num4 = 7'b0110_011;
    parameter num5 = 7'b1011_011;
    parameter num6 = 7'b1011_111;
    parameter num7 = 7'b1110_000;
    parameter num8 = 7'b1111_111;
    parameter num9 = 7'b1111_011;
     */
    always @(i_seg) begin
        case(i_seg)
            3'd0 : o_seg = ~num0;
            3'd1 : o_seg = ~num1;
            3'd2 : o_seg = ~num2;
            3'd3 : o_seg = ~num3;
            3'd4 : o_seg = ~num4;
            3'd5 : o_seg = ~num5;
            3'd6 : o_seg = ~num6;
            3'd7 : o_seg = ~num7;   
            //3位 111最大为7
            
        endcase
    end
endmodule

