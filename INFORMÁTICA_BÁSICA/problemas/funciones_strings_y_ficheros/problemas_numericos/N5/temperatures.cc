/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file temperature.cc
  * @author Steven
  * @date Nov 1 2024
  * @brief Programa que al el valor minimo, maximo y su diferencia te va transformando los grados
  * @bug There are no known bugs
  */

#include "temperatures.h"
#include <string>
#include <iostream>


void PrintProgramPurpose() {
   std::cout << "This program converts a range of Fahrenheit temperatures to Celsius and Absolute (Kelvin) scales." << std::endl << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber = 4) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with a wrong number of parameters." << std::endl;
    std::cout << "This program should be called as: " << argv[0] << "<start> <end> <step>" << std::endl;
    return false;
  }
  return true;
}

std::string Intervalo(int principio, int final, int diferencia){
    std::string resultado = "Fahrenheit\n";
    for(int i = 0; principio <= final; i++){
        resultado += std::to_string(principio);
        principio += diferencia;
    }
    
    return resultado;
}

double FahrenheitToCelcius(double fahrenheit){
  std::cout << "Celcius" << std::endl;
  return  (((fahrenheit - 32) * 5) / 9);
}


double FahrenheitToAbsolute(double fahrenheit){
  std::cout << "Absolute" << std::endl;
  return (((fahrenheit - 32) * 5) / 9) + 273.15;
}
