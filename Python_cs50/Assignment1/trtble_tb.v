module diagram_tb;

wire t_f1;
wire t_f2;
reg t_a, t_b, t_c;

diagram my_gates( .a(t_a), .b(t_b), .c(t_c), .f1(t_f1), .f2(t_f2));

initial begin
    $display("a b c f1 f2");
    $monitor(t_a, " ", t_b, " ", t_c, " ", t_f1, "  ", t_f2);

    t_a = 1'b0;
    t_b = 1'b0;
    t_c = 1'b0;

    #5
    t_a = 1'b0;
    t_b = 1'b0;
    t_c = 1'b1;

    #5
    t_a = 1'b0;
    t_b = 1'b1;
    t_c = 1'b0;

    #5
    t_a = 1'b0;
    t_b = 1'b1;
    t_c = 1'b1;

    #5
    t_a = 1'b1;
    t_b = 1'b0;
    t_c = 1'b0;

    #5
    t_a = 1'b1;
    t_b = 1'b0;
    t_c = 1'b1;

    #5
    t_a = 1'b1;
    t_b = 1'b1;
    t_c = 1'b0;

    #5
    t_a = 1'b1;
    t_b = 1'b1;
    t_c = 1'b1;
end

endmodule