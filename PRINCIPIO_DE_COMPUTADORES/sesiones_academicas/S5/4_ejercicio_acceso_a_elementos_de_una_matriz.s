# Dirección de elemento de fila f y columna c
# intn mat[3][4] = {
# {00, 01, 02, 03}
# {10, 11, 12, 13}
# {20, 21, 22, 23}
# };
        # int so = 1;
        # int s1 = 2;
        # int s5 = mat[s0][s1];  
# dir(f,c) = dir. base + f* tam_fila + c* tam elem
# dir(f,c) = dir.base + (f*num_col + c) * tam_elem
# dir(1,, 2) = 0 + (1* 4  + 2) * 4
   .data
tamW = 4
numColmat = 4
mat:    .word 00, 01, 02, 03
        .word 10, 11, 12, 13
        .word 20, 21, 22, 23
   .text
main: 
        li $s0, 1 #s0 = 1
        li $s1, 2 #s1 = 2

        # mat [s0][s1]
        # t0 = dir base de mat
        la $t0, mat
        # t1 = f*numCol
        mul $t1, $s0, numColmat
        # t1 = dirBase + (f*numCol + c)*tamEle
        add $t1, $t0, $t1

        # int s5 = mat [s0][s1];
        lw $s5, 0($t1)
        # mat[s0][s1] = s6
        sw $s6, 0($t1)