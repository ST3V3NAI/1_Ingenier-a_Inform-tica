/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file book_prueba.cc
  * @author Steven
  * @date Nov 29 2024
  * @brief Declaración de la clase libro y ejecución del main
  * @bug There are no known bugs
  */

#include <string>
#include <iostream>

class Book {
  public:
    Book(const std::string& titulo, int año_de_publicacion, double precio) : titulo_(titulo),  año_de_publicacion_(año_de_publicacion), precio_(precio) {}

    double CalcularImpuestos(double porcentaje_impuesto) const {
        return precio_ + (precio_ * porcentaje_impuesto / 100.0);
    }

    void mostrarInfo(double porcentaje_impuesto) const { 
        double impuestos = CalcularImpuestos(porcentaje_impuesto);
        std::cout << titulo_ << ", " << año_de_publicacion_ << ", " << precio_ << ", " << impuestos << std::endl;
    }

  private:
    std::string titulo_;
    int año_de_publicacion_;
    double precio_;
}; 

int main(int argc, char* argv[]) {

  if (argc != 2) {
    std::cerr << "Uso: " << argv[0] << "<impuesto>" << std::endl;
    return 1; 
  }

  double porcentaje_impuesto = std::atof(argv[1]);

  Book book1("El quijote de la Mancha", 1605, 21.00);
  book1.mostrarInfo(porcentaje_impuesto);

  Book book2("El lazarillo de Tormes", 1554, 18.00);
  book2.mostrarInfo(porcentaje_impuesto);

  Book book3("Los pilares de la Tierra", 1989, 27.00);
  book3.mostrarInfo(porcentaje_impuesto); 
}
