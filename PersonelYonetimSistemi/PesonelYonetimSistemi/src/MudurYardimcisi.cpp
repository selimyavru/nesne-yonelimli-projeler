#include "MudurYardimcisi.h"

MudurYardimcisi::MudurYardimcisi()
{
    //ctor
}

void MudurYardimcisi::bilgileriAl(){
    cout << "Mudur Yardimcininin adini giriniz: "; cin >> ad;
    cout << "Mudur Yardimcininin soyadini giriniz: "; cin >> soyad;
    cout << "Mudur Yardimcininin bolumunu giriniz: "; cin >> bolum;
    gorev="M.Yard.";
}
void MudurYardimcisi::bilgileriYaz(){

    cout << setw(10) <<right << ad << setw(10) << soyad << setw(10) << gorev
        << setw(10) << maas+3000 << setw(20) << bolum << endl;

}
