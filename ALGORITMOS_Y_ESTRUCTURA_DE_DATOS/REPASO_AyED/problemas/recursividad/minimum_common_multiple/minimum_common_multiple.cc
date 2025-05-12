// AUTOR: Steven Abolaji Ibidokun
// FECHA: 2025-05-03
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// DESCRPICIÓN: Función recursiva del minimo común múltiplo
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

#include <iostream>

int MCM(const unsigned a, const unsigned b, const unsigned divisor = 2) {
	if(a < divisor || b < divisor) return a * b; 
	if(a % divisor != 0 && b % divisor != 0) return MCM(a,b, divisor + 1);
	int x = a % divisor == 0? a / divisor : a;
	int y = b % divisor == 0? b / divisor : b; 
	return divisor * MCM(x, y, divisor);
}

int main() {
  int num_a{0}, num_b{0};

  std::cout << "Give two numbers please mdfk: ";
  std::cin >> num_a >> num_b;

  std::cout << "Here is the MCM of that two numbers: " << MCM(num_a, num_b); 

  return 0;
}

