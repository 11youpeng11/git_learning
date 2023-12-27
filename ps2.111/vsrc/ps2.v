module ps2(
    input   clk,
    input   clrn,
    input   ps2_clk,
    input   ps2_data,
    input   nextdata_n,
    output  [7:0]  data,
    output  reg ready,
    output  reg overflow
    );
    //内部信号 
    reg [9:0] buffer;          // 存储 ps2_data 的位
    reg [7:0] fifo[7:0];     // data fifo
    reg [2:0] w_ptr,r_ptr;   // fifo write and read pointers  fifo写/读指针
    reg [3:0] count;  // 计数器，用于计算 ps2_data 的位数
   
    reg [2:0] ps2_clk_sync;   //  同步下降沿ps2_clk

    always @(posedge clk) begin
        ps2_clk_sync <=  {ps2_clk_sync[1:0],ps2_clk};	//每当时钟信号 clk 上升沿触发时，ps2_clk_sync 寄存器的值会更新为 ps2_clk_sync 的前两个位值和当前的 ps2_clk 值。
    end

    wire sampling = ps2_clk_sync[2] & ~ps2_clk_sync[1];	//一个时钟下降沿的采样条件

    always @(posedge clk) begin
        if (clrn == 0) begin // reset
            count <= 0; w_ptr <= 0; r_ptr <= 0; overflow <= 0; ready<= 0;
        end
        else begin
            if ( ready ) begin // read to output next data
                if(nextdata_n == 1'b0) //read next data
                begin
                    r_ptr <= r_ptr + 3'b1;
                    if(w_ptr==(r_ptr+1'b1)) //empty
                        ready <= 1'b0;
                end
            end
            if (sampling) begin
              if (count == 4'd10) begin
                if ((buffer[0] == 0) &&  // start bit起始
                    (ps2_data)       &&  // stop bit 停止位
                    (^buffer[9:1])) begin      // odd  parity
                    fifo[w_ptr] <= buffer[8:1];  // kbd scan code
                    w_ptr <= w_ptr+3'b1;
                    ready <= 1'b1;
                    overflow <= overflow | (r_ptr == (w_ptr + 3'b1));
                end
                count <= 0;     // for next
              end else begin
                buffer[count] <= ps2_data;  // store ps2_data
                count <= count + 3'b1;
              end
            end
        end
    end
    assign data = fifo[r_ptr]; //always set output data

endmodule

