#ifndef PERSONELYONETIMSISTEMI_H
#define PERSONELYONETIMSISTEMI_H
#include <vector>
#include <iostream>

using namespace std;
#include "MudurYardimcisi.h"
#include "Mudur.h"
#include "Muhendis.h"
#include "Teknisyen.h"
#include "Calisan.h"
#include "Kisi.h"

#include <iomanip>
class PersonelYonetimSistemi
{
    public:
        void calistir();
        virtual ~PersonelYonetimSistemi();
    private:
        void menuYaz();
        void personelEkle();
        void personelleriListele();
        void personelSil();


        vector <Kisi*> personeller;
};

#endif // PERSONELYONETIMSISTEMI_H
