#include <iostream>
#include <cmath>

class Rectangulo {
  public:
    
    // Constructor de la clase Rectángulo
    Rectangulo(const int& largo, const int& ancho) : largo_(largo), ancho_(ancho) {}

    // Método de la Clase Rectángulo
    
    int calcularArea() const {
        return largo_ * ancho_;
    }


    int calcularPerimetro() const {
        return (2 * largo_ + 2 * ancho_);
    }


  private:
    int largo_;
    int ancho_;

};

int main() {
  Rectangulo rect(5.0, 10.0);  
  std::cout << "Area: " << rect.calcularArea() << std::endl;
  std::cout << "Perímetro: " << rect.calcularPerimetro() << std::endl;

  return 0;
}