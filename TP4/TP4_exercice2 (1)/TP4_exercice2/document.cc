#include "document.hh"



std::ostream &operator<<(std::ostream &os, const document &d)
{
    d.sortieflux(os);
    return os;
}

void document::sortieflux(std::ostream &os) const
{
    os << typedoc() << " " << _titre << " " << _auteur << " ";
    if(empruntable())
        os << "EMP ";
    else
        os << "NOMEMP ";
    os << prix() << "E";
}
