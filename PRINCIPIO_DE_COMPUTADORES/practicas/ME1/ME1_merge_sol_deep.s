# Principio de Computadores. Preparación para el Microexamen
# Operaciones con funciones y direccionamiento indirecto
# Autor: Carlos Martin Galan
# Fecha última modificación:  26/4/2024

# Constantes
sizeD = 8           # Tamaño de un double en bytes
LF = 10             # Código ASCII para salto de línea
SPACE = 32          # Código ASCII para espacio

    .data
# Vectores de datos (iguales que en el programa C++)
n1:     .word 10
v1:     .double 10.5, 9.5, 7.25, 6.25, 5.75, 4.5, 4.25, 3.5, -1.5, -2.0
n2:     .word 5
v2:     .double 5.5, 4.5, 4.25, 2.5, 2.5
n3:     .word 4
v3:     .double 7.0, 5.0, 2.0, 1.0

# Cadenas para la salida (igual que las usadas en cout en C++)
titulo:     .asciiz "\nPrograma de mezcla de vectores\n"
cad_dim:    .asciiz "\nVector con dimension "
cad_mezcla: .asciiz "\nIntentando mezcla con dos vectores ...\n"
cad_fin:    .asciiz "\nFIN DEL PROGRAMA\n"
err_ord1:   .asciiz "Primer vector no ordenado. NO se puede mezclar\n"
err_ord2:   .asciiz "Segundo vector no ordenado. NO se puede mezclar\n"

    .text

# Función printvec - equivalente a la función C++
# void printvec(double *v, const int n) {
printvec:
    # Guardar registros en la pila
    addi $sp, -16
    sw $s0, 0($sp)     # Guardar $s0 (dirección del vector)
    sw $s1, 4($sp)     # Guardar $s1 (número de elementos)
    sw $s2, 8($sp)     # Guardar $s2 (contador i)
    sw $ra, 12($sp)    # Guardar dirección de retorno
    
    move $s0, $a0      # $s0 = dirección del vector
    move $s1, $a1      # $s1 = número de elementos
    li $s2, 0          # $s2 = i = 0
    
    # Imprimir cadena de dimensión
    li $v0, 4
    la $a0, cad_dim
    syscall
    
    # Imprimir número de elementos
    li $v0, 1
    move $a0, $s1
    syscall
    
    # Imprimir salto de línea
    li $v0, 11
    li $a0, LF
    syscall
    
    # Bucle para imprimir los elementos del vector
printvec_loop:
    bge $s2, $s1, printvec_end  # Si i >= n, terminar
    
    # Calcular dirección del elemento v[i]
    mul $t0, $s2, sizeD
    add $t0, $s0, $t0
    
    # Imprimir v[i]
    li $v0, 3
    l.d $f12, 0($t0)
    syscall
    
    # Imprimir espacio
    li $v0, 11
    li $a0, SPACE
    syscall
    
    # Incrementar contador
    addi $s2, $s2, 1
    j printvec_loop

printvec_end:
    # Imprimir salto de línea final
    li $v0, 11
    li $a0, LF
    syscall
    
    # Restaurar registros de la pila
    lw $s0, 0($sp)
    lw $s1, 4($sp)
    lw $s2, 8($sp)
    lw $ra, 12($sp)
    addi $sp, 16
    
    jr $ra             # Retornar

# Función ordenado - equivalente a la función C++
# int ordenado(double *v, const int n) {
ordenado:
    # Guardar registros en la pila
    addi $sp, -12
    sw $s0, 0($sp)     # Guardar $s0 (contador i)
    sw $s1, 4($sp)     # Guardar $s1 (n-1)
    sw $ra, 8($sp)     # Guardar dirección de retorno
    
    li $v0, 1          # resultado = 1 (asumir que está ordenado)
    li $s0, 0          # i = 0
    addi $s1, $a1, -1  # $s1 = n-1
    
ordenado_loop:
    bge $s0, $s1, ordenado_end  # Si i >= n-1, terminar
    
    # Calcular dirección de v[i]
    mul $t0, $s0, sizeD
    add $t0, $a0, $t0
    
    # Cargar v[i] y v[i+1]
    l.d $f4, 0($t0)
    l.d $f6, sizeD($t0)
    
    # Comparar v[i+1] >= v[i]
    c.lt.d $f4, $f6       # Si v[i] < v[i+1], entonces no está ordenado
    bc1t ordenado_no
    
    # Incrementar contador
    addi $s0, $s0, 1
    j ordenado_loop

ordenado_no:
    li $v0, 0          # resultado = 0 (no está ordenado)

ordenado_end:
    # Restaurar registros de la pila
    lw $s0, 0($sp)
    lw $s1, 4($sp)
    lw $ra, 8($sp)
    addi $sp, 12
    
    jr $ra             # Retornar

