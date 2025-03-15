# Nombre del autor: Stevim Abolaji Ibidokun
# Fecha de modificación: 13/03/25
#include <iostream>
#
# using namespace std;
#int main() {
#    double velocidad, tiempo, distancia;
#    const double CONSTANTE_OBJETIVO = 1000; // Distancia umbral para "llegar"

#    // Pedir los datos al usuario
#    cout << "Ingrese la velocidad en km/h: ";
#    cin >> velocidad;
#    cout << "Ingrese el tiempo en segundos: ";
#    cin >> tiempo;

#    // Calcular la distancia recorrida
#    distancia = velocidad * (tiempo / 3600.0);

#    // Mostrar resultados
#    cout << "La distancia recorrida es: " << distancia << " km" << endl;

#    // Verificar si llega
#    if (distancia >= CONSTANTE_OBJETIVO) {
#        cout << "Sí llega." << endl;
#    } else {
#        cout << "No llega." << endl;
#    }

#    return 0;
#}
        .data
strtitulo: .asciiz "Programa que a partir de una distancia y unos segundo te dice si llegas a un objetivo\n"
strvelocidad: .asciiz "Ingrese la velocidad en km/h: "
strtiempo: .asciiz "Ingrese el tiempo en segundos: "
strdistance: .asciiz "La distancia recorrida es: "
strdistance_2: .asciiz " km\n"
strsillega: .asciiz "Sí llega\n"
strnollega: .asciiz "No llega\n"
strtermina: .asciiz "Termina el programa"
        .text
        # TABLA DE REGISTROS: 
        # $f20 -> velocidad
        # $f22 -> tiempo
        # $f24 -> distancia recorrida
        # $f26 -> cte{1000}
# ----------------------------------------------
main: 
# using namespace std;
#int main() {
#    double velocidad, tiempo, distancia;
#    const double CONSTANTE_OBJETIVO = 1000; // Distancia umbral para "llegar"
impresion_titulo:
        li $v0, 4
        la $a0, strtitulo
        syscall

peticion_de_valores: 
#    // Pedir los datos al usuario
#    cout << "Ingrese la velocidad en km/h: ";
        li $v0, 4
        la $a0, strvelocidad
        syscall
#    cin >> velocidad;
        li $v0, 6
        syscall
        mov.s $f20, $f0
#    cout << "Ingrese el tiempo en segundos: ";
        li $v0, 4
        la $a0, strtiempo
        syscall
#    cin >> tiempo;
        li $v0, 6
        syscall
        mov.s $f22, $f0

calculo_de_distancia: 
#    // Calcular la distancia recorrida
#    distancia = velocidad * (tiempo / 3600.0);
        li.s $f8, 3600.0 
        li.s $f24, 0.0
        div.s $f24, $f22, $f8
        mul.s $f24, $f24, $f20

impresion_resultado: 
#    // Mostrar resultados
#    cout << "La distancia recorrida es: " << distancia << " km" << endl;
        li $v0, 4
        la $a0, strdistance
        syscall

        li $v0, 2
        mov.s $f12, $f24
        syscall

        li $v0, 4
        la $a0, strdistance_2
        syscall

condicional_if: 
#    // Verificar si llega
        li $f30, 1000.0
#    if (distancia >= CONSTANTE_OBJETIVO) {
        c.le.s $f24, $f30
        bc1t condicional_else
#        cout << "Sí llega." << endl;
        li $v0, 4
        la $a0, strllega
        syscall

        j termina_programa

condicional_else: 
#    } else {
#        cout << "No llega." << endl;
        li $v0, 4
        la $a0, strnollega
        syscall
#    }

termina_programa: 
        li $v0, 4
        la $a0, strtermina
        syscall

        li $v0, 10
        syscall      
#    return 0;
#}
