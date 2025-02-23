# División de números flotantes en simple precisión

.text
main:
    # Imprimir mensaje de introducción
    la $a0, intro_msg
    li $v0, 4
    syscall

    # Imprimir mensaje de petición
    la $a0, request_dividendo_msg
    li $v0, 4
    syscall

    # Leemos por consola el valor del dividendo
    li $v0, 6
    syscall
    mov.s $f20, $f0  # Se almacena el valor del dividendo en $f20

    la $a0, request_divisor_msg
    li $v0, 4
    syscall

    # Leemos por consola el valor del divisor
    li $v0, 6
    syscall
    mov.s $f22, $f0  # Se almacena el valor del divisor en $f22

    # Cargar el valor 0 en $f0 para hacer las comparaciones
    l.s $f4, float_zero

    # Realizamos las comprobaciones
    c.eq.s $f22, $f4
    bc1t zero_division

normal_division:
    # Operamos
    div.s $f24, $f20, $f22

    # Imprimir el mensaje de resultado
    la $a0, result_msg
    li $v0, 4
    syscall

    # Imprimir el resultado de la multiplicación
    mov.s $f12, $f24
    li $v0, 2
    syscall

    j end  # Saltar el resto de comprobaciones

zero_division:
    # Comprobaciones adicionales
    c.eq.s $f20, $f4  # Comprobar si el dividendo es también 0
    bc1t indeterminate  # Saltar a la etiqueta de indeterminación

    c.lt.s $f20, $f4  # Comprobar si el dividendo es negativo
    bc1t negative_inf  # Saltar a la etiqueta de infinito negativo

negative_inf:
    # Imprimir el mensaje correspondiente
    la $a0, negative_infinite_msg
    li $v0, 4
    syscall

    j end  # Saltar el resto de comprobaciones

positive_inf:
    # Imprimir el mensaje correspondiente
    la $a0, positive_infinite_msg
    li $v0, 4
    syscall

    j end  # Saltar el resto de comprobaciones

indeterminate:
    # Imprimir el mensaje correspondiente
    la $a0, indet_msg
    li $v0, 4
    syscall

end:
    # Terminar el programa
    li $v0, 10
    syscall

.data
intro_msg: .asciiz "División de números flotantes en simple precisión\n"
request_dividendo_msg: .asciiz "Introduce el dividendo: "
request_divisor_msg: .asciiz "Introduce el valor del divisor: "
result_msg: .asciiz "El resultado es: "
indet_msg: .asciiz "Indeterminación\n"
positive_infinite_msg: .asciiz "Más infinito\n"
negative_infinite_msg: .asciiz "Menos infinito\n"
float_zero: .float 0.0
