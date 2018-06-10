#include "Mudur.h"

Mudur::Mudur()
{
    //ctor
}

void Mudur::bilgileriAl(){
    cout << "Mudurun adini giriniz: "; cin >> ad;
    cout << "Mudurun soyadini giriniz: "; cin >> soyad;
    cout << "Mudurun bolumunu giriniz: "; cin >> bolum;
    maas+=1000;
    gorev="Mudur";

}
