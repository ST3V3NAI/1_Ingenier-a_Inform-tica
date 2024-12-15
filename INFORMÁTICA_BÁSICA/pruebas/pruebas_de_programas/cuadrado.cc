#include <iostream>

int main() {
    // Mostrar los caracteres con códigos ASCII 169, 170, 192 y 217
    std::cout << char(169) << " " << char(170) << " " << char(192) << " " << char(217) << std::endl;
    
    // Mostrar los caracteres con códigos ASCII 179 y 196 para crear un cuadrado
    std::cout << char(179) << "  " << char(179) << std::endl;
    std::cout << char(179) << "  " << char(179) << std::endl;
    
    return 0;
}