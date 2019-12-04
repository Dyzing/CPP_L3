#pragma once
#include <iostream>
#include <string>

class document
{
public:
    document(std::string const & t, std::string const & a)
        :_titre(t), _auteur(a)  {}
    virtual ~document() =default;
    virtual bool empruntable() const =0;
    virtual float prix() const =0;
    virtual void sortieflux(std::ostream & os) const;
    virtual std::string typedoc() const =0;
    virtual document *clone() const =0;
private:
    bool _pretable;
    std::string _titre;
    std::string _auteur;

};

std::ostream & operator<<(std::ostream & os, document const & d);
