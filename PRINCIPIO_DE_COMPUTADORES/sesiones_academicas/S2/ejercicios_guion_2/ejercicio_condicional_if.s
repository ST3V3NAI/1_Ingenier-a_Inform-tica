# Trata de realizar un ejemplo en ensamblador que realice la evaluación de una expresión
# lógica compuesta: if (($s0 < $s1) && ($s1 == $s2)) resultado = 1
# ----------------------------------------------------------------
# Nombre de variables: 
# - variable_1 -> $s0
# - variable_2 -> $s1
# - variable_3 -> $s2
# - resultado -> $s3

    .text
main: 
    li $v0, 5
    syscall
    move $s0, $v0

    li $v0, 5
    syscall
    move $s0, $v0

if: 
    blt $s0, $s1, if_next
    b if_dentro_2

if_next: 
    beq $s1, $s2, if_dentro_1
    b if_dentro_2

if_dentro_1: 
    and $s3, $s0, $s1
    li  $t3, 1
    beq $s3, $t3, if_fin

if_dentro_2: 
    li $s3, 0
    b if_fin

if_fin: 
    li $v0, 10
    syscall

    .data
tituto:     .asciiz "PRINCIPIO DE COMPUTADORES. Ejercicio Condicional IF.\n"
alumno:     .asciiz "Steven, 70652456K, alu1619613@ull.edu.es\n"
