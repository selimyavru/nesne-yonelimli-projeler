#ifndef URUN_H
#define URUN_H
#include <iostream>
using namespace std;

class Urun
{
    private:
        string ad;
        int stok,satilan;
        double fiyat;

    public:
        friend class Market;
        Urun();
        Urun(string ad, double fiyat, int stok, int satilan);



};

#endif // URUN_H
