        .text
main: 
        li $v0, 5
        syscall
        move $s0, $v0

        li $v0, 1
        move $a0, $s0
        syscall

        li $v0, 10
        syscall

        .data
strTitulo: .asciiz "Prueba de impresión de número enteros\n"
strAutor: .asciiz "Steven, 70652456K, alu1619613@ull.edu.es\n" 