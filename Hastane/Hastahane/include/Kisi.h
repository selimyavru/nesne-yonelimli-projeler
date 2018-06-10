#ifndef KİSİ_H
#define KİSİ_H

#include <iostream>

using namespace std;

class Kisi{
    public:
        string getAd();
        void setAd(string );
        string getSoyad();
        void setSoyad(string );

    private:
        string ad,soyad;
};

#endif // KİSİ_H
