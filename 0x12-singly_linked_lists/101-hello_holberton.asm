section .data
	msg db "Hello, Holberton", 10
	
	section .text
	extern printf
	global main
main:
	mov rax, 0
	mov rdi, 0
	mov rsi, msg
	mov rdx, 13
	call printf

	mov rax, 0
	ret
	
