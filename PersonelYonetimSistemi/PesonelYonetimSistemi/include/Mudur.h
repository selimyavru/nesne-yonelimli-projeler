#ifndef MUDUR_H
#define MUDUR_H
#include <iostream>

using namespace std;

#include "MudurYardimcisi.h"
class Mudur: public MudurYardimcisi
{
    public:
        Mudur();
        virtual void bilgileriAl();

};

#endif // MUDUR_H
