/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 * 
 * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
 * @date Dec 4, 2024
 * @brief El programa almacena información sobre coches e imprime el precio más caro de cada tipo
 * @bug There are no known bugs
 */

#include "cars.h"

/**
 * @brief Define cómo se debe leer el objeto Car"
 * 
 * @param[in] in Flujo de entrada
 * @param[in] car. Coche cuya información se va a almacenar.
 * 
 * @return Guarda la información de un coche
*/
std::istream& operator>>(std::istream& in, Car& car) {
  std::cout << "Introduzca la marca del coche: \n";
  in >> car.brand_;
  std::cout << "Introduzca el modelo del coche: \n";
  in >> car.model_;
  std::cout << "Introduzca el tipo del coche: \n";
  in >> car.type_;
  std::cout << "Introduzca el precio del coche: \n";
  in >> car.price_;
  return in;
  /*Al introducir los datos desde un fichero se puede experimentar un comportamiento incorrecto
  pues el programa mostrará todos los mensajes seguidos antes de ejecutar el mismo con los datos 
  proporcionados.*/
}

/**
 * @brief Define como se debe mostrar en pantalla el objeto "Car"
 * 
 * @param[in] out Flujo de salida
 * @param[in] car. Coche cuya información se va a mostrar
 * 
 * @return Muestra en pantalla la información de un coche
*/
std::ostream& operator<<(std::ostream& out, const Car& car) {
  out << car.brand() << ", " << car.model() << ", " << car.type() << ", " << car.price();
  return out;
}

/**
 * @brief Almacena la información de cada coche 
 * 
 * @param[in] Número de coches que se van a guardar
 * @return Un vector con la información de todos los coches, cada uno en un espacio
*/
std::vector<Car> SaveCarData(const int number_of_cars) {
  std::vector<Car> user_cars;
  for (int counter{0}; counter < number_of_cars; ++counter) {
    Car user_car;
    std::cin >> user_car;
    user_cars.emplace_back(user_car);
  }
   return user_cars;
}

/**
 * @brief La función, que será empleada en otra más adelante, compara
 *        variables del objeto coche, para poder ordenarlas.
 * @param[in] first_car. Primero de los objetos a comparar
 * @param[in] second_car. Segundo de los objetos a comparar
 * @return Verdadero o falso según la comparación
*/
bool CompareType(const Car& first_car, const Car& second_car) {
  return first_car.type() < second_car.type();
}

/**
 * @brief Ordena los elementos del vector de coches según su tipo
 * 
 * @param[in] user_cars. Vector con los coches que el usuario quiere ordenar
 * @return Vector con los coches ordenados por su tipo
*/
void SortByType(std::vector<Car>& user_cars) {
  std::sort( user_cars.begin(), user_cars.end(), CompareType);
}

/**
 * @brief Muestra el coche más caro de cada tipo
 * 
 * @param[in] user_cars. Vector con los coches cuyo precio se va a comparar
 * @return Muestra en pantalla los coches de cada tipo y el precio más caro
*/
void ComparePricesByType(const std::vector<Car>& user_cars) {
  int counter{0}; //It avoids printing the most expensive cas costs 0.
  std::string actual_type{""};
  double max_price(0.0);
  for (const Car& car : user_cars) {
    if (car.type() != actual_type) {
      if (counter != 0) {
        std::cout << "The most expensive car costs " << max_price << std::endl;
        std::cout << std::endl;
      }
      max_price = 0.0;
      std::cout << "Cars of type \"" << car.type() << "\": \n";
      actual_type = car.type();
    }
    if (car.price() > max_price) {
      max_price = car.price();
    }
    std::cout << car << std::endl;
    ++counter;

  }
  if (counter != 0) {
    std::cout << "The most expensive car costs " << max_price << std::endl;
  }
}