section .data
msg db "Hello, Holberton", 0
fmt db "%s", 10, 0
	
	section .text
	extern printf
	global main
main:
	mov rax, 0
	mov rdi, fmt
	mov rsi, msg
	call printf

	mov rax, 0
	ret
	
