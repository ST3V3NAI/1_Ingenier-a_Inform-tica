// Ver si una matriz es simetrica

constexpr int N = 4;
#include <iostream>

bool is_symmetric(void) {
  int C[N][N] = {{ 2, 3, 4},
                 { 2, 3, 4},
                { 2, 3, 4}};

  bool is_sym = true; 
  for(int i = 1; (is_sym && i < N); i++) {
    for(int j = 0; (is_sym && j < N); j++){
      if(C[i][j] != C[j][i]) {
        return false; 
      }
    }
    return true;
  }
}




