#ifndef DOKTOR_H
#define DOKTOR_H

#include <iomanip>
#include "Kisi.h"
#include "Calisan.h"

class Doktor: public Kisi, public Calisan{
    friend ostream& operator<<(ostream& , Doktor& );
    friend istream& operator>>(istream& , Doktor& );

    public:
        Doktor();

    private:
};

#endif // DOKTOR_H
