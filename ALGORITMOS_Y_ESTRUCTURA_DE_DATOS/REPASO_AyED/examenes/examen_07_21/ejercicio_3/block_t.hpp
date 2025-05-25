// AUTOR: Steven Abolaji Ibidokun
// FECHA: 2025-05-13
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// DESCRIPCIÓN: Clase para el método de conjuntos del examen
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

#include <cstdint>
#include <cassert>
#include <iostream>

// a) Definición de block_t
using block_t = uint16_t; // 16 bits para 16 caracteres

class bitset_c {
private:
    block_t block_; // codificación interna del conjunto
    // Conjunto universal codificado en orden: '0'-'9', 'A'-'F'
    static constexpr char UNIVERSAL[16] = {
        '0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
        'A', 'B', 'C', 'D', 'E', 'F'
    };

    // Devuelve el índice del carácter en el conjunto universal o -1 si no existe
    int get_index(char c) const {
        for (int i = 0; i < 16; ++i) {
            if (UNIVERSAL[i] == c) return i;
        }
        return -1;
    }

public:
    bitset_c(): block_(0) {}

    // b) Método insert
    void insert(const char c) {
        int index = get_index(c);
        assert(index != -1); // Abortamos si el carácter no está en el conjunto universal
        block_ |= (1 << index); // Activamos el bit correspondiente
    }

    // Método opcional para imprimir el contenido del conjunto
    void print() const {
        for (int i = 0; i < 16; ++i) {
            if (block_ & (1 << i)) {
                std::cout << UNIVERSAL[i] << " ";
            }
        }
        std::cout << std::endl;
    }
};
