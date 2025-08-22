; O.data é onde você armazena dados, como textos.
section .data
	; 'msg' é o nome da nossa string.
	; 'db' significa 'Define Byte'.
	; '0xa' é o caractere de nova linha (como \n com C).
	msg db "Olá, Mundo!", 0xa

	; 'len' é o comprimento da nossa string.
	; '$' significa a posição atual na memória, e 'msg' é o início da string.
	; A subtração nos dá o tamanho.
	len equ $ - msg

; O .text é onde você armazena o código executável.
section .text
	; 'global _start' informa ao linker que '_start' é o ponto de entrada do programa.
	; É como a função 'main' do C.
	global _start

; O rótulo '_start' marca o início do nosso código.
_start:
	; --- Chamada de Sistema para ESCREVER ('write') ---
	; Precisamos informar ao sistema operacional o que queremos que ele faça.

	; 1. mov rax, 1
	;	'mov' move um valor para um registrador do processador.
	;	'rax' é o registrador onde colocamos o número da syscall.
	;	O número para 'sys_write' (escrever) é 1.
	mov rax, 1

	; 2. mov rdi, 1
	;	'rdi' é o registrador para o primeiro argumento.
	;	O argumento 1 da syscall 'write' é o 'file descriptor'.
	;	O valor 1 significa 'standard output' (a tela/terminal).
	mov rdi, 1

	; 3. mov rsi, msg
	;	'rsi' é o registrador para o segundo argumento.
	;	O argumento 2 da syscall 'write' é o 'buffer' (o endereço do texto).
	;	'msg' é o endereço da nossa string no .data.
	mov rsi, msg

	; 4. mov rdx, len
	;	'rdx' é o registrador para o terceiro argumento.
	;	O argumento 3 da syscall 'write' é o 'count' (o número de bytes para escrever).
	;	'len' é o tamanho da nossa string que calculamos.
	mov rdx, len

	; 5. syscall
	;	A instrução 'syscall' executa a chamada ao sistema operacional.
	syscall

	; --- Chamada de Sistema para SAIR ('exit') ---
	; É crucial sair do programa corretamente.

	; 1. mov rax, 60
	;	O número para 'sys_exit' é 60.
	mov rax, 60
	
	; 2. mov rdi, 0
	;	O primeiro argumento para a syscall 'exit' é o código de saída.
	;	O valor 0 significa que o programa terminou com sucesso.
	mov rdi, 0

	; 3. syscall
	;	Executa a chamada para sair do programa.
	syscall
