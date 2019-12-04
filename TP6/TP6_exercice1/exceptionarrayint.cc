#include "exceptionarrayint.hh"


exceptionarrayint::exceptionarrayint(const std::string &message, arrayint::indice indice)
    :exception(), _message(message), _indice(indice)
{

}

const char *exceptionarrayint::what() const noexcept
{
    return _message.c_str();
}
