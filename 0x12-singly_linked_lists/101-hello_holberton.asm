
	global	main
	extern	printf

main:
	mov	rdi, fmt
	mov	rax, 0
	call	printf
	
	mov	rax, 0
	ret
fmt:	db `Hello, Hoberton\n`, 0
