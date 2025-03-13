# Nombre del autor: Steven Abolaji Ibidokun
# Fecha de última modiciación: 11/03/25
# /*
# Introducir dos números enteros por consola. Mostrar los números del rango que va 
# desde el menor al mayor con paso 1, normalizados como flotantes entre cero y uno. 
# Por ejemplo, si se introduce 0 y 5 deberá producir 0, 0.2, 0.4, 0.6, 0.8, 1.
# */

# #include<iostream>
# int main(void) {
#     int min,max,distancia;
#     float normalizado;  

#     std::cout << "Normalizar un rango de enteros a flotantes entre 0 y 1. \nIntroduzca los límites del rango [min,max].\n";
#     do {
#         std::cout << "Introduzca límite inferior del rango (min): ";
#         std::cin >> min;
#         std::cout << "Introduzca límite superior del rango (max): ";
#         std::cin >> max;
#         if (max <= min)
#             std::cout << "Error. min tiene que ser menor estrictamente que max.\n";
#     } while (max <= min);
#     int i;
#     for (i = min ; i <= max ; i++) {
#         normalizado = float((i - min)) / float((max - min));
#         std::cout << "Normalizado(" << i << ") = " << normalizado << std::endl;
#     }
#     std::cout << "\nFIN DEL PROGRAMA.\n";
# }

        .data 
titulo: .asciiz "Normalizar un rango de enteros a flotantes entre 0 y 1. \nIntroduzca los límites del rango [min,max].\n"
cadmin: .asciiz "\nIntroduzca límite inferior del rango (min): "
cadmax: .asciiz "\nIntroduzca límite superior del rango (max): "
caderr: .asciiz "\nError. min tiene que ser menor estrictamente que max.\n"
cadfin: .asciiz "\nFIN DEL PROGRAMA.\n"
cadnor: .asciiz "\nNormalizado("
cadigu: .asciiz ") = "
cadlin: .asciiz "\n"
        .text
        # Tabla de Registros
        # $s1 -> min
        # $s2 -> max
        # $s3 -> i (loop variable)
        # $f20 -> distancia (max - min)
        # $f22 -> normalizado
#-------------------------------------------------------------------------
main: 
# #include<iostream>
# int main(void) {
#     int min,max,distancia;
#     float normalizado;  
impresion_titulo: 
# Imprime el mensaje principal del programa
#     std::cout << "Normalizar un rango de enteros a flotantes entre 0 y 1. \nIntroduzca los límites del rango [min,max].\n";
        li $v0, 4
        la $a0, titulo
        syscall

do_while:
# Pedimos los limites y comprobamos que el max siempre sea mayor que el minimo
#     do {
#         std::cout << "Introduzca límite inferior del rango (min): ";
        li $v0, 4
        la $a0, cadmin
        syscall
#         std::cin >> min;
        li $v0, 5
        syscall
        move $s1, $v0
#         std::cout << "Introduzca límite superior del rango (max): ";
        li $v0, 4
        la $a0, cadmax
        syscall
#         std::cin >> max;
       li $v0, 5
       syscall
       move $s2, $v0 
if_condition: 
# Comprobamos que max sea mayor que minimo
# En caso contrario salta la cadena de error y solicita los limites
#         if (max <= min) {
        ble $s2, $s1, impresion_cad_error
        j do_while_end


impresion_cad_error: 
# Impresión de la cadena error
#             std::cout << "Error. min tiene que ser menor estrictamente que max.\n";
        li $v0, 4
        la $a0, caderr
        syscall

        j do_while
#     } while (max <= min);
do_while_end: 
# Convertimos el max y el min en flotantes para poder operar con ellos
        mtc1 $s1, $f24                         
        cvt.s.w $f24, $f24
        mtc1 $s2, $f26
        cvt.s.w $f26, $f26

# Almacenamos la resta del den en $f20
        sub.s $f20, $f26, $f24                      # $f20 = (max - min)

# Movemos el valor minimo para inicializar i 
        move $s3, $s1

#     int i;
for: 
#     for (i = min ; i <= max ; i++) {
#         normalizado = float((i - min)) / float((max - min));
# En caso de que min sea menor o igual que max -> termina_programa 
        bgt $s3, $s2, termina_programa

# Convertimos el iterador en flotante oara operar con el 
        mtc1 $s3, $f30
        cvt.s.w $f30, $f30
# Operamos con el numerador
        sub.s $f30, $f30, $f24                      # $f30 = $f30 - $f24         
        div.s $f22, $f30, $f20                      # $f22 = $f30 - $f20

#         std::cout << "Normalizado(" << i << ") = " << normalizado << std::endl;
# Imprimimos el resultado con el iterador y el numero normalizado
        li $v0, 4                                   # Intrucción de print string
        la $a0, cadnor                              # Llamada a la dirección cadnor
        syscall                                     # Llamada al sistema        

        li $v0, 1                                   # Instrucción de print int
        move $a0, $s3                               # Movemos $a0 = $s3
        syscall                                     # Llamada al sistema

        li $v0, 4                                   # Instrucción de print string
        la $a0, cadigu                              # Llamada a la dirección cadigu
        syscall                                     # Llamada al sistema

        li $v0, 2                                   # Instrucción de print float
        mov.s $f12, $f22                            # Movemos el resgitro $f12 = $f22
        syscall                                     # Llamamos al sistema

        li $v0, 4                                   # Instrucción de print string
        la $a0, cadlin                              # Llamamos a la dirección cadlin
        syscall                                     # Llamada al sistema

#     }
actualizacion: 
        addi $s3, $s3, 1                           # Actualizamos el iterador
        j for                                      # Continuamos el bucle for
termina_programa: 
#     std::cout << "\nFIN DEL PROGRAMA.\n";
        li $v0, 4                                  # Instrucción de print string
        la $a0, cadfin                             # Llamada a la dirección cadfin
        syscall                                    # Llamada al sistema

        li $v0, 10                                 # Intrucción de finalización de porgrama
        syscall                                    # Llamada al sistema
# }