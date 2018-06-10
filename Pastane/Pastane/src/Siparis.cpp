#include "Siparis.h"
#include <iostream>
using namespace std;
#include <iomanip>
#include "Urun.h"
Siparis::Siparis()
{
    tutar=0;
}


void Siparis::urunEkle(Urun urn){
    cout << "Kac " << (urn.kiloyla?"kilo ":"adet ") << urn.ad << "siparis edildi: ";
    if(urn.kiloyla)
        cin >> urn.kg;
    else
        cin >> urn.adet;
    urunler.push_back(urn);

}
void Siparis::tutarHesapla(){
    for(int i=0; i<urunler.size();i++)
        tutar += urunler[i].fiyat * (urunler[i].kiloyla ? urunler[i].kg : urunler[i].adet);

}
void Siparis::verileriYaz(){
    for (int i=0; i<urunler.size();i++){
        cout << setw(30)<<left<<urunler[i].ad;
        cout << setw(10)<<right<<(urunler[i].kiloyla ? urunler[i].kg : urunler[i].adet);
        cout << setw(10)<<right<<(urunler[i].kiloyla ? urunler[i].kg * urunler[i].fiyat : urunler[i].adet * urunler[i].fiyat) << endl;

    }
    ayracYaz(50);
}



//Siparis::~Siparis()
//{
    //dtor
//}
