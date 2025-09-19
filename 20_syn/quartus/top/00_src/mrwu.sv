`timescale 1ns/1ps

module mrwu
(
    input   logic   [31:0]  ReadData, WriteData_raw,
    input   logic   [4:0]   LSType,
    output  logic   [31:0]  ReadData_result, WriteData
);

// Load
always_comb
    case (LSType)
        5'b10000: begin
            ReadData_result = {{24{ReadData[7]}}, ReadData[7:0]};           // lb
            WriteData = {ReadData_result[31:8],  WriteData_raw[7:0]};       // sb
        end
        5'b01000: begin
            ReadData_result = {{16{ReadData[15]}}, ReadData[15:0]};         // lh
            WriteData = {ReadData_result[31:16], WriteData_raw[15:0]};      // sh
        end
        5'b00100: begin
            ReadData_result = ReadData;                                      // lw
            WriteData = WriteData_raw;                                    // sw
        end
        5'b00010: begin
            ReadData_result = {24'b0, ReadData[7:0]};                        // lbu
            WriteData = WriteData_raw;                                    // (unused)
        end
        5'b00001: begin
            ReadData_result = {16'b0, ReadData[15:0]};                       // lhu
            WriteData = WriteData_raw;                                    // (unused)   
        end
        default: begin
            ReadData_result = ReadData;                                      // illegal
            WriteData = WriteData_raw;                                    // illegal
        end
    endcase

endmodule:mrwu

