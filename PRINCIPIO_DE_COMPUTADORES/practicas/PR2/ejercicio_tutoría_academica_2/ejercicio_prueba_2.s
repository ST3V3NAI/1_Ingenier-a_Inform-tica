# void main(void) {
#    int i; suma; 

#    i = 1; 
#    suma = 0;
#    while(i <= 100) {
#        suma += i; 
#        i++;
#    } 
#    return;
# }

    .text
main: 
    # Tabla de registros: 
    # i -> $s0, suma -> $s1
    li $s0, 1
    li $s1, 0
bucle: 
    bge $s0, 100, fuera_bucle
    add $s1, $s1, $s0
    addi $s0, 1





    j bucle

fuera_bucle: 

    li $v0, 10
    syscall


