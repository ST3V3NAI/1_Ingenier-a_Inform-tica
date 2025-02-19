# Nombre: Steven Abolaji Ibidokun
# Fecha de la última modificación: 18/02/25
# Hora de la última modificación: 17:47
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
        # $t3 -> parameter_j
        # $t4 -> resto de la división
        # $s3 -> verificador de EsPrimo
        
# -----------------------------------------------------------------------------------------------------------------------------
main: 
# #include <iostream>
# int main() {
#   int limite_inferior{0}, limite_superior{0}, parameter_i, parameter_j;
#   bool esPrimo; 
#   std::cout << "PR1. Principios de Computadores. \n"
#     std::cout << "\nPR1. Principios de Computadores.\n";
#    std::cout << "\nUn numero primo es un natural mayor que 1 que es divisble\n" 
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
        li $t0, 2                          # Iniclalizamos en $t0 = 2 y $t1 = 1000 
        li $t1, 1000                    
#         if(limite_inferior < 2 || limite_inferior > 1000) {
#             std::cout << "Error, vuelve a introducir el rango." << std::endl; 
#             continue; 
#          }
        blt $s0, $t0, while_not_true_1  
        bgt $s0, $t1, while_not_true_1          

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
        blt $s1, $t0, while_not_true_2  
        blt $s1, $s0, while_not_true_2  
        bgt $s1, $t1, while_not_true_2  
        j bucle_for                    

while_not_true_1: 
        li $v0, 4                       # Instrucción para imprimir string
        la $a0, cadError                # Llamada a la dirección de la cadena de Error
        syscall                         # Llamada al sistema

        li $v0, 11                      # Instrucción para imprimir un caracter
        li $a0, '\n'                    # Llamada a la dirección de un caracter espacio
        syscall                         # Llamada al sistema
        j bucle_while_true              # Saltamos al bucle while_true

while_not_true_2: 
        li $v0, 4                       # Instrucción para imprimir string
        la $a0, cadError                # Llamada a la dirección de la cadena de Error
        syscall                         # Llamada al sistema

        li $v0, 11                      # Instrucción para imprimir un caracter
        li $a0, '\n'                    # Llamada a la dirección de un caracter espacio
        syscall                         # Llamada al sistema
        j bucle_while_true              # Saltamos al bucle while_true

bucle_for: 
#     for(parameter_i = limite_inferior; limite_inferior < limite_superior; parameter_i++) {
        move $s2, $s0                   # Movemos el contenido del registro $s0 a $s2

for_dentro: 
        bgt $s2, $s1, while_fin
        li $s3, 1
#         esPrimo = true; 

bucle_for_2: 
#         for(parameter_j = 2; parameter_j < parameter_i; parameter_j++) {
        li $t3, 2                       # Cargamos de forma inmediata $t3 = 2
for_dentro_2:
        bge $t3, $s2, if_bucle_for_2_dentro
#             if(parameter_i % parameter_j == 0) {

if_dentro: 
       div $s2, $t3                    # Dividimos $t0 / $t3 
       mfhi $t4                        # Almacenamos el resto en $t4

       beq $t4,$zero, marcar_no_primo  # En caso de que ($t4 == 0) -> bucle_for

       addi $t3, 1                     
       j for_dentro_2                  # Continua el bucle
#               esPrimo = false; 
#               break; 
marcar_no_primo: 
        li $s3, 0                       # esPrimo = false(0)
        j siguiente_numero              # Salta a la siguiente ietración para imprimir el siguinete numero
#             }
#         }
if_bucle_for_2_dentro: 
#         if(esPrimo) {
        bne $s3, $zero, imprimir_primo  # En caso de que el esPrimo sea != 0, es decir falso -> imprime_primo
#             std::cout << parameter_i; 
        j siguiente_numero              # Saltar a la siguiente iteración si no es primo

imprimir_primo: 
        li $v0, 1                       
        move $a0, $s2                   
        syscall                         
#             std::cout << " "; 
        li $v0, 4                       
        la $a0, cadEspacio              
        syscall                        

siguiente_numero: 
        addi $s2, $s2, 1                
        j for_dentro 
#       }     

while_fin: 
#     std::cout << "Fin del programa.\n"; 
        li $v0, 4                       # Instrucción para imprimri un string
        la $a0, cadFinDePrograma        # Llamada a la dirección de la cadena cadFinDePrograma
        syscall                         # llamada al sistema
#     return 0;
        li $v0, 10                      # Instrucción para finalizar programa
        syscall                         # Llamada al sistema
# }