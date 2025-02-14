# Nombre: Steven Abolaji Ibidokun
# Fecha de la última modificación: 14/02/25
# Hora de la última modificación: 14:40i
        .data
strTitulo: .asciiz "PR1. Principios de Computadores. \n"
cadExplica: .asciiz "Un numero primo es un número natural mayor que 1 que es divisible \t
unicamente entre 1 y el mismo. Este programa descubre los \t
numero primos en un rango de numeros naturales [a, b] siendo \t
a y b naturales mayores que 1. El programa debera comprobar \t
que se cumpla ademas que b es mayor o igual que a y que son \t
menores que 1001 para que ejecute en tiempo razonable. \n"
cadLimiteInferior: .asciiz "Introduce el limite inferior [a]: "
cadLimiteSuperior: .asciiz "Introduce el límite superior [b]: "
cadError: .asciiz "Error, vuelve a introducir el rango. "
cadEspacio: .asciiz " "
cadFinDePrograma: .asciiz "Fin del programa.\n"
        .text
main: 
        # TABLA DE REGISTROS
        # limite_inferior -> $s0 
        # limite_superior -> $s1
        # parameter_i -> $s2
        # parameter_j -> $t3
        # resto_de_la_division -> $t4
        # EsPrimo -> $s3
# -----------------------------------------------------------------------------------------------------------------------------
# #include <iostream>
# int main() {
#   int limite_inferior{0}, limite_superior{0}, parameter_i, parameter_j;
#   bool esPrimo; 
#   std::cout << "PR1. Principios de Computadores. \n"
        li $v0, 4                       # Instrucción para imprimir string
        la $a0, strTitulo               # Llamada a la dirección del titulo
        syscall                         # Llamada al sistema
#             << "\n"
        li $v0, 11                      # Instrucción para imrpimir un caracter
        la $a0, '\n'                    # LLamada a la dirección caracter
        syscall                         # Llamada al sistema
#             << "Un numero primo es un número natural mayor que 1 que es divisible \n"
#             << "unicamente entre 1 y el mismo. Esye programa descubre los \n"
#             << "numero primos en un rango de numeros naturales [a, b] siendo \n "
#             << "a y b naturales mayores que 1. El programa debera comprobar \n"
#             << "que se cumpla ademas que b es mayor o igual que a y que son \n"
#             << "menores que 1001 para que ejecute en tiempo razonable. \n"
        li $v0, 4                      # Instrucción para imprimir un string
        la $a0, cadExplica             # Llamada a la dirección cadExplica
        syscall                        # Llamada al sistema
#             << "\n";
        li $v0, 11                     # Instrucción para imprimir un caracter
        la $a0, '\n'                   # Llamada al sistema del caracter '\n' 
        syscall                        # Llamada al sistema
#     while (true) {
bucle_while_true: 
#         std::cout << "Introduce el limite inferior [a]: ";
        li $v0, 4                       # Instrucción para imrpimir string
        la $a0, cadLimiteInferior       # Llamada a la dirección de la cadena del limite inferior
        syscall                         # Llamada al sistema
#         std::cin >> limite_inferior; 
        li $v0, 5                       # Instrucción para solitar un entero
        syscall                         # Llamada al sistema
        move $s0, $v0                   # Movemos el registros $v0 = $s0


if_while_true: 
        li $t0, 2                       # Cargamos de forma inmediata $t0 = 2
        li $t1, 1000                    # Cargamos de forma inmediata $t1 = 1000
#         if(limite_inferior < 2 || limite_inferior > 1000) {
#             std::cout << "Error, vuelve a introducir el rango." << std::endl; 
#             continue; 
#          }
        blt $s0, $t0, while_not_true_1  # Si ($s0 < $t0) -> while_not_true
        bgt $s0, $t1, while_not_true_1  # Si ($s0 > $t1) -> while_not_true
        
bucle_while_true_2: 
#         std::cout << "Introduce el límite superior [b]: ";
        li $v0, 4                       # Instructcción para imprimir string
        la $a0, cadLimiteSuperior       # Llamada a la dirección de la cadena del limite superior
        syscall                         # Llamada al sistema
#         std::cin >> limite_superior; 
        li $v0, 5                       # Instrucción para imrpimir string
        syscall                         # Llamada al sistema
        move $s1, $v0                   # Movemos el registro $v0 = $s1


