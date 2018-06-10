#include "BasHekim.h"

BasHekim::BasHekim(){}

ostream& operator<<(ostream& o, BasHekim& b){
    o<<setw(10)<<right<<b.getAd()
     <<setw(10)<<right<<b.getSoyad()
     <<setw(10)<<right<<b.getGorev()
     <<setw(10)<<right<<b.getMaas()<<endl;

    return o;
}

istream& operator>>(istream& i, BasHekim& b){
    cout<<"Bas Hekimin Bilgilerini Giriniz\n";

    string tmpst;

    cout<<"Ad: ";
    i>>tmpst;
    b.setAd(tmpst);
    cout<<"Soyad: ";
    i>>tmpst;
    b.setSoyad(tmpst);
    b.setGorev("Bas Hekim");
    b.Calisan::setMaas(5000);
    cout<<endl;
    return i;
}
