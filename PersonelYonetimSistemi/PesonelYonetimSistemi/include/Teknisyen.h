#ifndef TEKNISYEN_H
#define TEKNISYEN_H

#include <iostream>

using namespace std;
#include "Calisan.h"
#include <iomanip>
class Teknisyen: public Calisan
{
    public:
        Teknisyen();
        virtual void bilgileriAl();
        virtual void bilgileriYaz();
};

#endif // TEKNISYEN_H
