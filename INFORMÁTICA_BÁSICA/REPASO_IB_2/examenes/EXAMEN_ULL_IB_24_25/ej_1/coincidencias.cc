/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file ejercicio_1.cc
 * @author Stevim Abolaji Ibidokun
 * @date 2025-03-24
 * @brief Implementación, declaración y llamada en el main de la función coincidencias
 * que comprueba dos cadenas de caracteres y duvuelve el numero total de caracteres que coinciden 
 * @bug There are no known bugs
*/

#include <iostream> // Para flujos de entrada y salida
#include <string> // Para manejar strings 
#include <algorithm> // Para std::min 

// Declaración de función coincide
int Coincide(const std::string& str1, const std::string& str2); 

int main() {
  std::string texto1, texto2;

  getline(std::cin, texto1);
  getline(std::cin, texto2);

  std::cout << "Número de caracteres que coinciden en la misma posición: " 
            << Coincide(texto1, texto2) 
            << std::endl;

  return 0;
}

/**
 * @brief Función que se pasados dos strings comprueba cuantos caracteres coinciden
 * 
 * @param[in] cadena1 Primera cadena
 * @param[in] cadena2 Segunda cadena
 * @return coincidencias Retorna el numero de coincidencias
 */
int Coincide(const std::string& cadena1, const std::string& cadena2) {
  int coincidencias = 0; // Inicializamos contador de coincidencias a 0
  int minLength = std::min(cadena1.length(), cadena2.length()); // Obtenemos la longitud minima de los dos strings
  for (int i = 0; i < minLength; ++i) { // Iteramos con un bucle for
      if (cadena1[i] == cadena2[i]) {  // Para carácter por carácter
          ++coincidencias; // Y ver cuales coinciden, en caso de que coincidan sumamos 1 al iterador
      }
  }

  return coincidencias; // Devolvemos coincidencias
}



