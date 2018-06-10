#ifndef KISI_H
#define KISI_H
#include <string>
#include <iostream>
using namespace std;


class Kisi
{
public:

    Kisi ();
    Kisi (string a,string s);
    bool operator == (const Kisi& k);
    friend ostream& operator << (ostream& o,const Kisi& k );

private:

    string ad,soyad;

};

#endif // KISI_H
