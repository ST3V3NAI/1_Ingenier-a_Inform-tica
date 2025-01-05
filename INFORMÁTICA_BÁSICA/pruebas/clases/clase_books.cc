/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2024-2025
 *
 * @file clase_books.cc
 * @author Steven
 * @date 2025-01-05
 * @brief Este programa muestra la información de tres libros utilizando una clase
 * @bug There are no known bugs
*/

#include <iostream>
#include <string>

class Books{
  public:
    // Constructor de la clase Books
    Books(const std::string&title, int publication_year, double precio) : 
        title_{title}, publication_year_{publication_year}, precio_{precio} {}

    // Métodos para la clase Books
    void showInformation() const {
        std::cout << "Title: " << title_ << std::endl;
        std::cout << "Publication year: " << publication_year_ << std::endl;
        std::cout << "Precio: " << precio_ << std::endl;
    }

    double calcularPrecioImpuestos(double porcentaje_impuesto) {
        return precio_ + (precio_ * porcentaje_impuesto / 100.0);
    }


  private:
    std::string title_;
    int publication_year_;
    int precio_;
};

int main(int argc, char* argv[]) {
   if(argc != 2) {
      std::cerr << "Uso: " << argv[0] << "<impuesto>" << std::endl;
      return 1;
   } else {
      double porcentaje_impuesto = std::atof(argv[1]);
        Books books[3] = {
          Books("Cien años de soledad", 1967, 20.0),
          Books("Don Quijote de la Mancha", 1605, 15.0),
          Books("El principito", 1943, 10.0)
        };

        for (int i = 0; i < 3; i++) {
          books[i].showInformation();
          std::cout << "Precio con Impuestos: " << books[i].calcularPrecioImpuestos(porcentaje_impuesto) << std::endl;
           std::cout << "----------------------------------------------------" << std::endl;
        } 
   }

    return 0;
}
