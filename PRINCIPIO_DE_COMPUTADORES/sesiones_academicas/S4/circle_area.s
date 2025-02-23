            .data

strTitulo:         .ascii "PRINCIPIO DE COMPUTADORES. S4.\n"
                   .asciiz "Programa que calcule el área de un círculo a partir del radio, que deberá ser introducido por el teclado por el usuario.\n";
strAlumno:         .asciiz "Steven, 70652456K, alu1619613@ull.edu.es\n"
strPide:           .asciiz "Dame el radio del circulo: "
strResultado:      .asciiz "Resultado del area: "
constPi:  .float 3.141592653589793
constDos: .float 2.000
            .text               
main:          
    li $v0, 4
    la $a0, strTitulo
    syscall 

    li $v0, 4
    la $a0, strAlumno
    syscall

pide_radio: 
    li $v0, 4
    la $a0, strPide
    syscall

convierte_radio:    
    move $s0, $v0
    mtc1 $s0, $f20

opera_radio:
    li $f21, constPi
    li $f24, constDos
    mul $f22, $f20, $f21
    mul $f23, $f22, $f24 

imprime_radio:
    li	$v0,2
	mov.s	$f12,$f23
	syscall
	# Terminamos el programa
	li	$v0,10
	syscall









