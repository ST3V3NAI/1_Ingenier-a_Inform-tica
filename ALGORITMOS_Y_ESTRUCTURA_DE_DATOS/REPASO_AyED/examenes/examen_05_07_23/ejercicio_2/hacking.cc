// AUTOR: Steven Abolaji Ibidokun
// FECHA: 2025-05-04
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// DESCRIPCIÓN: Ejercicio 2
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

#include <iostream>
#include <vector>
using namespace std;

void hacking(vector<char>& pw, const int i = 0)
{ if (i == pw.size()) {
    cout << pw << " "; //endl;
 } else {
    for (int j = 0; j < ALPHABET_size; j++)
    { pw[i] = ALPHABET[j];
      hacking(pw, i + 1);
    }
 }
}
