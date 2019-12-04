#include "proprietaire.hh"


std::string proprietaire::etiquetteexpedition() const
{
    return nom() + " " + adresse();
}

void proprietaire::sortie(std::ostream &os) const
{
    os << type() << " " << nom() << " " << adresse();
}

std::ostream &operator <<(std::ostream &os, const proprietaire &p)
{
    p.sortie(os);
    return os;
}
