#ifndef CALISAN_H
#define CALISAN_H
#include <iostream>

using namespace std;
#include "Kisi.h"

#include <iomanip>
class Calisan: public Kisi
{
    public:
        Calisan();
        virtual void bilgileriAl();
        virtual void bilgileriYaz();
    protected:
        int maas=2000;
        string gorev;
};

#endif // CALISAN_H
