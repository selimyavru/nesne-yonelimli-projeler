#ifndef URUN_H
#define URUN_H
#include <iostream>
using namespace std;

class Urun
{
    private:
        string ad;
        int barkod,adet;
        double kg,fiyat;
        bool kiloyla;

    public:
        Urun();
        void verileriAl();
        void verileriYaz1();

};

#endif // URUN_H
