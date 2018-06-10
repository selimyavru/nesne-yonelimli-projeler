#ifndef SIPARIS_H
#define SIPARIS_H
#include <Urun.h>
#include <iostream>
#include <vector>
using namespace std;

class Siparis
{
    public:
        friend class Pastane;
        Siparis();
        void urunEkle(Urun urn);
        void tutarHesapla();
        void verileriYaz();



    private:
        vector<Urun>urunler;
        double tutar;
};

#endif // SIPARIS_H
