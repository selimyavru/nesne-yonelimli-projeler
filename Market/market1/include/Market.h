#ifndef MARKET_H
#define MARKET_H
#include <vector>
#include <iostream>
#include "Urun.h"

using namespace std;

class Market
{
    public:
        friend class Urun;
        Market();
        Market(string ad);
        void urunEkle(Urun& urun);
        void hasilatHesapla();
        void dokumYazdir();

    private:
        string ad;
        double gelir=0,gider=0;
        double kar=0;
        vector<Urun> urunler;
};

#endif // MARKET_H
