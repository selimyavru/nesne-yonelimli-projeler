#include <iostream>
using namespace std;

#ifndef KARMASIKSAYI_H
#define KARMASIKSAYI_H


class KarmasikSayi
{
    public:
        KarmasikSayi();
        KarmasikSayi& operator =(KarmasikSayi ks);
        KarmasikSayi operator +(KarmasikSayi ks);
        KarmasikSayi& operator +=(KarmasikSayi ks);
        bool operator ==(KarmasikSayi ks);
        friend istream& operator >>(istream& ist, KarmasikSayi& ks);
        friend ostream& operator <<(ostream& ost, const KarmasikSayi& ks);
    private:
        double gercel;
        double sanal;
};

#endif // KARMASIKSAYI_H
