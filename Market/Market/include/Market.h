#ifndef MARKET_H
#define MARKET_H

#include <iostream>

using namespace std;
#include <vector>
#include "Urun.h"
class Market
{
    private:
        string ad;
        double gelir=0,gider=0,kar=0;
        vector<Urun> urunler;

    public:
        Market();
        Market(string ad);
        void urunEkle(Urun& urun);
        void hasilatHesapla();
        void dokumYazdir();

};

#endif // MARKET_H
