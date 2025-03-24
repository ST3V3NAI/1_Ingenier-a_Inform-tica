   .data
objeto1:
        .float 109.45
        .double 56.12
        .word 2
objeto2:
        .float 35.7
        .double 25.9
        .word 2
   .text
main: 
        # $t1 almacena dirección
        # de comienzo de objeto1
        la $t1, objeto1

        # accedemos elem -> offset 12
        lw $s1, 12 ($t1)
        # accedemos largo -> offset 0
        l.s $f21, 0 ($t1)
        # accedemos peso -> offset 4
        l.d $f22, 4($t1)

        # $t1 almacena dirección
        # de comienzo de objeto 1
        la $t2, objeto2
        # accedemos elem -> offset 12
        lw $s2, 12 ($t2)