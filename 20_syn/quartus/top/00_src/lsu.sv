module lsu
(
    input  logic [2:0] funct3,  
    output logic [4:0] LSType
); 

  always_comb 
    case(funct3) 
        3'b000:     LSType = 5'b10000; // lb, sb
        3'b001:     LSType = 5'b01000; // lh, sh
        3'b010:     LSType = 5'b00100; // lw, sw  
        3'b100:     LSType = 5'b00010; // lbu
        3'b101:     LSType = 5'b00001; // lhu
      default:      LSType = 5'b00000; // illegal
    endcase 

endmodule:lsu
