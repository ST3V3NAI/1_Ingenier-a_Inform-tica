#include <iostream>
#include <string>


void PrintProgramPurpose() {
  std::cout << "This program reads a phrase and a word and tells you if it conteded in" << std::endl << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber = 3) {
  if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with a wrong number of parameters." << std::endl;
    std::cout << "This program should be called as: " << argv[0] << "<phrase> <palabra>" << std::endl;
    return false;
  }
  return true;
}


void PartOf(std::string& frase, std::string palabra){

    if(frase.find(palabra) != std::string::npos){
      std::cout << "YES" << std::endl;
    } else {
       std::cout << "NO" << std::endl;
    }
}
