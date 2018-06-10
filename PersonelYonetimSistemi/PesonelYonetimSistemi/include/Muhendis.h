#ifndef MUHENDIS_H
#define MUHENDIS_H

#include <iostream>

using namespace std;
#include "Calisan.h"
#include <iomanip>
class Muhendis: public Calisan
{
    public:
        Muhendis();
        virtual void bilgileriAl();
        virtual void bilgileriYaz();
    protected:
        string proje;
};

#endif // MUHENDIS_H