# Función merge - equivalente a la función C++
# void merge(double *v1, const int n1, double *v2, const int n2) {
merge:
    # Guardar registros en la pila
    addi $sp, -32
    sw $s0, 0($sp)     # Guardar $s0 (v1)
    sw $s1, 4($sp)     # Guardar $s1 (n1)
    sw $s2, 8($sp)     # Guardar $s2 (v2)
    sw $s3, 12($sp)    # Guardar $s3 (n2)
    sw $s4, 16($sp)    # Guardar $s4 (i)
    sw $s5, 20($sp)    # Guardar $s5 (j)
    sw $ra, 24($sp)    # Guardar dirección de retorno
    sw $a0, 28($sp)    # Guardar argumentos originales
    
    move $s0, $a0      # $s0 = v1
    move $s1, $a1      # $s1 = n1
    move $s2, $a2      # $s2 = v2
    move $s3, $a3      # $s3 = n2
    
    # Verificar si v1 está ordenado
    jal ordenado
    beqz $v0, merge_err1
    
    # Verificar si v2 está ordenado
    move $a0, $s2
    move $a1, $s3
    jal ordenado
    beqz $v0, merge_err2
    
    # Inicializar índices
    li $s4, 0          # i = 0
    li $s5, 0          # j = 0
    
    # Primer bucle while: mezclar mientras haya elementos en ambos vectores
merge_loop1:
    bge $s4, $s1, merge_loop1_end  # Si i >= n1, terminar
    bge $s5, $s3, merge_loop1_end  # Si j >= n2, terminar
    
    # Calcular direcciones de v1[i] y v2[j]
    mul $t0, $s4, sizeD
    add $t0, $s0, $t0
    l.d $f4, 0($t0)    # $f4 = v1[i]
    
    mul $t0, $s5, sizeD
    add $t0, $s2, $t0
    l.d $f6, 0($t0)    # $f6 = v2[j]
    
    # Comparar v1[i] >= v2[j]
    c.le.d $f6, $f4    # Si v2[j] <= v1[i]
    bc1f merge_else
    
    # Imprimir v1[i]
    li $v0, 3
    mov.d $f12, $f4
    syscall
    
    # Imprimir espacio
    li $v0, 11
    li $a0, SPACE
    syscall
    
    # Incrementar i
    addi $s4, 1
    j merge_loop1_cont

merge_else:
    # Imprimir v2[j]
    li $v0, 3
    mov.d $f12, $f6
    syscall
    
    # Imprimir espacio
    li $v0, 11
    li $a0, SPACE
    syscall
    
    # Incrementar j
    addi $s5, 1

merge_loop1_cont:
    j merge_loop1

merge_loop1_end:

    # Segundo bucle while: imprimir elementos restantes de v1
merge_loop2:
    bge $s4, $s1, merge_loop2_end
    
    # Calcular dirección de v1[i]
    mul $t0, $s4, sizeD
    add $t0, $s0, $t0
    l.d $f12, 0($t0)
    
    # Imprimir v1[i]
    li $v0, 3
    syscall
    
    # Imprimir espacio
    li $v0, 11
    li $a0, SPACE
    syscall
    
    # Incrementar i
    addi $s4, 1
    j merge_loop2

merge_loop2_end:

    # Tercer bucle while: imprimir elementos restantes de v2
merge_loop3:
    bge $s5, $s3, merge_loop3_end
    
    # Calcular dirección de v2[j]
    mul $t0, $s5, sizeD
    add $t0, $s2, $t0
    l.d $f12, 0($t0)
    
    # Imprimir v2[j]
    li $v0, 3
    syscall
    
    # Imprimir espacio
    li $v0, 11
    li $a0, SPACE
    syscall
    
    # Incrementar j
    addi $s5, 1
    j merge_loop3

merge_loop3_end:

    # Imprimir salto de línea final
    li $v0, 11
    li $a0, LF
    syscall
    
    j merge_end

merge_err1:
    # Imprimir mensaje de error para v1 no ordenado
    li $v0, 4
    la $a0, err_ord1
    syscall
    j merge_end

merge_err2:
    # Imprimir mensaje de error para v2 no ordenado
    li $v0, 4
    la $a0, err_ord2
    syscall

merge_end:
    # Restaurar registros de la pila
    lw $s0, 0($sp)
    lw $s1, 4($sp)
    lw $s2, 8($sp)
    lw $s3, 12($sp)
    lw $s4, 16($sp)
    lw $s5, 20($sp)
    lw $ra, 24($sp)
    lw $a0, 28($sp)
    addi $sp, 32
    
    jr $ra             # Retornar

# Función principal - equivalente a main() en C++
main:
    # Imprimir título
    li $v0, 4
    la $a0, titulo
    syscall
    
    # Imprimir vector v1
    la $a0, v1
    lw $a1, n1
    jal printvec
    
    # Imprimir vector v2
    la $a0, v2
    lw $a1, n2
    jal printvec
    
    # Imprimir vector v3
    la $a0, v3
    lw $a1, n3
    jal printvec
    
    # Mezclar v1 y v2
    li $v0, 4
    la $a0, cad_mezcla
    syscall
    
    la $a0, v1
    lw $a1, n1
    la $a2, v2
    lw $a3, n2
    jal merge
    
    # Mezclar v1 y v3
    li $v0, 4
    la $a0, cad_mezcla
    syscall
    
    la $a0, v1
    lw $a1, n1
    la $a2, v3
    lw $a3, n3
    jal merge
    
    # Mezclar v2 y v3
    li $v0, 4
    la $a0, cad_mezcla
    syscall
    
    la $a0, v2
    lw $a1, n2
    la $a2, v3
    lw $a3, n3
    jal merge
    
    # Imprimir mensaje de fin
    li $v0, 4
    la $a0, cad_fin
    syscall
    
    # Terminar programa
    li $v0, 10
    syscall