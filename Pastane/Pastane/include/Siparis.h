#ifndef SIPARIS_H
#define SIPARIS_H
#include "Urun.h"
#include <vector>
#include <iostream>
using namespace std;
void ayracYaz(int uzunluk);
class Siparis
{
    friend class Pastane;
    private:
        vector<Urun> urunler;
        double tutar;

    public:
        Siparis();
        void urunEkle(Urun urn);
        void tutarHesapla();
        void verileriYaz();

};

#endif // SIPARIS_H
