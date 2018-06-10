#include "Kisi.h"

Kisi::Kisi() {}

Kisi::Kisi(string a,string s)
{
    this->ad = a;
    this->soyad = s;
}

bool Kisi::operator == (const Kisi& k)
{
    if(ad == k.ad && soyad == k.soyad)
    {
        return true ;
    }
    else
    {
        return false;
    }
}

ostream& operator <<(ostream& o,const Kisi& k)
{
    o << k.ad << " " << k.soyad;
    return o;
}
