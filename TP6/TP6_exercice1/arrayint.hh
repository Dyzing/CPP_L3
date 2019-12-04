#pragma once
#include <iostream>
#include <vector>

class arrayint
{
public:
    using indice = signed int;
    arrayint(indice a, indice b);
    arrayint(arrayint const & a) = default;
    indice imin() const;
    indice imax() const;
    void set(indice const & i, int const & valeur);
    int at(indice i) const;
    int operator[](indice i) const;
    arrayint & operator=(arrayint const & a) =default;
    bool operator==(arrayint const & a) const;

private:
    std::vector<int> _contenu;
    indice _imin;
    indice _imax;
};

std::ostream &operator<<(std::ostream & os, arrayint const & p);
