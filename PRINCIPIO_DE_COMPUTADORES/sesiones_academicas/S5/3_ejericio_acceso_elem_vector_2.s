   .data
vec:
        .word 3, 9, 5, 7
# dir(i) = dir.base + i * tamaño dato
# vec[3] -> dir(3) = 134 + 3 * 4 = 146
# int s0 = vec[3];
# int s1 = vec[0];
# int s2 = vec[2];
# int vec[4] = {3, 9, 5, 7};
# Constate en tiempo de ensamblado = Similar a constexpr
tamW = 4

        .text
main: 
        # t0 = dir base de vec
        la $t0, vec

        # int s5 = 3;
        li $s5, 3

        # int s0 = vec[s5];
        # t2 = desplaza = i * tamaño
        mul $t2, $s5, tamW
        # t3 = base + desplazameinto
        add $t3, $t0, $t2

        lw $s0, 0($t3)

        # int s6 = 0
        li $s6, 0

        # int s1 = vec[s6];
        # t4 = desplaza = i * tamaño
        mul $t4, $s6, tamW
        # t5 = base + desplaza
        add $t5, $t0, $t4

        lw $s1, 0 ($t5) 
