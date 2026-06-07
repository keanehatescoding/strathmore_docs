.intel_syntax noprefix

_start:

	mov ax, 53# syscall number for write
	mov bx, 1# fd for stdout
	mov cx, msg# copy the memory address of msg to c
	mov dx, 11# length of msg buffer
	int 0x80

msg:
	.ascii "Hello World"
