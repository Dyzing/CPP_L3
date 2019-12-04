#include "societe.hh"
#include <iostream>


std::string societe::nom() const
{
    return _nom;
}

std::string societe::type() const
{
    return "Société";
}

const std::string &societe::adresse() const
{
    return _adresse;
}

void societe::sortie(std::ostream &os) const
{
    proprietaire::sortie(os);
    os << " Gérant: " << (*_gerant);
//    os << "(gerant : ";
//    _gerant->sortie(os);
//    os << ")";
}

