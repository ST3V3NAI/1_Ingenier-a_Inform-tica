/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file rotate.cc
 * @author Steven
 * @date 2025-03-23
 * @brief Definción de funciones para rotate
 * @bug There are no known bugs
*/

#include "rotate.h"

/**
 * @brief Función que imprime el funcionamiento del programa
 * 
 */
void PrintProgramPurpose() {
  std::cout << "Este programa se encarga de rotar las vocales en minúsula que se encuentre en fichero de texto que se le pase por parámetros" << std::endl;
}

/**
 * @brief Función que se encarga de ver si se han introducido los parametros correctos
 * 
 * @param argc Numero de argumentos
 * @param argv Matriz de argumentos
 * @return true 
 * @return false 
 */
bool CheckCorrectParameters(int argc, char *argv[], const int kCorrectNumber) {
  if(argc != kCorrectNumber) {
    std::cerr << "El programa ha sido ejecutado con un número incorrecto de parámetros\n";
    std::cout << "Siga la siguiente estructura: <ejecutable> <fichero>" << std::endl;
    return false; 
  }
  return true; 
}
/**
 * @brief Función que encraga de rotar los caracteres
 * 
 * @param character 
 * @return char 
 */
char RotateLowerCaseVowels(char character) {
  switch(character) {
    case 'a': return 'e';
    case 'e': return 'i';
    case 'i': return 'o';
    case 'o': return 'u';
    case 'u': return 'a';
    case 'A': return 'E';
    case 'E': return 'I';
    case 'I': return 'O';
    case 'O': return 'U';
    case 'U': return 'A';
    default: return character; // Si no es una vocal, se devuelve el mismo carácter
  }
}

/**
 * @brief Función que se encarga de alterar el texto
 * 
 * @param texto 
 * @return std::string 
 */
std::string transformarTexto(const std::string& texto) {
  std::string resultado = texto; 

  for(char& character : resultado) {
    character = RotateLowerCaseVowels(character);
  }

  return resultado; 
}

/**
 * @brief Función que se encarga de procesar el archivo
 * 
 */
void ProcesarArchivo(std::ifstream& archivoEntrada, std::ofstream& archivoSalida) {
  if (!archivoEntrada) {
      std::cerr << "Error al abrir el archivo de entrada." << std::endl;
      return;
  }
  if (!archivoSalida) {
      std::cerr << "Error al abrir el archivo de salida." << std::endl;
      return;
  }

  std::string linea;
  while (std::getline(archivoEntrada, linea)) {  // Leer línea por línea
      archivoSalida << transformarTexto(linea) << std::endl;  // Escribir línea transformada
  }

  archivoEntrada.close();
  archivoSalida.close();
}