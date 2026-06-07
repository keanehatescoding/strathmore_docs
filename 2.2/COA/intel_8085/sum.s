
;<Program title>

jmp start

;data
num1: db 1
num2: db 2
result: db 0


;code
start: nop
; indirect memory addressing
lxi h, num1 ; copy address of num1 to h register  
mov b, m    ; copy [m] to b
lxi h, num2
mov c, m
; register addressing
mov a, c
add b
sta result
hlt