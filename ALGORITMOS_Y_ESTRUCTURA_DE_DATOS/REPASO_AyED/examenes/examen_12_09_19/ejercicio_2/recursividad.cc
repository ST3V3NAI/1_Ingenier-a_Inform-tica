// AUTOR: Steven Abolaji Ibidokun
// FECHA: 2025-05-12
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// DESCRIPCIÓN: Métodos de exámenes de recursividad
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

double potenciaRecursiva(double x, double n);

double potenciaRecursiva(double x, double n) {
  return (n > 0)? x * potenciaRecursiva(x, n -1) : 1;
}