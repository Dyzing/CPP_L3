#pragma once
#include "proprietaire.hh"
#include <iostream>
#include <string>
#include <memory>
#include "personne.hh"


class societe : public proprietaire
{
public:
    std::string nom() const override;
    std::string type() const override;
    std::string const & adresse() const override;
    void sortie(std::ostream & os)const override;

private:
    std::string _nom;
    std::string _adresse;
    std::shared_ptr<personne> _gerant;
};

