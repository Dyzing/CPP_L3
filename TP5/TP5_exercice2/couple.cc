#include "couple.hh"


std::string couple::nom() const
{
    return _p1->nom() + " " + _p2->nom();
}

void couple::sortie(std::ostream &os) const
{
    proprietaire::sortie(os);
}

std::shared_ptr<couple> couple::fabrique(std::shared_ptr<personne> p1, std::shared_ptr<personne> p2)
{
    if(p1->adresse() == p2->adresse())
        return std::shared_ptr<couple>(new couple (p1, p2));
    else
        return std::shared_ptr<couple>(nullptr);
}



const std::string &couple::adresse() const
{
    return _p1->adresse();
}

std::string couple::type() const
{
    return "Couple";
}
