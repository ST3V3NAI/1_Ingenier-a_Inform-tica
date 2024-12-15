#include <iostream>

int Five() {
  return 5;
}

int main() {
  constexpr double kGravity{9.8};  // correcto: 9.8 es una expresión constante
  constexpr int kSum{4 + 5};       // correcto: 4 + 5 es una expresión constante
  constexpr int kSomething{sum};   // correcto: sum es una expresión constante

  int age;
  std::cin >> age;
  constexpr int kMyAge{age};      // error: age no es una expresión constante
  constexpr int kYoung{Five()};   // error: el valor de retorno de Five() no es una expresión constante
  return 0;
}