#include "Kisi.h"

ostream& operator<<(ostream& o,const Kisi& k){
    o<<k.tc<<" "<<k.ad<<" "<<k.soyad<<" "<<k.adres<<endl;

    return o;
}

istream& operator>>(istream& i,Kisi& k){
    i>>k.tc>>k.ad>>k.soyad;
    getline(std::cin,k.adres,'\n');

    return i;
}

bool Kisi::operator==(const Kisi& k)const{
    if(tc==k.tc && k.ad==ad && k.soyad==soyad && k.adres==adres)
        return true;

    return false;
}
