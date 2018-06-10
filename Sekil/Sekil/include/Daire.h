#ifndef DAIRE_H
#define DAIRE_H
#include "Sekil.h"

class Daire:public Sekil
{
    private:
        double yaricap;
    public:
        Daire(double yc);
        void yazdir();
        double alan();
        double cevre();

};

#endif // DAIRE_H
