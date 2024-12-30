/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file coeficiente_binomial.cc
 * @author Steven
 * @date 2024-12-30
 * @brief Definición de las funciones usadas en el programa coeficiente_binomial
 * @bug There are no known bugs
*/


#include "coeficiente_binomial.h"


/** Muestra el modo de uso correcto del programa
 *  En caso de que el uso no sea el correcto, muestra el mensaje y finaliza
 *  la ejecución del programa.
 *  El programa precisa dos strings para su ejecución.
 *
 *  @param[in] argc Number of command line parameters
 *  @param[in] argv Vector containing (char*) the parameters
 */
void Usage(int argc, char *argv[]) {
  if (argc != 3) {
    std::cout << argv[0] << ": One or two integer numbers are not being passed correctly" << std::endl;
    std::cout << "Try to type: " << argv[0] << " --help for more information " << std::endl;
    exit(EXIT_SUCCESS);
  } 
  std::string parameter{argv[1]};
  if (parameter == "--help") {
    const std::string hHelpText = "This program reads 2 numbers and calculates their binomial coeficient by using: n! / (k! * (n - k)!)";
    std::cout << hHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}


/**
 * @brief Función que realiza el factorial de un numero
 * 
 * @param[in] numero numero al que le van a realizar el factorial
 * @return int Retorna el factorial
 */
int Factorial(int numero){
  int factorial{1};
  for(int i{2}; i <= numero; i++){
  factorial = factorial * i;
 }
  return factorial;
}


/**
 * @brief Función que calcula el coeficiente binomial
 * 
 * @param[in] number_n Parametro n de la fórmula
 * @param number_k Parametro k de la fórmula
 * @return int Retorna el resultado de la fórmula
 */
long int CalculoCoeficienteBinomial(int number_n, int number_k) {
if (number_n < 0 || number_k < 0 || number_k > number_n) {
        std::cerr << "Valores no válidos para n o k.\n";
        return -1; // Indicar error
    }
    return Factorial(number_n) / (Factorial(number_k) * Factorial(number_n - number_k));
}