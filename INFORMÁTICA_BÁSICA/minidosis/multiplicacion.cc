#include <iostream>

int main(){
    int num_a{0}, num_b{0}, mult{0};

    std::cin >> num_a >> num_b;

    mult = num_a * num_b;

    std::cout << "Resultado = " << mult;

    return 0;
}