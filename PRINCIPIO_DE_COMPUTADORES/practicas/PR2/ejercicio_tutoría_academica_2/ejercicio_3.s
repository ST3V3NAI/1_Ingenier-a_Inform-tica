# Realiza un programa en MIPS que haga lo siguiente:
# Si se cumple la siguiente condición:( ($t1 < $t3) && ($t2 >= $t3)) || (($t2-$t3) == $t1)
# entonces $t5 debe valer 1. $t5 debe valer cero en caso contrario.
# Ejecuta en Qtspim paso a paso el programa, y antes de ejecutar la primera instrucción
# prueba con los siguientes grupos de valores. ¿Te dan resultados correctos?
# $t1 = 1, $t2 = 2, $t3 = 1
# $t1 = 1, $t2 = 3, $t3 = 1
# --------------------------------------------------------------------------------
# primer numero -> $t1
# segundo numero -> $t2
# tercer numero -> $t3
# resultado -> $t5

main:          
    li $v0, 5                      # Lee el primer registro
    syscall                        # Llama al sistema
    move $t1, $v0                  # Deposita el valor del registro en $t1

    li $v0, 5                      # Lee el segundo registro
    syscall                        # Llama al sistema
    move $t2, $v0                  # Deposita el valor del registro en $t2

    li $v0, 5                      # Lee el tercer regsitro
    syscall                        # Llama al sistema
    move $t3, $v0                  # Deposita el valor del registro en $t3

if: 
    blt $t1, $t3, if_next          # Si ($t1 < $t3) -> if_next
    b   if_or                      # En caso contrario, evalua (($t2-$t3) == $t1)

if_next: 
    bge $t2, $t3, if_dentro       # SI ($t2 >= $t3) -> if_dentro

if_or:
    sub $t4, $t3, $t2             # Se resta $t3-$t2 = $t4
    beq $t4, $t2, if_dentro       # Si ($t4 == $t2) -> if_dentro
    b   if_dentro_2               # En caso contrario -> if_dentro_2


if_dentro_1:
    li $t5, 1                     # Cargamos valor $t5 = 1
    b  if_fin                     # Saltamos a la etiqueta if_fin

if_dentro_2: 
    li $t5, 0                     # Cargamos valor $t5 = 0

if_fin: 
    li $v0, 10                    # Finaliza el programa
    syscall                       # Llamada al sistema

    .data
tituto:     .asciiz "PRINCIPIO DE COMPUTADORES. Ejercicio 1.\n"
alumno:     .asciiz "Steven, 70652456K, alu1619613@ull.edu.es\n"
    



