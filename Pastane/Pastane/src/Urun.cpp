#include "Urun.h"
#include <iomanip>
Urun::Urun()
{
    barkod=0;
    adet=0;
    fiyat=0.0;
    kg=0.0;
    kiloyla=false;

}


void Urun::verileriAl(){
    cout << "Urun barkodunu giriniz: ";
    cin >> barkod;
    cout << "Urun adini giriniz: ";
    cin >> ad;
    cout << "Kiloyla mi satiliyor (Evet: E/e, Hayir: H/h): ";
    char kontrolet;
    cin >> kontrolet;

    if(kontrolet== 'e' || kontrolet== 'E')
        kiloyla=true;
    cout << "Urun " << (kiloyla ? "kg" : "adet") << "fiyatini giriniz: ";
    cin >> fiyat;
    cout << endl;



}

void Urun::verileriYaz(){
    cout << setw(30)<<left<<ad;
    cout << setw(10)<<right<< (kiloyla ? kg : adet);
    cout << setw(5)<<right<< (kiloyla ? kg*fiyat : adet*fiyat);

}

//Urun::~Urun()
//{
    //dtor
//}
