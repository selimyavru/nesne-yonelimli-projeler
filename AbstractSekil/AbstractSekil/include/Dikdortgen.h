#ifndef DIKDORTGEN_H
#define DIKDORTGEN_H
#include <iostream>

using namespace std;
#include "Sekil.h"
class Dikdortgen: public Sekil
{
    public:
        Dikdortgen(int e, int b);
        virtual double cevreHesapla();
        virtual double alanHesapla();
    private:
        int en,boy;
};

#endif // DIKDORTGEN_H
