# Nombre de autor: [Tu nombre aquí]
# Fecha de creación: [Fecha de creación]
# Manejo de matrices en MIPS

# Definiciones de constantes
MAXELTOS = 100       # Número máximo de elementos
nFil = 0             # Desplazamiento al campo nFil en la estructura
nCol = 4             # Desplazamiento al campo nCol en la estructura
datos = 8            # Desplazamiento al campo elementos en la estructura
sizeF = 4            # Tamaño de un float en bytes

    .data
# Definición de las matrices
mat1:   .word 6
        .word 6
        .float 11.11, 12.12, 13.13, 14.14, 15.15, 16.16
        .float 21.21, 22.22, 23.23, 24.24, 25.25, 26.26
        .float 31.31, 32.32, 33.33, 34.34, 35.35, 36.36
        .float 41.41, 42.42, 43.43, 44.44, 45.45, 46.46
        .float 51.51, 52.52, 53.53, 54.54, 55.55, 56.56
        .float 61.61, 62.62, 63.63, 64.64, 65.65, 66.66

mat2:   .word 7
        .word 10
        .float -36.886, -58.201, 78.671, 19.092, -50.781, 33.961, -59.511
        .float 12.3125, 57.306, -1.938, -86.858, -81.852, 54.623, -22.574
        .float 88.217, 64.374, 52.875, 47.918, -83.549, 19.041, 4.255, -31.875
        .float 82.526, 27.394, 56.527, 39.448, 18.429, 97.057, 76.933
        .float 14.583, 67.79, -9.861, -97.875, 32.369, -18.494, -43.392, 39.857
        .float 87.65625, -31.875, -17.786, 30.073, 87.65625, -6.889, 64.601
        .float -85.018, 70.559, -48.853, -62.627, -60.147, -5.524, 84.323
        .float -51.718, 93.127, -10.757, 32.119, 98.3125, 69.471, 73.814
        .float 3.724, 57.208, -41.528, -17.458, -64.226, -71.297, -97.875
        .float 7.095, -79.112, 33.819, 63.531, -96.181

mat3:   .word 1
        .word 8
        .float -36.52, 35.3, 79.05, -58.69, -55.23, -19.44, -88.63, -93.61

mat4:   .word 16
        .word 1
        .float -90.57, -65.11, -58.21, -73.23, -89.38, -79.25, 16.82, 66.3
        .float -96.14, -97.16, -24.66, 5.27, -33.5, -13.09, 27.13, -74.83

mat5:   .word 1
        .word 1
        .float 78.98

mat6:   .word 0
        .word 0
        .float 0.0

mat7:   .word 0
        .word 0
        .space MAXELTOS * sizeF  # Espacio para la matriz 7

# Cadenas de caracteres
titulo:     .asciiz "\nComienza programa manejo matrices\n"
dimstr:     .asciiz "\n\nLa matriz tiene dimension "
xstr:       .asciiz "x"
menu:       .ascii  "(0) Terminar el programa\n"
            .ascii  "(1) Cambiar la matriz de trabajo\n"
            .ascii  "(2) Definir matriz 7\n"
            .ascii  "(3) Cambiar un valor de la matriz\n"
            .ascii  "(7) Contar valores superiores a un umbral\n"
            .asciiz "\nIntroduce opción elegida: "
petmat:     .asciiz "\nElije la matriz de trabajo (1..7): "
errmat:     .asciiz "Numero de matriz de trabajo incorrecto\n"
petnf:      .asciiz "Introduce el numero de filas: "
errnf:      .asciiz "Error: dimension incorrecta. Numero de filas incorrecto\n"
petnc:      .asciiz "Introduce el numero de columnas: "
errnc:      .asciiz "Error: dimension incorrecta. Numero de columnas incorrecto\n"
errmax:     .asciiz "Error: dimension incorrecta. Demasiados elementos\n"
petel:      .asciiz "Introduce el elemento ("
petcom:     .asciiz ","
petel2:     .asciiz "): "
petfil:     .asciiz "\nIndice de fila: "
errfil:     .asciiz "Error: dimension incorrecta. Numero de fila incorrecto\n"
petcol:     .asciiz "Indice de columna: "
errcol:     .asciiz "Error: dimension incorrecta. Numero de columna incorrecto\n"
petval:     .asciiz "Nuevo valor para el elemento: "
petum:      .asciiz "Introduce el umbral: "
umbstr:     .asciiz "\nNumero de valores superiores al umbral: "
erropc:     .asciiz "Error: opcion incorrecta\n"
finstr:     .asciiz "\nTermina el programa\n"

    .text
    .globl main

# Programa principal
main:
    # Imprimir título
    li $v0, 4
    la $a0, titulo
    syscall

    # Inicializar matriz de trabajo
    la $s7, mat1  # Matriz de trabajo inicial

while:
    # Imprimir la matriz actual
    jal print_mat

    # Mostrar menú
    li $v0, 4
    la $a0, menu
    syscall

    # Leer opción
    li $v0, 5
    syscall
    move $s0, $v0

    # Procesar opción
    beq $s0, 0, termina_programa
    beq $s0, 1, cambiar_matriz
    beq $s0, 2, definir_matriz7
    beq $s0, 3, cambiar_valor
    beq $s0, 7, contar_superiores_umbral

    # Opción incorrecta
    li $v0, 4
    la $a0, erropc
    syscall
    j while

