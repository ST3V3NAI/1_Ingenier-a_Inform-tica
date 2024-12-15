/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file edad_del_usuario,cc
  * @author Steven Abolaji Ibidokun aeinstein@ull.edu.es
  * @date Oct 7 2024
  * @brief 
  * @bug There are no known bugs
  * @see 
  */

 #include <iostream>

 int main(){
    int nacimiento{0}, año_actual{0}; 

    std::cout << "Año de nacimiento: ";
    std::cin >> nacimiento;
    std::cout << "Año actual: ";
    std::cin >> año_actual;

   int edad;

    edad = año_actual - nacimiento;

    std::cout << "Su edad es " << edad << " años\n";

    return 0;
 }

