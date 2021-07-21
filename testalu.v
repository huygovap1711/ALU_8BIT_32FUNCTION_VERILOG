`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:20:22 03/28/2021
// Design Name:   ALU
// Module Name:   E:/FPGA/alu/testalu.v
// Project Name:  alu
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testalu;

	// Inputs
	reg [7:0] A;
	reg [7:0] B;
	reg [4:0] Opcode;

	// Outputs
	wire [15:0] ALU_Out;
	wire CarryOut;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.A(A), 
		.B(B), 
		.Opcode(Opcode), 
		.ALU_Out(ALU_Out), 
		.CarryOut(CarryOut)
	);

	initial begin
		// Initialize Inputs
		A = 8'b01100111;
		B = 8'b10011000;
		Opcode= 5'b00000;
		#100;
		Opcode= 5'b00001;
		#100;
		Opcode= 5'b00010;
		#100;
		Opcode= 5'b00011;
		#100;
		Opcode= 5'b00100;
		#100;
		Opcode= 5'b00101;
		#100;
		Opcode= 5'b00110;
		#100;
		Opcode= 5'b00111;
		#100;
		Opcode= 5'b01000;
		#100;
		Opcode= 5'b01001;
		#100;
		Opcode= 5'b01010;
		#100;
		Opcode= 5'b01011;
		#100;
		Opcode= 5'b01100;
		#100;
		Opcode= 5'b01101;
		#100;
		Opcode= 5'b01110;
		#100;
		Opcode= 5'b01111;
		#100;
		Opcode= 5'b10001;
		#100;
		Opcode= 5'b10010;
		#100;
		Opcode= 5'b10011;
		#100;
		Opcode= 5'b10100;
		#100;
		Opcode= 5'b10101;
		#100;
		Opcode= 5'b10110;
		#100;
		Opcode= 5'b10111;
		#100;
		Opcode= 5'b11000;
		#100;
		Opcode= 5'b11001;
		#100;
		Opcode= 5'b11010;
		#100;
		Opcode= 5'b11011;
		#100;
		Opcode= 5'b11100;
		#100;
		Opcode= 5'b11101;
		#100;
		Opcode= 5'b11110;
		#100;
		Opcode= 5'b11111;
		#100;
		Opcode= 5'b00110;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

