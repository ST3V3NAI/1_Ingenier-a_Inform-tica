/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2024-2025
*
* @file file.cc
* @author Nombre Apellido Apellido alu@ull.edu.es
* @date DD-MM-YYYY
* @brief This is a program that
* @bug There are no known bugs
* @see
*/
#include <iostream>
/*
* @brief Function that calculates the length of the radius
* @param kPi constant variable as the number pi
* @param radius input given by the user
* @return the length of the circunference
*/
double Length(const double kPi, double radius) {
double length = (2 * kPi) * radius;
return length;
}

/**
* @brief Function that calculates the area of the radius
* @param kPi constant variable as the number pi
* @param radius input given by the user
* @return the area of the circunference
*/
double Area(const double kPi, double radius) {
double area = kPi * (radius * radius);
return area;
}

/**
*@brief Function that calculates the volume of a toroid
* @param radius_1 first radius given by the user
* @param radius_2 second radius given by the user
* @return the volume of the toroid
*/
double Volume(double radius_1, double radius_2, double kPi) {
double result{0.0};
if (radius_1 > radius_2) {
double result = Length(kPi, radius_1) * Area(kPi, radius_2);
return result;
} else {
double result = Length(kPi, radius_2) * Area(kPi, radius_1);
return result;
}
}

/**
* @brief Main function of the program
* @param radius_1 first radius given by the user
* @param radius_2 second radius given by the user
* @return the volume of the toroid
*/
int main() {
double radius_1{0.0};
double radius_2{0.0};
while (std::cin >> radius_1 >> radius_2) {
const double kPi{3.141592653589793};
std::cout << Volume(radius_1, radius_2, kPi) << std::endl;
}
std::cout << std::endl;

return 0;
}


	
