%ifndef PRINT_STRING_ASM
%define PRINT_STRING_ASM

PRINT_STRING:
	pusha
	mov ah, 0x0e

	LOOP:
		cmp byte [bx], 0
		je OUT
		mov al, [bx]
		int 0x10
		add bx, 1
		jmp LOOP

	OUT:
		popa
		ret

%endif
