// hacer la traspuesta de una matriz

#include <iostream>

using namespace std; 

#define N 3

int main() {
  int matriz[N][N] = {
    {1, 2, 3},
    {4, 5, 6}, 
    {7, 8, 9}
}; 

  cout << "Matriz original:\n";
  for(int i = 0; i < N; i++) {
    for(int j = 0; j < N; j++) {
      cout << matriz[i][j] << " ";
    }
    cout << endl;
  }

  for(int i = 0; i < N; i++) {
    for(int j = i + 1; j < N; j++) {
      int temp = matriz[i][j];
      matriz[i][j] = matriz[j][i];
      matriz[j][i] = temp; 
    }
  }


  cout << "\nMatriz transpuesta:\n";
  for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
          cout << matriz[i][j] << " ";
      }
      cout << endl;
  }


}