#pragma once
#include <vector>
#include <iostream>
#include <memory>
#include "proprietaire.hh"


class compte
{
public:
    compte(float m, std::shared_ptr<proprietaire> prop)
        :_montant(m), _proprietaire(prop) {}
    void verser(float f) {_montant +=f; }
    void virerdepuis (float f, compte & source);
private :
    float _montant;
    std::shared_ptr<proprietaire> _proprietaire;
};

