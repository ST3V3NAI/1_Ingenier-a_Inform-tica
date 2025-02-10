// AUTOR: Steven Abolaji Ibidokun
// FECHA: 2025-02-08
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: Número de práctica
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

#pragma once

#include <iostream>

#define MAX_WIDE 6
#define MAX_PRECISION 2

namespace AyED
{

    class vector
    {
    public:
        vector(void);
        vector(size_t sz);
        vector(const vector &v);
        ~vector(void);

        size_t size(void) const;

        double at(const size_t pos) const;
        double &at(const size_t pos);

        double operator[](const size_t pos) const;
        double &operator[](const size_t pos);

        vector &operator=(const vector &v);

        double scalar_product(const vector &v) const;

        bool perpendicular(const vector &v, const double precision = 1E-3) const;

        std::ostream &write(std::ostream &os) const;
        std::istream &read(std::istream &is);

    private:
        void crea_vector_(void);
        void destruye_vector_(void);

    private:
        double *v_;
        size_t sz_;
    };
}

std::ostream &operator<<(std::ostream &os, const AyED::vector &v);

std::istream &operator>>(std::istream &is, AyED::vector &v);

double operator*(const AyED::vector &v1, const AyED::vector &v2);