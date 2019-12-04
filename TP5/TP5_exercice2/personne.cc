#include "personne.hh"


std::string personne::nom() const
{
    return _nom;
}

std::string personne::type() const
{
    return "Personne";
}

const std::string &personne::adresse() const
{
    return _adresse;
}

void personne::sortie(std::ostream &os) const
{
    proprietaire::sortie(os);
    os << " " << _datenaiss;
}

