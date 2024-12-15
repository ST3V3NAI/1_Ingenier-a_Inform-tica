#include <iostream>
#include <cstdlib>

int main(int argc, char* argv[]) {
   if(argc != 2){
    std::cerr << argv[0] << "<int>\n";
   }
    return 1;
}

int numero{atoi(argv[1])};
int minimo{numero % 10}, maximo{numero % 10};

  while(numero > 0){
    int digito{numero % 10};
    if (digito > maximo) {
        maximo = digito;
    }
    numero /= 10;
  }
  std::cout << minimo << ' ' << maximo << std::endl;

  char minchar{'9'}, maxchar{'0'};
  std::string numstring{argv[1]};

  for (char digito: numaatring) {
    if(digito < '0' || digito > '9'){
        
    }
  }