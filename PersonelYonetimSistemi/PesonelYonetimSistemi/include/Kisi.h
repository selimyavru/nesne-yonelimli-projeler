#ifndef KISI_H
#define KISI_H
#include <iostream>

using namespace std;


class Kisi
{
    public:
        virtual void bilgileriAl();
        virtual void bilgileriYaz();
    protected:
        string ad, soyad;
};

#endif // KISI_H
