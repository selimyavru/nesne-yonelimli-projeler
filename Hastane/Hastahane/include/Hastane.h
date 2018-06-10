#ifndef HASTANE_H
#define HASTANE_H

#include <iomanip>
#include <vector>
#include "BasHekim.h"
#include "Doktor.h"
#include "Asistan.h"

class Hastane{
    public:
        void calistir();

    private:
        BasHekim basHekim;
        vector<Doktor>doktorlar;
        vector<Asistan>asistanlar;

        void menuYaz();
        void doktorEkle();
        void doktorlariListele();
        void asistanEkle();
        void asistanlariListele();
        void basHekimAta();
        void basHekimYazdir();

};

#endif // HASTANE_H
