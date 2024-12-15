#include <iostream>
#include <string>

void Initials(std::string& frase){
    std::getline(std::cin, frase, '.');
    for(char& i : frase){
        if(std::isupper(i)){
            std::cout << i;
        }
    }
}

int main() {
    std::string frase{};

    Initials(frase);

}

