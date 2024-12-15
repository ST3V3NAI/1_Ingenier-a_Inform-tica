#include <iostream>

int main(){
    int area{0}, perimetro{0}, lado{0};

    std::cout << "lado: ";
    std::cin >> lado;

    area = lado * lado;
    perimetro = 4 * lado;

    std::cout << "Perímetro: " << perimetro << std::endl;
    std::cout << "Área: " << area << std::endl; 


    return 0;
}