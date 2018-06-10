#include "Calisan.h"

Calisan::Calisan()
{

}

void Calisan::bilgileriAl(){
    cout << "Calisanin adini giriniz: "; cin >> ad;
    cout << "Calisanin soyadini giriniz: "; cin >> soyad;
}
void Calisan::bilgileriYaz(){
    gorev="Calisan";
    cout << setw(10) <<right << ad << setw(10) << soyad << setw(10) << gorev
        << setw(10) << maas << setw(10) << setw(10)  <<endl;

}
