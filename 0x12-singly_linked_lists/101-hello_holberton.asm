
	global main
	extern printf

section .text
main:
	mov rdi, fmt
	mov rsi, msg
	mov rax, 0
	call printf
	mov rax, 0
	ret

section .data
	fmt db "Hello, %s", 10, 0
	msg db "Holberton", 0
