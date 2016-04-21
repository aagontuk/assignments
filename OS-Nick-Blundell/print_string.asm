PRINT_STRING:
	pusha
	mov ah, 0x0e

	LOOP:
		mov cl, [bx]
		cmp cl, 0
		je OUT
		mov al, cl
		int 0x10
		add bx, 1
		jmp LOOP

	OUT:
		popa
		ret
