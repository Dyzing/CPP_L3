#pragma once
#include <vector>
#include "document.hh"
#include "video.hh"

class bibliotheque
{
public:
    bibliotheque() =default;
    ~bibliotheque();
    void ajout(document const & d);
    std::size_t taille() const { return _contenu.size(); }
    document const & acces (std::size_t i) const { return *(_contenu.at(i));}
    std::size_t nbvideo (typevideo const & typev) const;
private:
    std::vector<document *> _contenu;
};

