#include "arrayint.hh"
#include "exceptionarrayint.hh"


arrayint::arrayint(indice a, indice b)
    :_contenu(b-a+1,0), _imin(a), _imax(b)
{

}

arrayint::indice arrayint::imin() const
{
    return _imin;
}

arrayint::indice arrayint::imax() const
{
    return _imax;
}

void arrayint::set(const arrayint::indice &i, const int &valeur)
{
    if((i<_imin) || (i>_imax))
        throw exceptionarrayint("Indice invalide dans set", i);
    else
        _contenu[i-_imin] = valeur;
}

int arrayint::operator[](arrayint::indice i) const
{
    return at(i);
}

bool arrayint::operator==(const arrayint &a) const
{
    return (_imin == a._imin) && (_contenu == a._contenu);
}

int arrayint::at(arrayint::indice i) const
{
    if((i<_imin) || (i>_imax))
        throw exceptionarrayint("Indice invalide dans set", i);
    else
        return _contenu[i-_imin];
}

std::ostream &operator<<(std::ostream &os, const arrayint &p)
{
    arrayint::indice i = p.imin();
    try
    {
        while(true)
        {
            os << p.at(i);
            i++;
        }
    }
    catch (exceptionarrayint const &)
    {
    }
    return os;
}
