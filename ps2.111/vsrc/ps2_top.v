module ps2_top(
	input 		clk,
	input 		rst,
	input 		ps2_clk,
	input 		ps2_data,
	output 	[7:0] 	seg0,
	output 	[7:0] 	seg1,
	output 	[7:0] 	seg2,
	output 	[7:0] 	seg3,
	output 	[7:0] 	seg4,
	output 	[7:0] 	seg5,
	output 	[7:0] 	seg6,
	output 	[7:0] 	seg7,
	output 		overflow
);


reg	ready;				
reg	nextdata_n;

reg	[7:0]	data;		
reg 	[7:0] 	seg_data_0;
reg 	[7:0] 	seg_data_1;
reg 	[7:0] 	seg_data_2;

reg 	[7:0] 	key_value;
reg 	[7:0] 	ascii_value;
reg 	[7:0] 	key_count;
reg 	[2:0] 	key_current,key_next;

parameter	[2:0] 	key_press = 3'b100;
parameter	[2:0] 	key_loosen = 3'b010;
parameter 	[2:0] 	key_loosen_ahead = 3'b001;


seg_hex seg_hex_inst0(
	.i_seg(seg_data_0),
	.o_seg_0(seg0),
	.o_seg_1(seg1)
);

seg_hex seg_hex_inst1(
	.i_seg(seg_data_1),
	.o_seg_0(seg2),
	.o_seg_1(seg3)
);

seg_hex seg_hex_inst2(
	.i_seg(seg_data_2),
	.o_seg_0(seg4),
	.o_seg_1(seg5)
);

seg_hex seg_hex_inst3(
	.i_seg(8'h00),
	.o_seg_0(seg6),
	.o_seg_1(seg7)
);

ps2 ps2_inst1(
	.clk(clk),
	.clrn(!rst),
	.ps2_clk(ps2_clk),
	.ps2_data(ps2_data),
	.nextdata_n(nextdata_n),
	.data(data),
	.ready(ready),
	.overflow(overflow)
);

rom rom_inst1(
	.key_value(data),
	.ascii_value(seg_data_1)
);
 
always @(*) begin
	seg_data_0 = key_value;
	seg_data_2 = key_count;
	seg_data_1 = ascii_value;
end
   

always @(posedge clk or posedge rst) begin
	if(rst) begin
		key_current <= key_loosen;
	end
	else begin
		key_current <= key_next;
	end
end 

always @(negedge clk or posedge rst) begin
 	if(rst) begin
		key_count <= 8'b0;
		key_value <= 8'b0;
		key_next <= key_loosen;
		end
	else if(ready) begin
	case(key_current)
		key_loosen: begin
			if(data == key_value) begin 
 				key_value <= 8'h00;  
 				ascii_value  <= 8'h00;       	
				key_value <= key_value;
				key_next <= key_current;
 				key_count <= key_count;
                	end
			else begin 
				key_value <= data;				
				key_next <= key_press;
				key_count <= key_count;
			end
		end
		key_press: begin 
			if(data == 8'hf0) begin		//判断接收到的数据是否等于"0xF0"，即键盘的松开动作 讲义键盘协议
				key_value <= key_value;
				ascii_value  <= 8'h00;
				key_next <= key_loosen_ahead;
				key_count <= key_count + 1'b1;
			end
			else if(data == key_value) begin
				key_value <= key_value;
				key_next <= key_press;
				key_count <= key_count;
			end
			else begin
				key_value <= 8'h00;
				key_next <= key_loosen;
				key_count <= 8'b0;
			end
		end
		key_loosen_ahead: begin
			if(data == key_value) begin
				key_value <= 8'h00;
				key_next <= key_loosen;
				key_count <= key_count;
			end
			else begin 
				key_value <= 8'b0;
				key_next <= key_loosen;
				key_count <= key_count;
 			end
		end
		default: begin
			key_value <= 8'b0;
			key_next <= key_current;
			key_count <= key_count;
		end
	endcase
	end
	else begin
		key_count <= key_count;
		key_value <= key_value;
		case(key_current)
			key_loosen: key_next <= key_loosen;
			key_press: key_next <= key_press;
			key_loosen_ahead: key_next <= key_loosen_ahead;
			default: key_next <= key_loosen;
		endcase
	end
end



endmodule

