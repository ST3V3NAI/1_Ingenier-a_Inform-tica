# Nombre del autor: Stevim Abolaji Ibidokun
# Fecha de creación: 12/03/25
##include <iostream>

#int main() {
#    float suma = 0;
#    int contador = 0;
#    float numero;

#    std::cout << "Introduce números (0 para finalizar):\n";
#    while (true) {
#        std::cin >> numero;
#        if (numero == 0) {
#            break;
#        }
#        suma += numero;
#        contador++;
#    }

#    if (contador > 0) {
#        double media = suma / contador;
#        std::cout << "Media: " << media << "\n";
#        std::cout << "Total de números introducidos: " << contador << "\n";
#    } else {
#        std::cout << "No se introdujeron números válidos.\n";
#    }

#    return 0;
#}
    .data
strTitulo: .asciiz "\nPrograma que calcula la media de los numeros introducidos y que te dice cuantos numeros han sido introducidos\n"
strIntro: .asciiz "Introduce números (0 para finalizar):\n"
strMedia: .asciiz "Media: "
strMedia2: .asciiz "\n"
strNumerosIntroducidos: .asciiz "Total de numeros introducidos: "
strNoNumerosIntroducidos: .asciiz "No se introdujeron números válidos.\n"
strTermina: .asciiz "Termina el programa\n"
    .text
    # TABLA DE REGISTROS: 
    # $f0 -> numero (float)
    # $f2 -> suma (float)
    # $s0 -> contador (int)
    # $f4 -> media (float)
main: 
##include <iostream>

#int main() {
#    float suma = 0;
    li.s $f2, 0.0
    li $s0, 0
#    int contador = 0;
#    float numero;
    li $v0, 4
    la $a0, strTitulo
    syscall
introduce: 
#    std::cout << "Introduce números (0 para finalizar):\n";
    li $v0, 4
    la $a0, strIntro
    syscall
    
while_true: 
#    while (true) {
#        std::cin >> numero;
    li $v0, 6
    syscall
    mov.s $f0, $f0
if_condition: 
    li.s $f6, 0.0
#        if (numero == 0) {
    c.eq.s $f0,$f6
    bc1t while_end
#            break;
#        }
#        suma += numero;
    add.s $f2, $f2, $f0
#        contador++;
    addi $s0, $s0, 1
    
    j introduce
#    }
while_end: 
#    if (contador > 0) {
    blez $s0, else_condition
    
    
calculo_media: 
#        float media = suma / contador;
    mtc1 $s0, $f8
    cvt.s.w $f8, $f8
    div.s $f4, $f2, $f8
    
#        std::cout << "Media: " << media << "\n";
    li $v0, 4
    la $a0, strMedia
    syscall
    
    li $v0, 2
    mov.s $f12, $f4
    syscall
      
    li $v0, 4
    la $a0, strMedia2
    syscall
#        std::cout << "Total de números introducidos: " << contador << "\n";
    li $v0, 4
    la $a0, strNumerosIntroducidos
    syscall
    
    li $v0, 1
    move $a0, $s0
    syscall
    
    li $v0, 4
    la $a0, strMedia2
    syscall
    
    j termina_programa
    
else_condition: 
#    } else {
#        std::cout << "No se introdujeron números válidos.\n";
    li $v0, 4
    la $a0, strNoNumerosIntroducidos
    syscall
   
    
termina_programa: 
    li $v0,4
    la $a0, strTermina
    syscall
    
    li $v0, 10
    syscall
#    }  

