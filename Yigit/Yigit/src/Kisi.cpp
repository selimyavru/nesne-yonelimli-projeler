#include "Kisi.h"

Kisi::Kisi(string a, string s)
{
    ad=a;
    soyad=s;
}

ostream& operator << (ostream& o, const Kisi& k)
{
    o << k.ad << " " << k.soyad;
    return o;
}
