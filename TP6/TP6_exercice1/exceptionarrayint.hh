#pragma once
#include <iostream>
#include<exception>
#include "arrayint.hh"


class exceptionarrayint : public std::exception
{
public:
    exceptionarrayint(std::string const & message, arrayint::indice indice);
    char const * what() const noexcept override;
private:
    std::string _message;
    arrayint::indice _indice;
};

