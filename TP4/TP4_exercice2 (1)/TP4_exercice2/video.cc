#include "video.hh"



bool video::empruntable() const {
    return true;
}

float video::prix() const
{
    return 70;
}

void video::sortieflux(std::ostream &os) const
{
    document::sortieflux(os);
    switch (_support) {
    case typevideo::DVD: os << "DVD"; break;
    case typevideo::BR: os << "BR"; break;
    case typevideo::BR3D: os << "BR3D"; break;
    }
}

std::string video::typedoc() const
{
    return "video";
}

document *video::clone() const
{
    return new video(*this);
}

typevideo video::support() const
{
    return _support;
}
