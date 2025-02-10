# Realiza un programa en MIPS que haga lo siguiente:
# - Si $t1 es mayor que cero y $t2 es mayor que cero, cuenta el número de enteros
# comprendidos entre 1 y $t1 que son divisibles entre $t2. Guarda esta cuenta en el
# registro $t3.
# - Si $t1 o $t2 son menores o iguales que cero, el programa no debe hacer nada.
# --------------------------------------------------------------------------------
# primer numero -> $t1
# segundo numero -> $t2
# resta de distancia -> $t3
# numero de divisores -> $s1

    .text
main:          
    li $v0, 5                      # Lee el primer registro
    syscall                        # Llama al sistema
    move $t1, $v0                  # Deposita el valor del registro en $t1

    blez  $t1, if_fin              # Si ($t1 < 0) -> if_fin

    li $v0, 5                      # Lee el segundo registro
    syscall                        # Llama al sistema
    move $t2, $v0                  # Deposita el valor del registro en $t2
    
    blez  $t2, if_fin              # Si ($t2 < 0) -> if_fin

if_then: 
    li $t3, 1                       # Cargamos $t3 = 1
    li  $s0, 0                      # Inicializamos $s0 = 0

if_dentro: 
    div $t3, $t2                    # Dividimos $t3 / $t2
    mfhi $t4                        # Almacenamos $t3 % t2 = $t4

    beqz $t4, iteracion             # Si ($t4 == 0), es divisble -> iteracion

    addi $t3, $t3, 1                # Acortamos la distancia entre 1 y $t1  
    bgt $t3, $t1, if_fin            # En caso de que ($t3 > $t2), finaliza el bucle
    b  if_dentro                    # Se produce salto para repetir el bucle
iteracion: 
    addi $s1, $s1, 1                # Incrementamos el iterador $s1
    addi $t3, $t3, 1                # Acortamos la distancia entre 1 y $t1

    bgt $t3, $t1, if_fin            # En caso de que ($t3 > $t2), finaliza el bucle
    b  if_dentro                    # Se produce un salto para repettir el bucle

if_fin: 
    li $v0, 10                      # Finaliza el programa correctamente
    syscall                         # Llamada al sistema


    .data
tituto:     .asciiz "PRINCIPIO DE COMPUTADORES. Ejercicio 1.\n"
alumno:     .asciiz "Steven, 70652456K, alu1619613@ull.edu.es\n"
