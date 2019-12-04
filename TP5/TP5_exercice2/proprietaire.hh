#pragma once
#include <iostream>
#include <string>

class proprietaire
{
public:
    proprietaire()= default;
    virtual ~proprietaire() = default;
    proprietaire(proprietaire const & p) =delete;
    proprietaire & operator =(proprietaire const & p) =delete;
    virtual std::string nom() const =0;
    virtual std::string type() const =0;
    virtual std::string const & adresse() const =0;
    virtual std::string etiquetteexpedition() const;
    virtual void sortie(std::ostream & os)const;
private:

};

std::ostream & operator<<(std::ostream & os, proprietaire const & p);
