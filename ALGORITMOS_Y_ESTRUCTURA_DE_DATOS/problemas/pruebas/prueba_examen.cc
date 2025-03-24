#include <iostream>
#include <algorithm>  // Para std::min

int Coincide(const std::string& str1, const std::string& str2) {
    int coincidencias = 0;
    int minLength = std::min(str1.length(), str2.length()); // Obtiene la longitud mínima

    for (int i = 0; i < minLength; i++) {
        if (str1[i] == str2[i]) {  // Compara carácter por carácter
            coincidencias++;
        }
    }

    return coincidencias;
}

int main() {
    std::string texto1 = "Examen";
    std::string texto2 = "Ecúmene";

    std::cout << "Número de caracteres que coinciden en la misma posición: " 
              << Coincide(texto1, texto2) 
              << std::endl;

    return 0;
}


