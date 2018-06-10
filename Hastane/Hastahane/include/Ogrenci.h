#ifndef OGRENCİ_H
#define OGRENCİ_H

#include <iostream>

using namespace std;

class Ogrenci{
    public:
        int getSinif();
        void setSinif(int );
        string getBolum();
        void setBolum(string );

    private:
        int sinif;
        string bolum;
};

#endif // OGRENCİ_H
