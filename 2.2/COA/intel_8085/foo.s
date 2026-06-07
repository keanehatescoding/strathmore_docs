jmp start
;section .data
num1: db 1
num2: db 2
res: db 0

;section .text
start
lda a, num1   ;copy num1 to a
mov b, a      ;copy a to b
lda a, num2   ;copy num1 to a
add b 	      ; a = a + b
hlt	      ; call the syscall
