#ifndef PASTANE_H
#define PASTANE_H
#include <Urun.h>
#include <Siparis.h>
#include <vector>
#include <iostream>
using namespace std;

class Pastane
{
    public:
        int urunSayisi;
        int siparisSayisi;
        Pastane(string ad);
        void anaMenuYaz();
        bool urunVarMi(int barkod);
        Urun urunBul(int barkod);
        void yeniUrun();
        void yeniSiparis();
        void urunleriListele();
        void siparisleriListele();
        void calistir();




    private:
        string ad;
        vector<Siparis>siparisler;
        vector<Urun>urunler;

};

#endif // PASTANE_H
