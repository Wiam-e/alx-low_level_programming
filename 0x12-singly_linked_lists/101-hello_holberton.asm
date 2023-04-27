section .data
	msg db "Hello, Holberton", 10
	
	section .text
	extern printf
	global main
main:
	mov rax, 0
	mov rdi, 0
	mov rsi, msg
	call printf

	mov rax, 0
	ret
	
