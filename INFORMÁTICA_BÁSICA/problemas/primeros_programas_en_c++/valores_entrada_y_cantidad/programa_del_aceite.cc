/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file programa_del_aceite.cc
  * @author Steven Abolaji Ibidokun aeinstein@ull.edu.es
  * @date Oct 29 2024
  * @brief 
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

std::vector<int> LeerVector(const std::string& nombre_fichero) {
  std::ifstream fichero(nombre_fichero);
  if(!fichero) {
    std::cerr << "El fichero no existe/n";
    std::exit(1);
  }
  
  int size{0};
  fichero >> size;

  std::vector<int> vector(size,0);
  for(int i{0}; i < size; ++i){
    fichero >> vector[i];
  }
  return vector;
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << argv[0] << " <fichero>\n";
        return 2;
    }

    std::string fichero{argv[1]};
    auto vector{LeerVector(fichero)};
    for(int i{static_cast<int>(vector.size() - 1)}; i >= 0; --i) {
        std::cout << vector[i] << ' ';
    }
    std::cout << std::endl;
    return 0;

}
