#pragma once
#include "document.hh"

enum class typevideo {
    DVD, BR, BR3D
};


class video : public document  {

public:
    video(std::string const & t, std::string const & a, typevideo s)
        :document(t, a), _support(s)   {}
    bool empruntable() const override;
    float prix() const override;
    void sortieflux(std::ostream &os) const override;
    std::string typedoc() const override;
    document *clone() const override;
    typevideo support() const;

private:
    typevideo _support;
};

