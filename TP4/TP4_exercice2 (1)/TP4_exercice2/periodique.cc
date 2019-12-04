#include "periodique.hh"


bool periodique::empruntable() const {
    return false;
}

void periodique::sortieflux(std::ostream &os) const
{
    documentecrit::sortieflux(os);
    os << " num. " << _numero;
}

std::string periodique::typedoc() const
{
    return "periodique";
}

document *periodique::clone() const
{
    return new periodique(*this);
}
