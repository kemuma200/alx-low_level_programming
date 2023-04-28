
extern	printf

section	.data
	msg: db "Hello, Hoberton" 0
	fmt: db "%s", 10, 0

section	.text
	global	main		

main:
	push	rbp		;set up stack frame
	mov	rdi, fmt	;fmt address
	mov	rsi, msg	;msg address
	mov	rax, 0		;set to zero, can also use xor rax,rax
	call	printf		;call printf function
	
	pop	rbp		;restore stack
	mov	rax, 0		;no error, return val
	ret			;return
	
