# Programa que compara dos numeros

# void main (void)
#       int a, b, max; 
#       a = 5;
#       b = 12;
#       if (a >= b)
#           max = a;
#       else
#           max = b;
#       return; 
# } 

    .text
main: 
    # Tabla de registros
    # a -> $s0, b -> $s1, max -> 
    
    li $s0, 5
    li $s1, 12
    blt $s0, $s1, sino

    move $s2, $s0

sino: 
    move $s2, $s1



