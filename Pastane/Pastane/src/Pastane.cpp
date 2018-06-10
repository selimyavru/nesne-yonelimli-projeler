#include "Pastane.h"
#include <iostream>
using namespace std;
#include <iomanip>
#include "Siparis.h"
#include "Urun.h"

Pastane::Pastane(string a)
{
    this->ad=a;
}

void Pastane::anaMenuYaz(){
    ayracYaz(36);
    cout << ad << endl;
    ayracYaz(36);
    cout << "1. Yeni Urun" << endl;
    cout << "2. Yeni Siparis" << endl;
    cout << "3. Urunleri Listele" << endl;
    cout << "4. Siparisleri Listele" << endl;
    cout << "0. Cikis" << endl;
    ayracYaz(36);
    cout << "Yapmak istediginiz islemi seciniz: ";


}
bool Pastane::urunVarMi(int barkod){
    for(int i=0; i<urunler.size();i++)
        if(urunler[i].barkod==barkod)
            return true;
    return false;

}
Urun Pastane::urunBul(int barkod){
    for(int i=0; i<urunler.size();i++)
        if(urunler[i].barkod==barkod)
            return urunler[i];

}
void Pastane::yeniUrun(){
    Urun u;
    u.verileriAl();
    urunler.push_back(u);
    urunSayisi++;


}
void Pastane::yeniSiparis(){
    Siparis s;
    int kod;

    while(1){
    cout << "Siparise urun eklemek icin urun barkodunu giriniz" << endl;
    cout << "veya siparisi sonlandirmak icin 0 giriniz: ";
    cin >>kod;
    if(kod!=0 && urunVarMi(kod)){
        s.urunEkle(urunBul(kod));
        cout << endl;

    }
    else
        break;

    }
    ayracYaz(50);
    cout << setw(30) << left << "Urun adi";
    cout << setw(10) << right << "Kg/Adet";
    cout << setw(10) << right << "Tutar" << endl;
    ayracYaz(50);
    s.verileriYaz();
    s.tutarHesapla();
    cout << setw(40)<<left<<"Toplam Tutar:";
    cout << setw(10)<<right<< s.tutar << endl;
    ayracYaz(50);
    siparisSayisi++;
    siparisler.push_back(s);

}
void Pastane::urunleriListele(){
    cout << endl;
    ayracYaz(55);
    cout << setw(10) <<left << "Barkod No" << setw(30) << "Urun Adi" << setw(5) << "Fiyat " << setw(8) << "Kg/Adet" << endl;
    ayracYaz(55);
    for(int i=0; i<urunSayisi; i++)
        cout << setw(10) <<left << urunler[i].barkod << setw(30) << urunler[i].ad << setw(5) << right << urunler[i].fiyat << " "
        << setw(8) << left << (urunler[i].kiloyla ? "Kg" : "Adet") << endl;
    ayracYaz(55);
    cout << "Listelenen toplam urun sayisi: " << urunSayisi << endl << endl;

}
void Pastane::siparisleriListele(){
    ayracYaz(50);
    cout << setw(30) << left << "Urun adi";
    cout << setw(10) << right << "Kg/Adet";
    cout << setw(10) << right << "Tutar" << endl;
    ayracYaz(50);
    int total=0;
    for(int i=0; i<siparisSayisi; i++){
        siparisler[i].verileriYaz();
        total+=siparisler[i].tutar;
    }
    cout << setw(40)<<left<<"Toplam Tutar:";
    cout << setw(10)<<right<< total << endl;
    ayracYaz(50);

}
void Pastane::calistir(){
    int secim;
    urunSayisi=0;
    siparisSayisi=0;

    do{
        anaMenuYaz();
        cin >> secim;
        cout << endl;
        if(secim==1)
            yeniUrun();
        else if(secim==2)
            yeniSiparis();
        else if(secim==3)
            urunleriListele();
        else if(secim==4)
            siparisleriListele();

    }while(secim!=0);

    cout << "Program kapatiliyor..." << endl;
    cout << "Iyi gunler";

}

//Pastane::~Pastane()
//{
    //dtor
//}
