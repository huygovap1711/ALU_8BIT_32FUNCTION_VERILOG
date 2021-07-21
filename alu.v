`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    03:53:19 03/22/2021 
// Design Name: 
// Module Name:    alu 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module ALU(
           input [7:0] A,B,  // ALU 8-bit Inputs                 
           input [4:0] Opcode,// ALU Opcode
           output [15:0] ALU_Out, // ALU 8-bit Output
           output CarryOut // Carry Out Flag
    );
    reg [15:0] ALU_Result;
    wire [8:0] tmp;
    assign ALU_Out = ALU_Result; // ALU out
    assign tmp = {1'b0,A} + {1'b0,B};
    assign CarryOut = tmp[8]; // Carryout flag
    always @(*)
    begin
        case(Opcode)
        5'b00000: ALU_Result = A + B ; // Addition
        5'b00001: ALU_Result = A - B ; // Subtraction
		  5'b00010: ALU_Result = A * B ; // Multiplication
		  5'b00011: ALU_Result = B - A ; // Subtraction
        5'b00100: ALU_Result = A + 1 ; // Increment A
        5'b00101: ALU_Result = A - 1 ; // Decrement A
		  5'b00110: ALU_Result = ~A + 1'b1 ; // Two's complement A
        5'b00111: ALU_Result = ~B + 1'b1 ; // Two's complement B
		  5'b01000: ALU_Result = A ; // Pass through A
		  5'b01001: ALU_Result = B ; // Pass through B
		  5'b01010: ALU_Result = A<<1 ; // Logic shift left
		  5'b01011: ALU_Result = A>>1 ; // Logic shift right
		  5'b01100: ALU_Result = A<<<1 ; // Arthmetism shift left
        5'b01101: ALU_Result = A>>>1 ; // Arthmetism shift right
        5'b01110: ALU_Result = B<<1 ; // Logic shift left
        5'b01111: ALU_Result = B>>1 ; // Logic shift right
        5'b10000: ALU_Result = B<<<1 ; // Arthmetism shift left
		  5'b10001: ALU_Result = B>>>1 ; // Arthmetism shift right
        5'b10010: ALU_Result = {A[6:0],A[7]} ; // Rotate left A
		  5'b10011: ALU_Result = {A[0],A[7:1]} ; // Rotate right A
		  5'b10100: ALU_Result = {B[6:0],B[7]} ; // Rotate left B
		  5'b10101: ALU_Result = {B[0],B[7:1]} ; // Rotate right B
		  5'b10110: ALU_Result = ~A ; // Logical not A (One's complement)
		  5'b10111: ALU_Result = ~B ; // Logical not B (One's complement)
        5'b11000: ALU_Result = A & B ; //  Logical and 
        5'b11001: ALU_Result = A | B ; //  Logical or
        5'b11010: ALU_Result = A ^ B ; //  Logical xor 
        5'b11011: ALU_Result = ~(A | B) ; //  Logical nor
        5'b11100: ALU_Result = ~(A & B) ; // Logical nand 
        5'b11101: ALU_Result = ~(A ^ B) ; // Logical xnor
        5'b11110: ALU_Result = (A>B)?16'd1:16'd0 ; // Greater comparison
        5'b11111: ALU_Result = (A==B)?16'd1:16'd0 ; // Equal comparison   
        default: ALU_Result = 16'b0 ; 
        endcase
    end
endmodule
