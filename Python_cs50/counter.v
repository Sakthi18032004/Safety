module counter(input clk, input rst, output reg [31:0] count);

always@(posedge clk or posedge rst) begin
    if(clk == 1) begin
        count <= count + 32'b1;
    end else if(rst) begin
        count <= 32'b0;
    end else begin
        count <= count;
    end
end

endmodule

// module counter (
//   input clk,
//   input rst,
//   output reg [31:0] count
// );

// always @(posedge clk or posedge rst) begin
//     if (rst) begin
//         count <= 32'b0;
//     end else begin
//         count <= count + 32'b1;
//     end
// end

// endmodule