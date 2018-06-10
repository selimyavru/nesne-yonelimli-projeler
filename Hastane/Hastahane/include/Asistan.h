#ifndef ASİSTAN_H
#define ASİSTAN_H

#include <iomanip>
#include "Ogrenci.h"
#include "Kisi.h"
#include "Calisan.h"

class Asistan: public Ogrenci, public Kisi, public Calisan{
    friend ostream& operator<<(ostream& ,Asistan& );
    friend istream& operator>>(istream& ,Asistan& );

    public:
        Asistan();

    private:
};

#endif // ASİSTAN_H
