#include "Muhendis.h"

Muhendis::Muhendis()
{
    //ctor
}

void Muhendis::bilgileriAl(){
    cout << "Muhendisin adini giriniz: "; cin >> ad;
    cout << "Muhendisin soyadini giriniz: "; cin >> soyad;
    cout << "Muhendisin projesini giriniz: "; cin >> proje;
}
void Muhendis::bilgileriYaz(){
        gorev="Muhendis";
        cout << setw(10) <<right << ad << setw(10) << soyad << setw(10) << gorev
        << setw(10) << maas+2000 << setw(10) << proje << setw(10) <<endl;

}
