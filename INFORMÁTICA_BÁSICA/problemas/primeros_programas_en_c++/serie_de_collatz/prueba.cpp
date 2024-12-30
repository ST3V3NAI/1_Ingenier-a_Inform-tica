#include <iostream>
#include <string>

int main() {
  std::string phrase;
  int contador_n{0}, contador_e{0}, contador_s{0}, contador_o{0};

  std::cin >> phrase;

  for(char i : phrase) {
    if(i == 'n') {
      contador_n--;
    } else if (i == 'e') {
      contador_e++;     
    } else if (i == 's'){
      contador_s++;
    } else if (i == 'o') {
      contador_o--;
    } else {
      contador_e = 0;
      contador_n = 0;
      contador_o = 0;
      contador_s = 0;
    }
  }

  std::cout << "(" << contador_n + contador_s << ", " << contador_e + contador_o 
            << " )" << std::endl;

}
