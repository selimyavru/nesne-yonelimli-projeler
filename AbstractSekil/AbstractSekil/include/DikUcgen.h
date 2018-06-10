#ifndef DIKUCGEN_H
#define DIKUCGEN_H
#include <iostream>

using namespace std;
#include "Ucgen.h"
class DikUcgen: public Ucgen
{
    public:
        DikUcgen(int k1, int k2);
        virtual double cevreHesapla();
        virtual double alanHesapla();
    protected:
    private:
};

#endif // DIKUCGEN_H
