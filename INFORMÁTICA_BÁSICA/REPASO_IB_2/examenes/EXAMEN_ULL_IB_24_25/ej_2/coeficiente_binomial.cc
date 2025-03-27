/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file coeficiente_binomial.cc
 * @author Stevim Abolaji Ibidokun
 * @date 2025-03-25
 * @brief Implementación, declaración y programa cliente
 *  del ejercicio de coeficiente binomial
 * @bug There are no known bugs
 */

#include <iostream> // Para flujos de entrada y salida
#include <cmath> // Para operaciones matemáticas complicadas
#include <fstream> // Para ficheros de texto: tanto de salida como de entrada

// Declaración de funciones
void Usage(int argc, char *argv[]); 
double Factorial(double number); 
double CalculateFunction(double number_n, double number_k);

int main(int argc, char *argv[]) {
  Usage(argc, argv); 

  // Recibimos los números n y k por linea de comandos
  double number_n = std::atoi(argv[1]); 
  double number_k = std::atoi(argv[2]); 

  // Recibimos el fichero en donde queremos enviar el resultado
  std::ofstream fichero_de_entrada(argv[3], std::ios::app);  
  if(!fichero_de_entrada.is_open()) { // Comprobamos que el fichero se haya abierto correctamente
    std::cerr << "There was an error trying to open the file.txt";  // En caso de que no, imprimimos un mensaje
    return 1; // Retornamos 1 
  }

  // Si funciona correctamente, enviamos el resultado al fichero
  fichero_de_entrada <<  CalculateFunction(number_n, number_k); 

  // Cerramos el fichero
  fichero_de_entrada.close();

  return 0; // Termina el programa
}


// Definición de funciones

/**
 * @brief Función que se encarga de comprobar que se hayan introducido los parámetros correctos
 * para que el programa funcione. 
 * 
 * @param[in] argc Cantidad de argumentos
 * @param[in] argv Array de punteros de strings
 */
void Usage(int argc, char *argv[]) {
  if(argc != 4) { // Si el programa no se ejecuta con el siguiente orden: <executable> <number_n> <number_k> <fichero.txt>
    std::cout << "This program is not working due to an incorrect passing of parameters" << std::endl; // Imprime un mensaje de error
    std::cout << "Try to type: " << argv[0] << " --help for more information" << std::endl; // Y te da la opción de ayuda, para saber el funcionamiento del programa
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]}; // Declaramos la variable string "parameter" para --help
  if(parameter == "--help") { // Si el usuario teclea: <executable> --help, la función imprime el funcionamiento del programa
    const std::string hHelpText = "This program receives a file.txt and two integer values (n and k),\n and calculate a function. The result will be sent in the file given.";
    std::cout << hHelpText << std::endl; 
    exit(EXIT_SUCCESS);
  }
}

/**
 * @brief Función encargada de hacer el Factorial de un número
 * 
 * @param[in] number Número pasado por parámetro al que le vamos a hacer el factorial
 * @return double Retorna el resultado del factorial
 */
double Factorial(double number) {
  double factorial_result{1.0}; // Inicializamos el factorial a 1.0

  for(int i = 0; i < number; ++i) { // Hacemos el bucle para el factorial
    factorial_result *= number; // y lo vamos multiplicando por number
  }

  return factorial_result; // Retornamos factorial
}

/**
 * @brief Función encargada de realizar operación propuesta en el examen
 * 
 * @param[in] number_n Número n de la función
 * @param[in] number_k Número k de la función
 * @return double Retorna el resultado de la función
 */
double CalculateFunction(double number_n, double number_k) {
  double function_result{0.0}; // Inicializamos el primer resultado como 0.0
  double function_result_2{1.0}; // Inicializamos el segundo resultado como 1.0

  if(number_n < number_k) { // Si (n < k) -> function_result = 0.0
    return function_result; 
  } else if (number_k <= 0.0) { // Si (k <= 0.0) -> function_result = 1.0
    return function_result_2; 
  } else { // En otro caso, calcula la función planteada en el examen
    function_result = ((Factorial(number_n)) / ((Factorial(number_k)) * ((Factorial(number_n - number_k))))); 
    return function_result; 
  } 
}

