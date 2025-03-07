// Hacer el recorrido de submatrces traingulares con respecto
// a la diagonal secundaria

#include <iostream>

using namespace std;

#define N 4  // Tamaño de la matriz cuadrada

int main() {
    int matriz[N][N] = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9,  10, 11, 12},
        {13, 14, 15, 16}
    };

    cout << "Matriz original:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nElementos por ENCIMA de la diagonal secundaria:\n";
    for (int i = 0; i < N - 1; i++) {  // Hasta la penúltima fila
        for (int j = 0; j < N - 1 - i; j++) {  // Hasta antes de la diagonal secundaria
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nElementos por DEBAJO de la diagonal secundaria:\n";
    for (int i = 1; i < N; i++) {
        for (int j = N - i; j < N; j++) {
            cout << matriz[i][j] << " ";
        }
    }

    return 0;
}


