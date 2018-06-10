#include "Asistan.h"

Asistan::Asistan(){}

ostream& operator<<(ostream& o, Asistan& a){
    o<<setw(10)<<right<<a.getAd()
     <<setw(10)<<right<<a.getSoyad()
     <<setw(10)<<right<<a.getGorev()
     <<setw(10)<<right<<a.getMaas()
     <<setw(10)<<right<<a.getSinif()
     <<setw(10)<<right<<a.getBolum()<<endl;

     return o;
}

istream& operator>>(istream& i, Asistan& a){
    int tmpin;
    string tmpst;

    cout<<"Asistanin bilgilerini giriniz\n";
    cout<<"Ad: ";
    i>>tmpst;
    a.setAd(tmpst);
    cout<<"Soyad: ";
    i>>tmpst;
    a.setSoyad(tmpst);
    cout<<"Sinif: ";
    i>>tmpin;
    a.setSinif(tmpin);
    cout<<"Bolum: ";
    i>>tmpst;
    a.setBolum(tmpst);
    a.setMaas(1500);
    a.setGorev("Asistan");
    cout<<endl;
    return i;
}
