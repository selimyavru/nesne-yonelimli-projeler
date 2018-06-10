#ifndef PASTANE_H
#define PASTANE_H
#include <iostream>
using namespace std;
#include <vector>
#include "Siparis.h"
#include "Urun.h"
class Pastane
{
    private:
    string ad;
    vector<Siparis> siparisler;
    vector<Urun> urunler;
    int urunSayisi;
    int siparisSayisi;

    public:
        Pastane(string a);
        void anaMenuYaz();
        bool urunVarMi(int barkod);
        Urun urunBul(int barkod);
        void yeniUrun();
        void yeniSiparis();
        void urunleriListele();
        void siparisleriListele();
        void calistir();


};

#endif // PASTANE_H
