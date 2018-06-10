#include "Urun.h"
#include <iostream>
#include <Pastane.h>
#include <vector>
using namespace std;

Urun::Urun()
{

    this->barkod=0;
    this->kg=0;
    this->fiyat=0;
    this->adet=0;
    this->kiloyla=false;
}
void Urun::verileriAl(){

        cout<<"Urun barkodunu giriniz: "<<endl;
        cin>>barkod;
        cout<<"Urun adini giriniz: "<<endl;
        cin>>this->ad;
        cout<<"Ekler Kiloyla mi satiliyor (Evet: E/e, Hayir: H/h): "<<endl ;
        cin>>kiloyla;
        if(kiloyla=='E' || kiloyla=='e'){
            cin>>kg;
        }
         else{
        cout<<"Urun adet fiyatini giriniz: "<<endl;
        cin>>adet;
         }
        cout<<"Devam etmek icin bir tusa basin..."<<endl;



}
void Urun::verileriYaz(){
     cout<<ad;
     if(kiloyla=='E'){cout<<kg;}
     else {cout<<adet;}



}

