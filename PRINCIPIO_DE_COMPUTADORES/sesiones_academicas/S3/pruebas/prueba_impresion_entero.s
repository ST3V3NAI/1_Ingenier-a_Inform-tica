        .text
main: 
        li $v0, 4
        move $s0, $v0
        syscall

        li $v0, 1
        move $a0, $s0
        syscall