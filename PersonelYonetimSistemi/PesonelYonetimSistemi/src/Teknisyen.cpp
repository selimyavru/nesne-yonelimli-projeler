#include "Teknisyen.h"

Teknisyen::Teknisyen()
{
    //ctor
}

void Teknisyen::bilgileriAl(){
    cout << "Teknisyenin adini giriniz: "; cin >> ad;
    cout << "Teknisyenin soyadini giriniz: "; cin >> soyad;
}
void Teknisyen::bilgileriYaz(){
        gorev="Teknisyen";
        cout << setw(10) <<right << ad << setw(10) << soyad << setw(10) << gorev
        << setw(10) << maas << setw(10) << setw(10) <<endl;

}
