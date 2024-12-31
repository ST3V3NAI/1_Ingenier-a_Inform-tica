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


/**
 * @brief Función que muestra el funcionamiento del programa y que comprueba que los parametros sean los correctos
 * 
 * @param argc Numero de cadenas
 * @param argv Matriz de vectores
 */
void Usage(int argc, char* argv[]) {
  if(argc != 4) {
    std::cout << argv[0] << ": One up to three numbers aree not being passed correctly" << std::endl;
    std::cout << "Try to type: " << argv[0] << "--help for more information" << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if(parameter == "--help"){
    const std::string hHelpText = " The programa ask you for three numbers: [min_temp, max_temp, difference] and prints the table";
    std::cout << hHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}

/**
 * @brief Function that makes the conversion of Fahrenheit to Celsius
 * 
 * @param[in] temperature The temperature in Fahrenheit
 * @return double The conversion
 */
double FahrenheitToCelsius(double temperature) {
    return ((temperature - 32) / 1.8);
}

/**
 * @brief Function that makes the conversion of Fahrenheit to Absolute
 * 
 * @param[in] temperature The temperature in Fahrenheit
 * @return double The conversion
 */
double FahrenheitToAbsolute(double temperature) {
    return ((temperature - 32) / 1.8) + 273.15; 
}

/**
 * @brief Function that prints a table in the interval submitted
 * 
 * @param[in] min_temp The minimum temperature of the interval
 * @param[in] max_temp The maximum temperature of the interval
 * @param[in] difference The difference between the temperatures in the interval
 */
void PrintTableOfTemperatures(int min_temp, int max_temp, int difference) {
    std::cout << "\tFahrenheit     Celsius     Absolute" << std::endl; 
    std::cout << std::fixed << std::setprecision(2);

    for (int i = min_temp; i <= max_temp; i += difference) {
        std::cout << "\t" << std::setw(10) << i << "     "
                  << std::setw(10) << FahrenheitToCelsius(i) << "     "
                  << std::setw(10) << FahrenheitToAbsolute(i) << std::endl;
    }
}
