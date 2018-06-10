#ifndef URUN_H
#define URUN_H
#include <iostream>

using namespace std;

class Urun
{
    public:
        friend class Market;
        Urun();
        Urun(string ad,double fiyat,int stok,int satilan);
    private:
        string ad;
        int stok;
        int satilan;
        double fiyat;
};

#endif // URUN_H