if_while_true_2:       
        li $t0, 2                       # Cargamos de forma inmediata $t0 = 2
        li $t1, 1000                    # Cargamaos de forma inmediata $t1 = 1000
#         if(limite_superior < 2 || limite_superior < limite_inferior || limite_superior > 1000) {
#             std::cout << "Error, vuelve a introducir el rango. " << std::endl;
#             continue; 
#         }
#         break;
#     }
        blt $s1, $t0, while_not_true_2  # Si ($s1 < $t0) -> while_not_true_2
        blt $s1, $s0, while_not_true_2  # Si ($s1 < $s0) -> while_not_true_2
        bgt $s1, $t1, while_not_true_2  # Si ($s1 > $t1) -> while_not_true_2
        j bucle_for                     # Si se cumplen las condiciones -> bucle_for

while_not_true_1: 
        li $v0, 4                       # Instrucción para imprimir string
        la $a0, cadError                # Llamada a la dirección de la cadena de Error
        syscall                         # Llamada al sistema

        li $v0, 11                      # Instrucción para imprimir un caracter
        la $a0, '\n'                    # Llamada a la dirección de un caracter espacio
        syscall                         # Llamada al sistema
        j bucle_while_true              # Saltamos al bucle while_true

while_not_true_2: 
        li $v0, 4                       # Instrucción para imprimir string
        la $a0, cadError                # Llamada a la dirección de la cadena de Error
        syscall                         # Llamada al sistema

        li $v0, 11                      # Instrucción para imprimir un caracter
        la $a0, '\n'                    # Llamada a la dirección de un caracter espacio
        syscall                         # Llamada al sistema
        j bucle_while_true_2            # Saltamos al bucle while_true_2

bucle_for: 
#     for(parameter_i = limite_inferior; limite_inferior < limite_superior; parameter_i++) {
        move $s2, $s0                   # Movemos el contenido del registro $s0 a $s2

for_dentro: 
        bge $s0, $s1, while_fin         # Si (limite_inferior < limite_superior) -> while_fin
#       blt  $s0, $s1, while_fin        # Si ($s0 < $s1 ) -> while_fin
        addi $s2, 1                     # Le sumamo 1 al iterador (parameter_i)
#         esPrimo = true; 

bucle_for_2: 
#         for(parameter_j = 2; parameter_j < parameter_i; parameter_j++) {
        li $t3, 2                       # Cargamos de forma inmediata $t3 = 2
for_dentro_2:
        bge $t3, $s2, while_fin         # Si ($t3 < $s2) -> while_fin
#        blt $t3, $s2, if_bucle_for_2   # Si ($t3 < $s2) -> while_fin
        addi $t3, 1                     # Le sumamos 1 al iterador (parameter_j)

if_bucle_for_2: 
#             if(parameter_i % parameter_j == 0) {
        div $t0, $t3                    # Dividimos $t0 / $t3 
        mfhi $t4                        # Almacenamos el resto en $t4
        beq $t4,$zero, bucle_for        # En caso de que ($t4 == 0) -> bucle_for
#               esPrimo = false; 
#               break; 
#             }
#         }
if_bucle_for_2_dentro: 
#         if(esPrimo) {
        beqz $s3, bucle_for             # En caso de que el esPrimo sea 0, es decir falso -> bucle_for
#             std::cout << parameter_i; 
        li $v0, 1                       # Instrucción de impresión de entero
        move $a0, $s2                   # Movemos el valor ($s2 -> $a0)
        syscall                         # Llamamos al sistema
#             std::cout << " "; 
        li $v0, 4                       # Instrucción para imprimir espacio
        la $a0, cadEspacio              # Llamada a la dirección de la cadena Espacio
        syscall                         # Llamada al sistema
#         }
        j bucle_for                     # Saltamos a la etiqueta bucle_for
#     }
while_fin: 
#     std::cout << "Fin del programa.\n"; 
        li $v0, 4                       # Instrucción para imprimri un string
        la $a0, cadFinDePrograma        # Llamada a la dirección de la cadena cadFinDePrograma
        syscall                         # llamada al sistema
#     return 0;
        li $v0, 10                      # Instrucción para finalizar programa
        syscall                         # Llamada al sistema
# }