#include <iostream>
#include <sstream>
#include <string>
using namespace std;

#include "Kisi.h"
#include "BagliListe.h"
template class Dugum<Kisi>;


int main()
{
    string ad, soyad;
    stringstream ss;
    Kisi k;
    BagliListe<Kisi> *liste = new BagliListe<Kisi>();

    cout << "Listele 1" << endl;
    cout << "---------" << endl;
    liste->listele();
    cout << endl;

    for (int i=1; i<10; ++i){
        ss.str("");
        ss << "Ad" << i;
        ad = ss.str();

        ss.str("");
        ss << "Soyad" << i;
        soyad = ss.str();

        liste->ekle(Kisi(ad, soyad));
    }

    cout << "Listele 2" << endl;
    cout << "---------" << endl;
    liste->listele();
    cout << endl;

    k = Kisi("Ad1", "Soyad1");
    if(liste->dugumVarMi(k)){
        cout << k << " var" << endl;
    }
    else{
        cout << k <<" yok" << endl;
    }

    k = Kisi("Deli", "Veli");
    if(liste->dugumVarMi(k)){
        cout << k << " var" << endl;
    }
    else{
        cout << k <<" yok" << endl;
    }
    cout << endl;

    liste->sil(Kisi("Ad1", "Soyad1"));
    liste->sil(Kisi("Ad4", "Soyad4"));
    liste->sil(Kisi("Ad9", "Soyad9"));

    cout << "Listele 3" << endl;
    cout << "---------" << endl;
    liste->listele();
    cout << endl;

    return 0;
}
