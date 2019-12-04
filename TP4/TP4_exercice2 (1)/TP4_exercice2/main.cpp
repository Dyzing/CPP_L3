#include <iostream>
#include "document.hh"
#include "periodique.hh"

using namespace std;

int main()
{
    document * d = new periodique("T", "A", 100, 5);
    std::cout << (*d);
    delete d;

    return 0;
}
