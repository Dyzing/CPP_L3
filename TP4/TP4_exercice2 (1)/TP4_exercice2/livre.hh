#pragma once
#include "documentecrit.hh"

class livre : public documentecrit
{
public:
    livre(std::string const & t, std::string const & a, unsigned int p, bool e)
        :documentecrit(t,a,p), _empruntable(e)   {}
    bool empruntable() const override;
    std::string typedoc() const override;
    document *clone() const override;

private:
    bool _empruntable;
};

