// AUTOR: Steven Abolaji Ibidokun
// FECHA: 2025-02-08
// EMAIL: alu0101619613@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

#include "vector.h"

#include <cstdio>
#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <cassert>

namespace AyED
{

    vector::vector(void) : v_(NULL),
                           sz_(0) {}

    vector::vector(size_t sz) : v_(NULL),
                                sz_(sz)
    {
        crea_vector_();
    }

    vector::vector(const vector &v) : v_(NULL),
                                      sz_(v.sz_)
    {
        crea_vector_();

        for (size_t i{0}; i < sz_; i++)
            v_[i] = v.v_[i];
    }

    vector &vector::operator=(const vector &v)
    {
        if (this != &v)
        {
            destruye_vector_();

            sz_ = v.sz_;
            crea_vector_();

            for (size_t i{0}; i < sz_; i++)
                v_[i] = v.v_[i];
        }

        return *this;
    }

    vector::~vector(void)
    {
        destruye_vector_();
    }

    size_t vector::size(void) const
    {
        return sz_;
    }

    double vector::at(const size_t pos) const
    {
        assert(pos < sz_);

        return v_[pos];
    }

    double &vector::at(const size_t pos)
    {
        assert(pos < sz_);

        return v_[pos];
    }

    double vector::operator[](const size_t pos) const
    {
        return at(pos);
    }

    double &vector::operator[](const size_t pos)
    {
        return at(pos);
    }

    double vector::scalar_product(const vector &v) const
    {
        assert(sz_ == v.size());

        double result{0};

        for (size_t i{0}; i < sz_; i++)
            result += v_[i] * v[i];

        return result;
    }

    bool vector::perpendicular(const vector &v, const double precision) const
    {
        assert(sz_ == v.size());

        const double result{scalar_product(v)};

        if (fabs(result) < precision)
            return true;
        else
            return false;
    }

    std::ostream &vector::write(std::ostream &os) const
    {
        os << std::setw(MAX_WIDE) << std::fixed << std::setprecision(0) << sz_ << std::endl;

        for (size_t i{0}; i < sz_; i++)
            os << std::setw(MAX_WIDE) << std::fixed << std::setprecision(MAX_PRECISION) << v_[i] << " ";

        return os;
    }

    std::istream &vector::read(std::istream &is)
    {
        is >> sz_;

        destruye_vector_();
        crea_vector_();

        for (size_t i{0}; i < sz_; i++)
            is >> v_[i];

        return is;
    }

    void vector::crea_vector_(void)
    {
        v_ = new double[sz_];
    }

    void vector::destruye_vector_(void)
    {
        if (v_ != NULL)
        {
            delete[] v_;
            v_ = NULL;
        }
    }
}

std::ostream &operator<<(std::ostream &os, const AyED::vector &v)
{
    v.write(os);
    return os;
}

std::istream &operator>>(std::istream &is, AyED::vector &v)
{
    return v.read(is);
}

double operator*(const AyED::vector &v1, const AyED::vector &v2)
{
    return v1.scalar_product(v2);
}