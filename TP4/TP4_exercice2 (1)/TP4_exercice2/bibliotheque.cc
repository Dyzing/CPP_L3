#include "bibliotheque.hh"
#include "video.hh"


bibliotheque::~bibliotheque()
{
    for(auto i : _contenu)
        delete i;
}

void bibliotheque::ajout(const document &d)
{
    _contenu.push_back((d.clone()));
}

std::size_t bibliotheque::nbvideo(const typevideo &typev) const
{
    int compteur(0);
    for(auto i : _contenu)
    {
        auto vid =dynamic_cast<video*>(i);
        if(vid != nullptr)
        {
            if (vid->support() == typev) {
                compteur++;
            }
        }
    }
    return compteur;
}
