#pragma once
#include "proprietaire.hh"
#include <iostream>
#include <string>
#include <memory>


class personne : public proprietaire
{
public:
    personne();
    std::string nom() const override;
    std::string type() const override;
    std::string const & adresse() const override;
    void sortie(std::ostream & os)const override;

private:
    std::string _datenaiss;
    std::string _nom;
    std::string _adresse;

};
