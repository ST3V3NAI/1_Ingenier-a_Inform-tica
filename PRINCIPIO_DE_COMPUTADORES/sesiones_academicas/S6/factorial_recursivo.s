        .data
resultado:      .word    0
        .text
# Ejemplo calcular factorial de 3
main: 
        li $a0, 4
        jal factorial
        # en $v0 queda el resultado
        sw $v0, resultado
        li $v0, 10
        syscall 

# SUBRUTINA factorial $v0 = ($a0)!
factorial: bgt $a0, $zero, masquecero
            li $v0, 1
            jr $ra 
     masquecero: 
                addi $sp, $sp, -8 # reserva 8 bytes en la pila
                sw $ra, 4($sp) # guardo $ra
                sw $a0, 0($sp) # guardo $a0

                addi $a0, $a0, -1 # fact(n) = n * fact(n-1)
                jal factorial  # llamo a fact(n-1) devuelve en $v0

                lw $a0, 0($sp) # recupero $a0 en el mismo orden
                lw $ra, 4($sp) # recupero $ra en el mismo orden
                addi $sp, $sp, 8 # dejo el puntero de pila como estaba

                mult $a0, $v0  # multiplico n*fact(n-1) que es $a0*$v0
                mflo    $v0    # dejo en $v0 el valor del factorial
                jr $ra
# FIN FUNCIÓN factorial