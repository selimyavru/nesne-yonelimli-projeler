#ifndef UCGEN_H
#define UCGEN_H
#include <iostream>

using namespace std;
#include "Sekil.h"

#include <cmath>
class Ucgen: public Sekil
{
    public:
        Ucgen(int k1, int k2, int k3);
        virtual double cevreHesapla();
        virtual double alanHesapla();
    protected:
        int kenar1;
        int kenar2;
        int kenar3;
};

#endif // UCGEN_H
