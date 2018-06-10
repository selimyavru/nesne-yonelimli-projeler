#include <iostream>
#include <iomanip>
using namespace std;


#include "Sekil.h"
#include "Ucgen.h"
#include "DikUcgen.h"
#include "Daire.h"
#include "Dikdortgen.h"
#include "Kare.h"

int main()
{
    Sekil *sekiller[5];

    sekiller[0] = new Ucgen (6, 6, 6);
    sekiller[1] = new DikUcgen (5, 12);
    sekiller[2] = new Daire (9);
    sekiller[3] = new Dikdortgen (4, 7);
    sekiller[4] = new Kare (10);

    cout << setprecision(2) << fixed;
    cout << setw(10) << "Tur";
    cout << setw(10) << "Cevre";
    cout << setw(10) << "Alan" << endl;

    cout << setfill('-');
    cout << setw(30) << "" << endl;
    cout << setfill(' ');

    for(int i = 0; i < 5; ++i)
        cout << *sekiller[i] << endl;
    return 0;
}
