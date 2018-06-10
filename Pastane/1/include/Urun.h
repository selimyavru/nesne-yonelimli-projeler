#ifndef URUN_H
#define URUN_H

#include <iostream>
using namespace std;


class Urun
{
    public:
        friend class Pastane;
        friend class Siparis;
        Urun();
        void verileriAl();
        void verileriYaz();



    private:
        string ad;
        int barkod;
        double kg;
        double fiyat;
        int adet;
        bool kiloyla;
};

#endif // URUN_H
