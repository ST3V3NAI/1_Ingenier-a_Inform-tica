  .text
main: 
    # TABLA DE RESGITROS
    # a -> $s0
    # b -> $s1
    # max -> $s2
    li $s0, 5           # Cargamos $s0 = 5
    li $s1, 12          # Cargamos $s1 = 12
    blt $s0, $s1, sino  # Si ($s0 < $s1) -> sino

    move $s2, $s0       # En caso de que no se cumpla, $s2 = $s0
    li  $v1, $s2        # Imprime el entero 
    j finsi             # Salta a finsi

sino: 
    move $s2, $s1       # Si se cumple $s2 = $s1
    li $v1, $s2         # Imprime el entero

finsi:
    li $v0, 10          # Finaliza el programa
    syscall             # Llama al sistema
