// AUTOR: Steven Abolaji Ibidokun
// FECHA: 2025-02-08
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: Número de práctica
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <iomanip>

#include "vector.h"



int main(void)
{
    const double precision{1e-3};

    AyED::vector v1;

    std::cout << "Leyendo vector v1" << std::endl;
    std::cin >> v1;
    std::cout << v1 << std::endl;
    std::cout << std::endl;

    AyED::vector v2;

    std::cout << "Leyendo vector v2" << std::endl;
    std::cin >> v2;
    std::cout << v2 << std::endl;
    std::cout << std::endl;

    std::cout << "Producto escalar: ";
    std::cout << std::setw(MAX_WIDE) << std::fixed << std::setprecision(MAX_PRECISION) << v1 * v2 << std::endl;
    std::cout << std::endl;

    std::cout << "Los vectores v1 y v2";
    if (v1.perpendicular(v2, precision))
        std::cout << " son perpendiculares" << std::endl;
    else
        std::cout << " no son perpendiculares" << std::endl;
    std::cout << std::endl;

    AyED::vector v3;

    std::cout << "Leyendo vector v3" << std::endl;
    std::cin >> v3;
    std::cout << v3 << std::endl;
    std::cout << std::endl;

    AyED::vector v4;

    std::cout << "Leyendo vector v4" << std::endl;
    std::cin >> v4;
    std::cout << v4 << std::endl;
    std::cout << std::endl;

    std::cout << "Producto escalar: ";
    std::cout << std::setw(MAX_WIDE) << std::fixed << std::setprecision(MAX_PRECISION) << v3 * v4 << std::endl;
    std::cout << std::endl;

    std::cout << "Los vectores v3 y v4";
    if (v3.perpendicular(v4, precision))
        std::cout << " son perpendiculares" << std::endl;
    else
        std::cout << " no son perpendiculares" << std::endl;
    std::cout << std::endl;

    const AyED::vector v5{v1};
    v3 = v5;

    std::cout << "Vector v5" << std::endl;
    std::cout << v5 << std::endl;
    std::cout << std::endl;

    std::cout << "Vector v3" << std::endl;
    std::cout << v3 << std::endl;
    std::cout << std::endl;

    return 0;
}