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

    li $v0, 5
    syscall 
    move $s0, $v0

convierte_radio:    
    mtc1 $s0, $f20

opera_radio:
    l.s $f22, constPi
    l.s $f24, constDos
    mul.s $f26, $f20, $f22
    mul.s $f28, $f22, $f24 

imprime_radio:
    li	$v0,2
	mov.s	$f12,$f28
	syscall
	# Terminamos el programa
	li	$v0,10
	syscall









