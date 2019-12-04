#include "livre.hh"


bool livre::empruntable() const {
    return _empruntable;
}

std::string livre::typedoc() const
{
    return "livre";
}

document *livre::clone() const
{
    return new livre(*this);
}
