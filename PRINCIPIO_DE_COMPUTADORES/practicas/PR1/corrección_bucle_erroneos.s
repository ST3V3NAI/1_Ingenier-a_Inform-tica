if_bucle_for_2: 
        div $s2, $t3                # Dividimos parameter_i ($s2) entre parameter_j ($t3)
        mfhi $t4                    # Almacenamos el resto en $t4
        beq $t4, $zero, set_no_primo  # Si el resto es 0, se encontró un divisor

        # (Aquí iría el incremento y verificación de parameter_j para seguir comprobando)
        j next_inner_loop           # Salta a la siguiente iteración del bucle interno

set_no_primo:
        li $s3, 0                   # Establece esPrimo a falso (0)
        j for_dentro               # Rompe el bucle interno y pasa al siguiente número

if_bucle_for_2_dentro: 
        bnez $s3, print_prime       # Si esPrimo es verdadero (1), se imprime parameter_i
        j for_dentro               # Si no es primo, pasa al siguiente número

print_prime:
        li $v0, 1                   # Instrucción para imprimir entero
        move $a0, $s2               # Mueve parameter_i a $a0
        syscall                     # Llamada al sistema para imprimir el número
        li $v0, 4                   # Instrucción para imprimir cadena (espacio)
        la $a0, cadEspacio          # Carga la dirección de la cadena " "
        syscall                     # Llamada al sistema
        j for_dentro               # Salta al siguiente número
