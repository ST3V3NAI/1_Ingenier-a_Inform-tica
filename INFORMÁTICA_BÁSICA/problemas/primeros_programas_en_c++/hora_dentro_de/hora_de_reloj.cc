/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file hora_de_reloj.cc
  * @author Steven Abolaji Ibidokun aeinstein@ull.edu.es
  * @date Oct 7 2024
  * @brief 
  * @bug There are no known bugs
  * @see 
  */

#include <iostream>

 int main(){
    int hora{0}, n_de_horas{0};

    std::cout << "Hora actual: ";
    std::cin >> hora;
    std::cout << "Cantidad de horas: ";
    std::cin >> n_de_horas;

    int hora_estimada{0};

    hora_estimada = (hora + n_de_horas) % 12;

    if (hora_estimada == 0){
      hora_estimada = 12;
    }

    std::cout << "En " << n_de_horas << " h, el reloj marcará las " << hora_estimada << std::endl;

    return 0;
 }