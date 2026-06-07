
;<Program title>

jmp start

;data
num1: db 1
result: db 0

;code
start: nop
; indirect memory addressing
lxi h, num1
mov b, m
; immediate addressing
mvi a, 5
add b
sta result
hlt