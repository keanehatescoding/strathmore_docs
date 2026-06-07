The register set of the intel 8085 <abbr title="instruction set architecture">ISA</abbr> consists the following:
There are 6 general purpose registers namely:
1. B
2. C
3. D
4. E 
5. H
6. L
Each register is 8 bits in size.
To store a 16 bit value use a register and the next register i.e BC, DE, HL.

We also have 5 special registers namely:
1. A - accumulator - 8 bits
2. PSW - program status word - 16 bits
3. PC - program counter - 16 bits
4. SP - stack pointer  - 16 bits
5. Int-reg - interrupt register - 8 bits
PSW is a combination of the 8 bits of the A register and the flags register.

There are 5 flags in the flag register namely:
2. S - sign flag
3. Z - zero flag
4. 
5. AC - auxiliary carry
6. 
7. P - parity flag
8. 
9. C - carry flag

It looks like this
![[Pasted image 20251002154257.png]]
