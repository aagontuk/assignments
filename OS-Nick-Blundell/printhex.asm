; This routine will print value of dx register
; into hex

; Hex Template Manipulation
mov bx, HEX_TEMP
add bx, 5

HLOOP:
	cmp byte [bx], 'x'
	je HOUT
	mov ax, 0x000f
	and ax, dx
	cmp ax, 0x09
	jg HCHAR
	add ax, 0x30

HCOMM:
	mov byte [bx], al
	shr dx, 4
	sub bx, 1
	jmp HLOOP
	
HCHAR:
	sub ax, 0x0a
	add ax, 0x61
	jmp HCOMM

HOUT:

mov bx, HEX_TEMP
call PRINT_STRING

%include "print_string.asm"

HEX_TEMP:
	db '0x0000', 0
