#ifndef DAIRE_H
#define DAIRE_H
#include <iostream>

using namespace std;
#include "Sekil.h"
class Daire: public Sekil
{
    public:
        Daire(int rr);
        virtual double cevreHesapla();
        virtual double alanHesapla();
    private:
        int r;
};

#endif // DAIRE_H
