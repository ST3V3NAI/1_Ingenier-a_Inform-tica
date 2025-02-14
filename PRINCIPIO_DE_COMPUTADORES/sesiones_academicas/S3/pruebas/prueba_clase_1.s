# Impresión del mensaje hola mundo

	.data 
saludo: .asciiz "Hola mundo \n"
	.text

main: 
	li $v0, 4
	la $a0, saludo
	syscall