org 0x7c00

; Hex Num to be printed
mov dx, 0x1e2f

; Hex Template Manipulation
mov bx, HEX_TEMP
add bx, 5

MLOOP:
	cmp byte [bx], 'x'
	je MOUT
	mov ax, 0x000f
	and ax, dx
	cmp ax, 0x09
	jg CHAR
	add ax, 0x30

COMM:
	mov byte [bx], al
	shr dx, 4
	sub bx, 1
	jmp MLOOP
	
CHAR:
	sub ax, 0x0a
	add ax, 0x61
	jmp COMM

MOUT:

mov bx, HEX_TEMP
call PRINT_STRING

jmp $

%include "print_string.asm"

HEX_TEMP:
	db '0x0000', 0

times 510-($-$$) db 0
dw 0xaa55
