/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @author Steven Abolaji Ibidokun alu0101619613@ull.edu.es
 * @date Dec 3, 2024
 * @brief El programa instancia un número de coches introducido
 *        por el usuario e indica cual tiene un precio mayor.
 * @bug There are no known bugs
 */

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib> //Para std::stoi
#include <algorithm> //Para std::sort

#ifndef CARS_H
#define CARS_H

class Car {
 public:
  Car() = default;
  Car(const std::string& brand, const std::string& model, const std::string& type, const double price) : 
  brand_{brand}, model_{model}, type_{type}, price_{price} {}
  const std::string& brand() const { return brand_;};
  const std::string& model() const { return model_;};
  const std::string& type() const { return type_; };
  const double price() const { return price_; };
  friend std::istream& operator>>(std::istream& in, Car& car);
  friend std::ostream& operator<<(std::ostream& out, const Car& car);
 private:
  std::string brand_{};
  std::string model_{};
  std::string type_{};
  double price_{};
  
};

std::vector<Car> SaveCarData(const int number_of_cars);
void SortByType(std::vector<Car>& user_cars);
void ComparePricesByType(const std::vector<Car>& user_cars);

#endif