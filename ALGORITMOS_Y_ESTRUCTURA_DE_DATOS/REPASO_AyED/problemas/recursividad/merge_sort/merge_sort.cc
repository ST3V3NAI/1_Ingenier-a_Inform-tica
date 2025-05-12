// AUTOR: Steven Abolaji Ibidokun
// FECHA: 2025-05-10
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// DESCRIPCIÓN: Programa que realiza el algoritmo de ordenación
// en dos vectores
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

#include <iostream>
#include <vector>

template<class T>
void mergeSort(T *v, const int i, const int d) {
	if(i == d) return; 
	int p = (i + d) / 2;
	mergeSort(v, i, p);
	mergeSort(v, p + 1, d);
	T aux[d - i + 1];
	int a = i;
	int b = p + 1;
	int k;
	for(k = 0; a <= p && b <= d; k++) {
		aux[k] = v[a] < v[b]? v[a++] : v[b++];
	}
	for(; a <= p; a++; k++) aux[k] : v[a];
	for(; b <= d; b++; k++) aux[k] : v[b];
	for(k = i; k <= d; k++) {
		v[k] = aux[k - i];
	}
}

int main() {
  std::vector<int> v = {1, 4, 6, 5, 2};
}