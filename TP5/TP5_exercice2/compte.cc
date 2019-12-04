#include "compte.hh"

void compte::virerdepuis(float f, compte & source)
{
    _montant +=f;
    source._montant -=f;
    if(_proprietaire != source._proprietaire)
        source._montant -= 1;
}
