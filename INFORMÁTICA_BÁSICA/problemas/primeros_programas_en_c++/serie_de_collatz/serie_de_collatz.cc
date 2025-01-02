/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file secuencia_de_collatz.cc
  * @author Steven Abolaji Ibidokun aeinstein@ull.edu.es
  * @date Oct 7 2024
  * @brief 
  * @bug There are no known bugs
  * @see 
  */

 #include <iostream>

 int main(){
    int numero_n{0}, n_secuencias{0};

    std::cout << "n: ";
    std::cin >> numero_n;

    while(numero_n != 1){
        if(numero_n % 2 == 0){
            numero_n = numero_n / 2;
            std::cout << numero_n << " ";
        } else {
            numero_n = (numero_n * 3) + 1;
            std::cout << numero_n << " ";
        }
        n_secuencias++;
    }

    std::cout << "Para la secuencia " << numero_n << " necesitariamos " << n_secuencias + 1 << " secuencias" << std::endl;
 }