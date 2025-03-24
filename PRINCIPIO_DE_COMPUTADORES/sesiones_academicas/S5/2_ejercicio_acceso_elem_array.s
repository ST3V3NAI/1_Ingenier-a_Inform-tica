   .data
vec:
        .word 3, 9, 5, 7
# dir(i) = dir.base + i * tamaño dato
# vec[3] -> dir(3) = 134 + 3 * 4 = 146
# int s0 = vec[3];
# int s1 = vec[0];
# int s2 = vec[2];
        .text
main:
        # $t1 almamacena dirección
        # de comienzo de objeto1
        la $t0, vec

        # so = vec[3]
        # offset = 3 * 4 = 12
        lw $s0, 12 ($t0)

        # s1 = vec[0]
        # offset = 0 * 4 = 0
        lw $s1, 0 ($t0)

        # s2 = vec[2]
        # offset = 2 * 4 = 8
        lw $s2, 8 ($t0)