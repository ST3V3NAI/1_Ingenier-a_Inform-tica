# Nombre del autor: Stevim Abolaji Ibidokun
# Fecha de la ultima modificación: 10/03/25
# Desarrollar un programa que calcule el costo de una comida en un restaurante
# pidiendo el precio de la comida, el porcentaje de propina y el impuesto
# Calcula el total a pagar y di si supera un preseupuesto dado
    .data
strTitulo: .asciiz "\nPrograma que calcula el costo de una comida en un restaurante\n"
strIntroComida: .asciiz "Introduce el precio de la comida: "
strIntroPropina: .asciiz "Introduce el porcentaje de propina: "
strIntroImpuesto: .asciiz "Introduce el porcentaje de impuesto: "
strIntroPresupuesto: .asciiz "Introduce tu presupuesto: "
strSupera: .asciiz "Supera tu presupuesto.\n"
strNoSupera: .asciiz "Está dentro del presupuesto.\n"
strCosto: .asciiz "Costo total de la comida: "
strCosto2: .asciiz " €\n"
strTermina: .asciiz "\nTermina el programa\n"
    .text
    # Tabla de registros: 
    # $f20 -> precioComida
    # $f22 -> propinaPorcentaje
    # $f24 -> impuestoPorcentaje
    # $f26 -> presupuesto
    # $f28 -> propina
    # $f30 -> impuesto
    # $f23 -> total
# -------------------------------------------------------------------------
main:     
##include <iostream>
##include <iomanip>

#int main() {
#    std::cout << std::fixed << std::setprecision(2); 

#    float precioComida, propinaPorcentaje, impuestoPorcentaje, presupuesto;

peticion_de_variables: 
#    std::cout << "Introduce el precio de la comida: ";
    li $v0, 4
    la $a0, strIntroComida
    syscall
    
#    std::cin >> precioComida;
    li $v0, 6
    syscall
    mov.s $f20, $f0

#    std::cout << "Introduce el porcentaje de propina: ";
    li $v0, 4
    la $a0, strIntroPropina
    syscall
    
#    std::cin >> propinaPorcentaje;
    li $v0,6
    syscall
    mov.s $f22, $f0
    

#    std::cout << "Introduce el porcentaje de impuesto: ";
    li $v0, 4
    la $a0, strIntroImpuesto
    syscall
    
#    std::cin >> impuestoPorcentaje;
    li $v0, 6
    syscall
    mov.s $f24, $f0

#    std::cout << "Introduce tu presupuesto: ";
    li $v0, 4
    la $a0, strIntroPresupuesto
    syscall
    
#    std::cin >> presupuesto;
    li $v0, 6
    syscall
    mov.s $f26, $f0
    

operaciones: 
    li.s $f30, 100.0 
#    float propina = precioComida * (propinaPorcentaje / 100);
    div.s $f22, $f22, $f30
    mul.s $f28, $f20, $f22
    
#    float impuesto = precioComida * (impuestoPorcentaje / 100);
    div.s $f24, $f24, $f30
    mul.s $f30, $f20, $f24
    
    
#    float total = precioComida + propina + impuesto;
    add.s $f23, $f20, $f28
    add.s $f23, $f23, $f30

#    std::cout << "Costo total de la comida: " << total << "€\n";
    li $v0, 4
    la $a0, strCosto
    syscall
    
    li $v0, 2
    mov.s $f12, $f23
    syscall
    
    li $v0, 4
    la $a0, strCosto2
    syscall


if_condicion: 
#    if (total > presupuesto) {
    c.le.s $f23, $f26
    bc1f else_condicion
   
#        std::cout << "Supera tu presupuesto.\n";
    li $v0, 4
    la $a0, strSupera
    syscall
    
    j termina_programa
    
else_condicion: 
#    } else {
#        std::cout << "Está dentro del presupuesto.\n";
    li $v0, 4
    la $a0, strNoSupera
    syscall
#    }


termina_programa: 
    li $v0, 4
    la $a0, strTermina
    syscall
    
#    return 0;
    li $v0, 10
    syscall
#}