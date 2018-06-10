#include <iostream>

using namespace std;
#include "Dikdortgen.h"
#include "Kare.h"
#include "Daire.h"
#include "Ucgen.h"

int main()
{
    Dikdortgen d(5, 10);
    Kare k(6);
    Daire a(3);
    Ucgen u(3, 4, 5);

    d.yazdir();
    k.yazdir();
    a.yazdir();
    u.yazdir();

    return 0;
}
