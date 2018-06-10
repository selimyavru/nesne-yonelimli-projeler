#include "Doktor.h"

Doktor::Doktor(){}

ostream& operator<<(ostream& o, Doktor& d){
    o<<setw(10)<<right<<d.getAd()
     <<setw(10)<<right<<d.getSoyad()
     <<setw(10)<<right<<d.getGorev()
     <<setw(10)<<right<<d.getMaas()<<endl;

    return o;
}

istream& operator>>(istream& i, Doktor& d){
    cout<<"Doktorun bilgilerini giriniz\n";

    string tmpst;

    cout<<"Ad: ";
    i>>tmpst;
    d.setAd(tmpst);
    cout<<"Soyad: ";
    i>>tmpst;
    d.setSoyad(tmpst);
    d.setGorev("Doktor");
    d.setMaas(4000);
    cout<<endl;
    return i;
}
