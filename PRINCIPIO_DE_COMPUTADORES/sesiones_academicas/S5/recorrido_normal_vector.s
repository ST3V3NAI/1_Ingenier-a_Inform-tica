#define NumElem 11
NumElem = 11
tamW = 4

        .data
        # int vec[NumElem] = {3, 9, 5, 7, -4, 14, 8, -1, 11, 2};
vec: .word 3, 9, 5, 7, -4, 14, 8, -1, 11, 2
        .text
        # Relación variables a registros
        # suma -> $s0
        # i -> $s1
        # val -> $t2
# ------------------------------------------------------
main:
    # int suma = 0;
    move $s0, $zero
    # for(int i =; i < NumElem; i++) {
    li $s1, 0

for_i:
    bge $s1, NumElem, for_i_fin

    # $t1 = dirección de vec[i]
    la $t0, vec
    mul $t1, $s1, tamW
    add $t1, $t0, $t1

    # int val = vec[i];
    lw $t2, 0($t1)

    # suma += val;
    add $s0, $s0, $t2

    # i++
    addi $s1, $s1, 1
    j for_i

for_i_fin:
    li $v0, 10
    syscall
