#include <iostream>

int main(){
    int anyos{0}, jubilado{0};
    int const jubilacion{65};

    std::cout << "¿cuantos anyos tienes?" << std::endl;
    std::cin >> anyos;

    jubilado = jubilacion - anyos;

    std::cout << "Tienes estos " << anyos << " anyos";

    return 0; 
}