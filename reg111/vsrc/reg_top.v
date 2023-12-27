module reg_top(
    input 		clk,
    input	[8:0]	i_seg,
    output 	[7:0] 	seg_data,
    output 	[7:0] 	o_seg_1,
    output 	[7:0] 	o_seg_0
);

    lfsr_random u_lfsr_random(
        .clk(clk), 
        .seg_data(seg_data)
    );

     seg_hex seg_hex_u(
        .seg_data(seg_data),
        .o_seg_0(o_seg_0),
        .o_seg_1(o_seg_1)
    );
    


endmodule
