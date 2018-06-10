#ifndef URUN_H
#define URUN_H
#include <iostream>
using namespace std;
void ayracYaz(int uzunluk);
class Urun
{
    friend class Pastane;
    friend class Siparis;

    private:
        string ad;
        int barkod,adet;
        double kg,fiyat;
        bool kiloyla;

    public:
        Urun();
        void verileriAl();
        void verileriYaz();

};

#endif // URUN_H
