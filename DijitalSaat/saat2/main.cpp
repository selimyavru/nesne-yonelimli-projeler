#include <iostream>
#include <iomanip>
#include "Ucgen.h"

using namespace std;

int main()
{
    Ucgen u;
    cout << "Ucgenin kose noktalari koordinatlarini giriniz: " << endl;
    u.bilgileriAl();

    cout << fixed << setprecision(2);
    cout << "Ucgenin cevresi: " << u.cevreHesapla() << endl;
    cout << "Ucgenin alani: " << u.alanHesapla() << endl;


    return 0;


}