# Función para imprimir la matriz
print_mat:
    lw $t1, nFil($s7)  # Número de filas
    lw $t2, nCol($s7)  # Número de columnas
    la $t3, datos($s7) # Dirección de los elementos

    # Imprimir dimensiones
    li $v0, 4
    la $a0, dimstr
    syscall

    li $v0, 1
    move $a0, $t1
    syscall

    li $v0, 4
    la $a0, xstr
    syscall

    li $v0, 1
    move $a0, $t2
    syscall

    li $v0, 11
    li $a0, 10
    syscall

    # Recorrer e imprimir la matriz
    move $t4, $zero  # Índice de filas
for_print:
    move $t5, $zero  # Índice de columnas
for_col:
    mul $t6, $t4, $t2
    add $t6, $t6, $t5
    mul $t6, $t6, sizeF
    add $t6, $t6, $t3
    l.s $f12, 0($t6)
    li $v0, 2
    syscall

    li $v0, 11
    li $a0, 32
    syscall

    addi $t5, $t5, 1
    blt $t5, $t2, for_col

    li $v0, 11
    li $a0, 10
    syscall

    addi $t4, $t4, 1
    blt $t4, $t1, for_print

    jr $ra

# Opción 1: Cambiar la matriz de trabajo
cambiar_matriz:
    li $v0, 4
    la $a0, petmat
    syscall

    li $v0, 5
    syscall
    move $s1, $v0

    beq $s1, 1, cambiar1
    beq $s1, 2, cambiar2
    beq $s1, 3, cambiar3
    beq $s1, 4, cambiar4
    beq $s1, 5, cambiar5
    beq $s1, 6, cambiar6
    beq $s1, 7, cambiar7

    li $v0, 4
    la $a0, errmat
    syscall
    j while

cambiar1:
    la $s7, mat1
    j while

cambiar2:
    la $s7, mat2
    j while

cambiar3:
    la $s7, mat3
    j while

cambiar4:
    la $s7, mat4
    j while

cambiar5:
    la $s7, mat5
    j while

cambiar6:
    la $s7, mat6
    j while

cambiar7:
    la $s7, mat7
    j while

# Opción 2: Definir matriz 7
definir_matriz7:
    li $v0, 4
    la $a0, petnf
    syscall

    li $v0, 5
    syscall
    move $t1, $v0  # Número de filas

    blt $t1, 1, error_nf
    bgt $t1, MAXELTOS, error_nf

    li $v0, 4
    la $a0, petnc
    syscall

    li $v0, 5
    syscall
    move $t2, $v0  # Número de columnas

    blt $t2, 1, error_nc
    bgt $t2, MAXELTOS, error_nc

    mul $t3, $t1, $t2
    bgt $t3, MAXELTOS, error_max

    sw $t1, nFil($s7)
    sw $t2, nCol($s7)

    move $t4, $zero  # Índice de filas
for_fil:
    move $t5, $zero  # Índice de columnas
for_col2:
    li $v0, 4
    la $a0, petel
    syscall

    li $v0, 1
    move $a0, $t4
    syscall

    li $v0, 4
    la $a0, petcom
    syscall

    li $v0, 1
    move $a0, $t5
    syscall

    li $v0, 4
    la $a0, petel2
    syscall

    li $v0, 6
    syscall
    s.s $f0, datos($s7)

    addi $t5, $t5, 1
    blt $t5, $t2, for_col2

    addi $t4, $t4, 1
    blt $t4, $t1, for_fil

    j while

error_nf:
    li $v0, 4
    la $a0, errnf
    syscall
    j while

error_nc:
    li $v0, 4
    la $a0, errnc
    syscall
    j while

error_max:
    li $v0, 4
    la $a0, errmax
    syscall
    j while

# Opción 3: Cambiar un valor de la matriz
cambiar_valor:
    li $v0, 4
    la $a0, petfil
    syscall

    li $v0, 5
    syscall
    move $t1, $v0  # Índice de fila

    lw $t2, nFil($s7)
    blt $t1, 0, error_fila
    bge $t1, $t2, error_fila

    li $v0, 4
    la $a0, petcol
    syscall

    li $v0, 5
    syscall
    move $t3, $v0  # Índice de columna

    lw $t4, nCol($s7)
    blt $t3, 0, error_columna
    bge $t3, $t4, error_columna

    li $v0, 4
    la $a0, petval
    syscall

    li $v0, 6
    syscall
    s.s $f0, datos($s7)

    j while

error_fila:
    li $v0, 4
    la $a0, errfil
    syscall
    j while

error_columna:
    li $v0, 4
    la $a0, errcol
    syscall
    j while

# Opción 7: Contar valores superiores a un umbral
contar_superiores_umbral:
    li $v0, 4
    la $a0, petum
    syscall

    li $v0, 6
    syscall
    mov.s $f1, $f0  # Umbral

    lw $t1, nFil($s7)
    lw $t2, nCol($s7)
    la $t3, datos($s7)

    move $t4, $zero  # Contador
    move $t5, $zero  # Índice de filas
for_fil2:
    move $t6, $zero  # Índice de columnas
for_col3:
    mul $t7, $t5, $t2
    add $t7, $t7, $t6
    mul $t7, $t7, sizeF
    add $t7, $t7, $t3
    l.s $f2, 0($t7)

    c.lt.s $f1, $f2
    bc1f no_supera
    addi $t4, $t4, 1

no_supera:
    addi $t6, $t6, 1
    blt $t6, $t2, for_col3

    addi $t5, $t5, 1
    blt $t5, $t1, for_fil2

    li $v0, 4
    la $a0, umbstr
    syscall

    li $v0, 1
    move $a0, $t4
    syscall

    j while

# Terminar el programa
termina_programa:
    li $v0, 4
    la $a0, finstr
    syscall

    li $v0, 10
    syscall