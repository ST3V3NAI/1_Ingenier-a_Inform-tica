# Realiza un programa en MIPS que haga lo siguiente:
# - calcula el mínimo de los registros $t1 y $t2 y guarda el valor en $t3
# - calcula el máximo de los registros $t1 y $t2 y guarda el valor en $t4
# - suma todos los valores entre $t3 y $t4 (ambos incluidos) en $t5
# --------------------------------------------------------------------------------
# primer numero -> $t1
# segundo numero -> $t2
# suma -> $t5

    .text
main:          
    li $v0, 5                      # Lee el primer registro
    syscall                        # Llama al sistema
    move $t1, $v0                  # Deposita el valor del registro en $t1

    li $v0, 5                      # Lee el segundo registro
    syscall                        # Llama al sistema
    move $t2, $v0                  # Deposita el valor del registro en $t2

if_1:
    blt $t1, $t2, if_then          # Si $t1 < $t2 
    b if_else                      # Si $t1 > t2

if_then: 
    move $t3, $t1                   # Mueve el valor $t1 = $t3
    move $t4, $t2                   # Mueve el valor $t2 = $t4
    b    if_fin

if_else: 
    move $t3, $t2                   # Mueve el valor $t2 = $t3         
    move $t4, $t1                   # Mueve el valor $t4 = $t1

if_fin: 
    add $t5, $t3, $t4               # $t5 = $t3 + $t4
    li $v0, 10                      # Finaliza el programa
    syscall                         # Llamada al sistema

    .data
titulo:         .asciiz "PRINCIPIO DE COMPUTADORES. Ejercicio 1.\n"
alumno:         .asciiz "Steven, 70652456K, alu1619613@ull.edu.es\n"




            
            
            
            
            
            
            
            
            
            
            
            
        