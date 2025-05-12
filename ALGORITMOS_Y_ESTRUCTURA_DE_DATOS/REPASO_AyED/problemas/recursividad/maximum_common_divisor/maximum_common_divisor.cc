// AUTOR: Steven Abolaji Ibidokun
// FECHA: 2025-05-03
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// DESCRIPCIÓN: Mínimo Comun Divisor
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html


#include <iostream>

// Calcula el Máximo Común Divisor
unsigned MCD(const unsigned a, const unsigned b, const unsigned divisor = 2) {
	if(a < divisor || b < divisor) return 1;
	if((a % divisor == 0) && (b % divisor == 0)) return (divisor * MCD(a/divisor, b/divisor, divisor)); 
	return MCD(a, b, divisor + 1); 
}

int main() {
  int a{0}, b{0};

  std::cout << "Provide me two numbers please: ";
  std::cin >> a >> b; 

  std::cout << "The MCD of the two numbers provided is: " << MCD(a, b);
}
