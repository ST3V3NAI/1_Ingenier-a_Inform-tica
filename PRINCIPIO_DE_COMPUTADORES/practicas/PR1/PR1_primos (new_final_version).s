# Nombre: Steven Abolaji Ibidokun
# Fecha de la última modificación: 19/02/25
# Hora de la última modificación: 20:43
        .data
strTitulo: .ascii "\nPR1. Principios de Computadores.\n"; 
                .ascii "\nUn numero primo es un natural mayor que 1 que es divisble\n" 
                .ascii "unicamente entre 1 y el mismo. Este programa descubre los\n"
                .ascii "numero primos en un rango de numero naturales [a,b] siendo\n"
                .ascii "a y b naturales mayores que 1. El programa debera comprobar\n"
                .ascii "que se cumple ademas que b es mayor o igual que a y que son\n"
                .asciiz "menores que 1001 para que ejecute en tiempo razonable.\n\n";
cadLimiteInferior: .asciiz "Introduce el limite inferior [a]: "; 
cadLimiteSuperior: .asciiz "Introduce el limite superior [b]: "; 
cadError: .asciiz "Error, vuelve a introducir el rango.\n"; 
cadEspacio: .asciiz " "
cadFinDePrograma: .asciiz "\nFin del programa.\n"
        .text
        # TABLA DE REGISTROS
        # $s0 -> limite_inferior 
        # $s1 -> limite_superior
        # $s2 -> parameter_i
        # $t2 -> parameter_j
        # $s3 -> verificador de EsPrimo 
        # $s5 -> resto de la división    
        # $s6 -> cte{2}
        # $s7 -> cte{1000}
# -----------------------------------------------------------------------------
main: 
# #include <iostream>
# int main() {
#   int limite_inferior{0}, limite_superior{0}, parameter_i, parameter_j;
#   bool esPrimo; 
#   std::cout << "PR1. Principios de Computadores. \n"
#     std::cout << "\nPR1. Principios de Computadores.\n";
#     std::cout << "\nUn numero primo es un natural mayor que 1 que es divisble\n" 
#              << "unicamente entre 1 y el mismo. Este programa descubre los\n"
#              << "numero primos en un rango de numero naturales [a,b] siendo\n"
#              << "a y b naturales mayores que 1. El programa debera comprobar\n"
#              << "que se cumple ademas que b es mayor o igual que a y que son\n"
#              << "menores que 1001 para que ejecute en tiempo razonable.\n\n";
#             << "\n"
        li $v0, 4                       
        la $a0, strTitulo             
        syscall                         
#     while (true) {
bucle_while_true: 
#         std::cout << "Introduce el limite inferior [a]: ";
        li $v0, 4                       
        la $a0, cadLimiteInferior       
        syscall                         
#         std::cin >> limite_inferior; 
        li $v0, 5                      
        syscall                         
        move $s0, $v0                   
if_while_true: 
# Inicializamos en $t0 = 2 y $t1 = 1000 
        li $s6, 2                      
        li $s7, 1000                    
#         if(limite_inferior < 2 || limite_inferior > 1000) {
#             std::cout << "Error, vuelve a introducir el rango." << std::endl; 
#             continue; 
#          }
        blt $s0, $s6, while_not_true_1      
        bgt $s0, $s7, while_not_true_1          

bucle_while_true_2: 
#         std::cout << "Introduce el límite superior [b]: ";
        li $v0, 4                       
        la $a0, cadLimiteSuperior       
        syscall                         
#         std::cin >> limite_superior; 
        li $v0, 5                      
        syscall                         
        move $s1, $v0                   


if_while_true_2:       
#         if(limite_superior < 2 || limite_superior < limite_inferior || limite_superior > 1000) {
#             std::cout << "Error, vuelve a introducir el rango. " << std::endl;
#             continue; 
#         }
#         break;
#     }
        blt $s1, $s6, while_not_true_1  
        blt $s1, $s0, while_not_true_1 
        bgt $s1, $s7, while_not_true_1  
        j bucle_for                     # Si se cumplen -> bucle_for

while_not_true_1: 
        li $v0, 4                       # Instrucción para imprimir string
        la $a0, cadError                # Llamada a la dirección de la cadError
        syscall                         # Llamada al sistema
        
        j bucle_while_true              # Saltamos al bucle while_true

bucle_for: 
#     for(parameter_i = limite_inferior; limite_inferior < limite_superior; parameter_i++) {
        li $s2, 0                       # Inicializamos $s2
        move $s2, $s0                   # Movemos $s0 a $s2

for_dentro: 
        bgt $s2, $s1, while_fin         
#         esPrimo = true; 
        li $s3, 1                       # Esprimo = verdadero{1}
bucle_for_2: 
#         for(parameter_j = 2; parameter_j < parameter_i; parameter_j++) {
        li $t2, 2                       # Cargamos de forma inmediata $t2 = 2
for_dentro_2:
        bge $t2, $s2, if_bucle_for_2_dentro    # Si se cumple -> if_bucle_for_dentro
#             if(parameter_i % parameter_j == 0) {
if_dentro: 
       div $s2, $t2                    # Dividimos $s2 / $t2
       mfhi $s5                        # Almacenamos el resto en $s5

       beq $s5,$zero, marcar_no_primo  # En caso de que ($s5 == 0) -> bucle_for

       addi $t2, 1                     # Le suma 1 a parameter_j++
       j for_dentro_2                  # Continua el bucle
#               esPrimo = false; 
#               break; 
marcar_no_primo: 
        li $s3, 0                       # esPrimo = false{0}
        j siguiente_numero              # Salta a la siguiente iteración
#             }
#         }
if_bucle_for_2_dentro: 
#         if(esPrimo) {
        bne $s3, $zero, imprimir_primo  # Si esPrimo es != 0 -> imprime_primo
#             std::cout << parameter_i; 
        j siguiente_numero              # Salta a la siguiente iteracion 

imprimir_primo: 
        li $v0, 1                       # Instrucción para imprimir un nuemro entero
        move $a0, $s2                   # Movemos el valor de $s2 a $a0
        syscall                         # Llamamos al sistema   
#             std::cout << " "; 
        li $v0, 4                       # Intsrucción para imprimir una cadena
        la $a0, cadEspacio              # Cargamos la dirección de la cadEspacio
        syscall                         # Llamamos al sistema

siguiente_numero: 
        addi $s2, $s2, 1                # Seguimos con el sig. numero
        j for_dentro 
#       }     

while_fin: 
#     std::cout << "Fin del programa.\n"; 
        li $v0, 4                       # Instrucción para imprimir un string
        la $a0, cadFinDePrograma        # Llamada a la direccion cadFinDePrograma
        syscall                         # llamada al sistema
#     return 0;
        li $v0, 10                      # Instrucción para finalizar programa
        syscall                         # Llamada al sistema
# }