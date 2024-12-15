#include <iostream>
#include <string>

class CuentaBancaria {
  public: 

  // Constructor que inicitaliza los atributos con los valores recibidos
  CuentaBancaria(const std::string titular, double saldo) : titular_(titular), saldo_(saldo) {}

  // Métodos de la clase Cuenta Bancaria
  double depositar(double depositar){
    saldo_ += depositar;

    return saldo_;
  }

  double retirar(double retirar) {
    saldo_ -= retirar;

    return saldo_;
  }

  // Método que muestra el saldo actual

  void ConsultarSaldo() const {
    std::cout << "Señor: " << titular_ << " su saldo es de " << saldo_ << std::endl;  
  }


  private:
    std::string titular_;
    double saldo_;
};

int main() {
   CuentaBancaria cuenta1("Carlos", 1000.0);
   cuenta1.depositar(1000);
   cuenta1.retirar(200);
   cuenta1.ConsultarSaldo();

  return 0;
}