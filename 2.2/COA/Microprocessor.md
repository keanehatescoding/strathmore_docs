A microprocessor has several parts the main parts are:
1. The control unit
2. The ALU
3. The 
4. Register

The CPU completes a predefined set of steps to execute an instruction:
1. Fetch an instruction from the instruction queue
2. Decode the instruction and check for operands.
3. If operands are involved, fetch the operands from registers/memory
4. Execute the instruction and update the status flags
5. Store the result if required.
This is called the __fetch decode execute__ procedure.
The control unit uses a binary decoder to convert coded instructions into timing and control signals.

Register - are tiny but very fast memory storage units found in our microprocessor. Reading from registers usually takes about a single clock cycle while it takes about 4 when reading from RAM.