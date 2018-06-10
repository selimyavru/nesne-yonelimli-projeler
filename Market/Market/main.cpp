#include <iostream>

using namespace std;

#include "Market.h"
#include "Urun.h"

class Urun;
int main()
{
    Market metro("Metro A.S.");
    Urun *urn;

    urn = new Urun("Eti Cin", 1, 100 , 95);
    metro.urunEkle(*urn);

    urn = new Urun("Ulker Gofret", 1.5, 50, 45);
    metro.urunEkle(*urn);

    urn = new Urun("Albeni", 2, 200, 190);
    metro.urunEkle(*urn);

    metro.hasilatHesapla();
    metro.dokumYazdir();

    return 0;
}
