#include <iostream>
using namespace std;

#include "KarmasikSayi.h"

int main() {
    KarmasikSayi ks1, ks2, ks3, toplam;
    cout << "1. karmasik sayiyi giriniz:" << endl;
    cin >> ks1;
    cout << "2. karmasik sayiyi giriniz:" << endl;
    cin >> ks2;

    cout << "1. karmasik sayi: " << ks1;
    cout << "2. karmasik sayi: " << ks2;

    ks3 = ks2;
    cout << "3. karmasik sayi: " << ks3;

    toplam = ks1 + ks2;
    cout << "Toplam: " << toplam;

    ks1 += ks2;
    cout << "1. karmasik sayi: " << ks1;

    if (ks3 == ks1) cout << "ks3 eşittir ks1" << endl;
    else cout << "ks3 eşittir değildir ks1" << endl;

    if (ks3 == ks2) cout << "ks3 eşittir ks2" << endl;
    else cout << "ks3 eşittir değildir ks2" << endl;

    return 0;
}
