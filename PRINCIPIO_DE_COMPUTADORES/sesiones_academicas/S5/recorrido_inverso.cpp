// Recorrido inverso de un vector

# define consexpr TAM = 5;
# include <iostream>
# include <vector>

int main() {
  std::vector<int> v{3, 9, 5, 7, -4, 14, 8, -1, 11, 2}; 

  for(int i = (v.size() - 1); i >= 0; i--) {
    std::cout << v[i] << std::endl; 
  }

  return 0; 
}
