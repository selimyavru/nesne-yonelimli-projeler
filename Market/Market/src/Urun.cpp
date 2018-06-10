#include "Urun.h"
#include <iostream>
using namespace std;
Urun::Urun()
{

}

Urun::Urun(string ad, double fiyat, int stok, int satilan){
    this-> ad = ad;
    this-> fiyat = fiyat;
    this-> stok = stok;
    this-> satilan =satilan;

}


//Urun::~Urun()
//{
    //dtor
//}
