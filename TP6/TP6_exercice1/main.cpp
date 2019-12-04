#include <iostream>
#include "arrayint.hh"
#include "exceptionarrayint.hh"

using namespace std;

int main()
{
    arrayint tab(-10,10);
    tab.set(0, 5);
    std::cout<<tab << std::endl;;

    return 0;
}
