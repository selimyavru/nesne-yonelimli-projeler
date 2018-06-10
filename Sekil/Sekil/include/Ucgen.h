#ifndef UCGEN_H
#define UCGEN_H
#include "Sekil.h"
#include <cmath>

class Ucgen:public Sekil
{
    private:
        double kenar1,kenar2,kenar3;
    public:
        Ucgen(double k1, double k2, double k3);
        void yazdir();
        double alan();
        double cevre();

};

#endif // UCGEN_H
