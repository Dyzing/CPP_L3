#pragma once
#include "document.hh"

class documentecrit : public document
{
public:
    documentecrit(std::string const & t, std::string const & a, unsigned int p)
        :document(t, a), _pages(p)   {}
    float prix() const override;

private:
    unsigned int _pages;
};

