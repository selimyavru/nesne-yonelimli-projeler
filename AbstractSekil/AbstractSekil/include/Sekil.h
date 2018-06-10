#ifndef SEKIL_H
#define SEKIL_H
#include <iostream>

using namespace std;

class Sekil
{
    public:
        Sekil(string t);
        friend ostream& operator << (ostream& o, Sekil& a);
        virtual double cevreHesapla()=0;
        virtual double alanHesapla()=0;
    protected:
        string tur;
};

#endif // SEKIL_H
