/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file 9_P63414_counting_frquences.cc
 * @author Steven
 * @date 2025-02-22
 * @brief Write a program that reads a sequence of natural 
 * numbers and that prints, for each one, how many times it appears
 * @bug There are no known bugs
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int knumero;
    cin >> knumero;
    int actual;
    vector<int> contador(1001, 0);
    for (int i = 0; i < knumero; i++) {
        cin >> actual;
        contador[actual-1000000000]++;
    }
    for (int i = 0; i < 1001; i++) {
        if (contador[i] != 0) {
            cout << 1000000000+i << " : " << contador[i];
            cout << endl;
         }
    }
  return 0;
}