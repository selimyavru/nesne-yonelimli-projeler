#ifndef SIPARIS_H
#define SIPARIS_H
#include "Urun.h"
#include <vector>

class Siparis
{
    private:
        vector<Urun> urunler;
        double tutar;

    public:
        Siparis();
        void urunEkle(Urun urn);
        void tutarHesapla();
        void veirleriYaz();

};

#endif // SIPARIS_H
