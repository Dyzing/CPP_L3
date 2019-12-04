#pragma once
#include "proprietaire.hh"
#include <iostream>
#include <string>
#include <memory>
#include "personne.hh"

class couple : public proprietaire
{
public:
    std::string nom() const override;
    std::string type() const override;
    std::string const & adresse() const override;
    void sortie(std::ostream & os)const override;
    static std::shared_ptr<couple> fabrique(std::shared_ptr<personne> p1, std::shared_ptr<personne> p2);

private:
    couple(std::shared_ptr<personne> p1, std::shared_ptr<personne> p2) : proprietaire(), _p1(p1), _p2(p2) {}
    std::shared_ptr<personne> _p1;
    std::shared_ptr<personne> _p2;
};

