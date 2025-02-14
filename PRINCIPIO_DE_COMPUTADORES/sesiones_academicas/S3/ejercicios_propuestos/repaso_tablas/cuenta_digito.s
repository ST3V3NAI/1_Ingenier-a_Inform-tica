# Nombre: Steven Abolaji Ibidokun
# Fecha: 13/2/2025

  .data
strTitulo: .asciiz "\nPrograma que cuenta el numero de veces que aparece un digito en numero entero positivo.\n";
cad1: .asciiz "\nIntroduzca un numero entero positivo (negativo para finalizar el programa): ";
cad2: .asciiz "Introduzca un digito (0-9): ";
cad3: .asciiz "El numero de veces que aparece el digito en el numero es: "
cadFin: .asciiz "\nFin del programa.\n";

  .text
main: 
  # TABLA DE REGISTROS: 
    # numero -> $s0
    # digito -> $s1
    # cuenta -> $s2
    # resto -> $t1

# #include <iostream>
# int main() {
#   std::cout << "\nPrograma que cuenta el numero de veces que aparece un digito en numero entero positivo.\n";
  li $v0, 4
  la $a0, strTitulo
  syscall

#   while (true) {
    while_true: 
#     int numero;
#     std::cout << "\nIntroduzca un numero entero positivo (negativo para finalizar el programa): ";
    li $v0, 4
    la $a0, cad1
    syscall 
#     std::cin >> numero;
    li $v0, 5
    syscall
    move $s0, $v0
#     if (numero < 0)
#       break;
    bltz $s0, fin_while_true

#     int digito;
#     do {
#       std::cout << "Introduzca un digito (0-9): ";
#       std::cin >> digito;
#     } while ((digito < 0) || (digito > 9));
#     int cuenta = 0;
#     do {
#       int resto = numero % 10;
#       numero /= 10;
#       if ( resto == digito )
#         cuenta++;
#     } while ( numero != 0 );
#     std::cout << "El numero de veces que aparece el digito en el numero es: "
#         << cuenta << '\n';
#   }

  fin_while_true: 
#   std::cout << "\nFin del programa.\n";
# }

  li $v0, 4
  la $a0, cadFin
  syscall 
  
  li $v0, 10
  syscall





