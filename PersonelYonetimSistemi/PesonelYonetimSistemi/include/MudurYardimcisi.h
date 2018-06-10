#ifndef MUDURYARDIMCISI_H
#define MUDURYARDIMCISI_H
#include <iostream>

using namespace std;

#include "Calisan.h"
#include <iomanip>
class MudurYardimcisi: public Calisan
{
    public:
        MudurYardimcisi();
        virtual void bilgileriAl();
        virtual void bilgileriYaz();
    protected:
        string bolum;
};

#endif // MUDURYARDIMCISI_H
