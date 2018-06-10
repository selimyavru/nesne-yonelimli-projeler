#ifndef KISI_H
#define KISI_H

#include <iostream>
#include <string>
using namespace std;

class Kisi
{
    public:
        Kisi(string a, string s);
        friend ostream& operator << (ostream& o, const Kisi& k);

    private:
        string ad;
        string soyad;
};

#endif // KISI_H
