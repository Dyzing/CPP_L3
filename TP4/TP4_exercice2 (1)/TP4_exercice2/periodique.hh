#pragma once
#include "documentecrit.hh"

class periodique : public documentecrit
{
public:
    periodique(std::string const & t, std::string a, unsigned int const & p,  unsigned int n)
        :documentecrit(t, a, p), _numero(n)   {}
    bool empruntable() const override;
    void sortieflux(std::ostream &os) const override;
    std::string typedoc() const override;
    document *clone() const override;

private:
    unsigned int _numero;
};

