/*Crear una clase Persona que tenga como atributos privados nombre y edad*/

#include <iostream>
#include <string>

class Persona{
  public:
  // Constructor que inicializa los atributos con los valores recibidos
  Persona(const std::string& nombre, int edad) : nombre_(nombre), edad_(edad) {}

  // Método para mostrar la información de la persona
  void MostrarInformación() const {
     std::cout << "Nombre: " << nombre_ << ", Edad: " << edad_ << std::endl;
   }

   // Métodos getter y setter
   std::string GetNombre() const { return nombre_; }
   int GetEdad() const { return edad_ ;  }
   void SetNombre(const std::string& nombre) { nombre_ = nombre; }
   void SetEdad(int edad) { edad_ = edad; }
    
  private:
    std::string nombre_;
    int edad_;
}; 

int main() {
    Persona persona1("Juan", 25);
    persona1.MostrarInformación();
    return 0;
}