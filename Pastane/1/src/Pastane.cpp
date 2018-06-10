#include "Pastane.h"
#include <iostream>
#include <Urun.h>
#include <Siparis.h>
#include <vector>
using namespace std;

Pastane::Pastane(string ad)
{
    this->ad=ad;
    cout<<this->ad<<endl;
}
void Pastane::anaMenuYaz(){
    //cout<<this->ad<<endl;
    cout<<"1.Yeni Urun"<<endl<<"2.Yeni Siparis"<<endl<<"3.Urunleri Listele"<<endl<<"4.Siparisleri Listele"<<endl<<"0.Cikis"<<endl;"Yapmak istediginiz islemi seciniz:";
}
bool Pastane::urunVarMi(int barkod){
    for(int i=0;i<urunler.size();i++)
        if(this->urunler[i].barkod==urunler[i].barkod)
            return true;
        else
            return false;
}
Urun Pastane::urunBul(int barkod){
    for(int i=0;i<urunler.size();i++)
    if(this->urunler[i].barkod==urunler[i].barkod){

    }

}
void Pastane::yeniUrun(){
    int k =0;
    urunler[k].verileriAl();
    k++;



}
void Pastane::yeniSiparis()
{


    for(int i=0;i<urunler.size();i++){
        siparisler[i].tutarHesapla();

    }

    for(int j=0;j<urunler.size();j++)
        siparisler[j].verileriYaz();



}
void Pastane::urunleriListele(){

}
void Pastane::siparisleriListele(){

}
void Pastane::calistir(){
    int islem;
    do{
        anaMenuYaz();
        cin>>islem;
    if(islem==1){
        yeniUrun();
    }
    else if(islem==3){
        urunleriListele();
    }
    else if(islem==2){
            yeniSiparis();}
    else if(islem==4){
            siparisleriListele();
        }
    }while(islem !=0);



}
