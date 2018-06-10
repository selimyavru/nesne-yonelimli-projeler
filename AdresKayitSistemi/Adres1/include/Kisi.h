#ifndef KISI_H
#define KISI_H


#include <iostream>
#include <string>

using namespace std;

class Kisi{
    friend ostream& operator<<(ostream& ,const Kisi& );
    friend istream& operator>>(istream& ,Kisi& );

    public:
        int tc;
        string ad,soyad,adres;

        bool operator==(const Kisi& )const;

    private:

};


#endif // KISI_H
