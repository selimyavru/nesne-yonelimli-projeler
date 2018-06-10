#ifndef DIKDORTGEN_H
#define DIKDORTGEN_H
#include "Sekil.h"


class Dikdortgen:public Sekil
{
    private:
        double en,boy;
    public:
        Dikdortgen(double e, double b);
        void yazdir();
        double alan();
        double cevre();

};

#endif // DIKDORTGEN_H
