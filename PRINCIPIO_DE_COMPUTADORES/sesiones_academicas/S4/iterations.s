# Iteraciones necesarias para dividir entre 2 y llegar a 0.00005

.text
main:
    # Imprimir en consola la introducción
    la $a0, intro_msg      # Cargar en el registro el mensaje de introducción
    li $v0, 4              # Cargar la instrucción print string
    syscall                # Llamada al sistema

    # Imprimir en consola la explicación
    la $a0, explanation_msg # Cargar en el registro el mensaje de explicación
    li $v0, 4              # Cargar la instrucción print string
    syscall                # Llamada al sistema

    # Solicitar al usuario un número flotante de doble precisión
    li $v0, 7              # Cargar la instrucción read double
    syscall
    mov.d $f20, $f0        # Mover el número ingresado al registro $f20
    abs.d $f20, $f20       # Mantener en el registro $f20 el valor absoluto del número

    # Cargar el valor de 0.00005 en $f22 y el divisor 2.0 en $f24
    l.d $f22, limit
    l.d $f24, divisor

    # Inicializar el contador de iteraciones a 0
    li $t0, 0

evaluation:
    # Comprobar si es menor o igual que 0.00005
    c.lt.d $f20, $f22       # Comprobar que $f20 < $f22
    bc1t finish             # Acabar la evaluación si es menor

    div.d $f20, $f20, $f24  # Realizar $f20 = $f20 / $f24
    addi $t0, $t0, 1        # Aumentar el contador de iteraciones en 1

    j evaluation            # Volver a evaluar el número

finish:
    la $a0, final_msg       # Cargar en el registro el mensaje final
    li $v0, 4              # Cargar la instrucción print string
    syscall                # Llamada al sistema

    move $a0, $t0          # Mover el valor del contador al registro $a0
    li $v0, 1              # Cargar la instrucción print int
    syscall                # Llamada al sistema

    # Terminar programa
    li $v0, 10             # Cargar la instrucción de finalizar el programa
    syscall                # Llamada al sistema

.data
intro_msg: .asciiz "Calculadora de iteraciones.\n"
explanation_msg: .asciiz "Introduce un número flotante de doble precisión para saber cuántas veces habrá que dividir entre 2 para llegar a 0.00005: "
final_msg: .asciiz "El número de iteraciones necesarias es: "
limit: .double 0.00005
divisor: .double 2.0
