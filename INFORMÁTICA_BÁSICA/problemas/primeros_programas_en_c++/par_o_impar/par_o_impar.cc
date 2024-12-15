/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file par_o_impar.cc
  * @author Steven Abolaji Ibidokun aeinstein@ull.edu.es
  * @date Oct 7 2024
  * @brief 
  * @bug There are no known bugs
  * @see 
  */

 #include <iostream>

 int main(){

  int numero_a{0};

  std::cout << "Introduzca un numero:" << std::endl;
  std::cin >> numero_a;

  //bool es_par{numero % 2 == 0};
  
  //if (es_par == true) {
  
  if (numero_a % 2 == 0){
    std::cout << "Su número es par\n";
  } else {
    std::cout << "Su número es impar\n";
  }

  // std::cout << "El número es " << es_par ? "par" : "impar " << std::endl; 

  return 0;
}