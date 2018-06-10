#include "Siparis.h"
#include <iostream>
#include <Urun.h>
using namespace std;

Siparis::Siparis()
{
    this->tutar=0;
}
void Siparis::urunEkle(Urun urn){
    int i=0;
    this->urunler[i]=urn;
    i++;



}
void Siparis::tutarHesapla(){
    for(int k=0;k<urunler.size();k++){
        if(urunler[k].kiloyla=='E')
            tutar=urunler[k].kg*urunler[k].fiyat;
        else
            tutar=urunler[k].adet*urunler[k].fiyat;


    }


}
void Siparis::verileriYaz(){
    cout<<"Urun Adi:"<<"\t"<<"Kg/Adet"<<"\t"<<"Tutar"<<endl;
    for(int i=0;i<urunler.size();i++){
        cout<<urunler[i].ad<<"\t";
        if(urunler[i].kiloyla=='E')
            cout<<urunler[i].kg<<"\t"<<tutar<<endl;
        else
            cout<<urunler[i].adet<<"\t"<<tutar<<endl;
    }

}
