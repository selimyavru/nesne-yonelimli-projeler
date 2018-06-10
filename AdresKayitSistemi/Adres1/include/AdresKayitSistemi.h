#ifndef ADRESKAYITSISTEMI_H
#define ADRESKAYITSISTEMI_H


#include <vector>
#include "Kisi.h"
#include <iostream>
#include <fstream>

using namespace std;

class AdresKayitSistemi{
    public:
        void calistir();

    private:
        vector<Kisi>kisiler;

        void menuYaz();
        void dosyayaKaydet();
        void dosyadanOku();
        void kisiEkle();
        void kisiSil();
        void kisileriListele();
        void adresDegistir();

};


#endif // ADRESKAYITSISTEMI_H
