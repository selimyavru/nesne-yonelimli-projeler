#include <iostream>

using namespace std;

#include "Kagit.h"

Kagit kes(const Kagit& kagit);

int main()
{
    Kagit a2(21.0, 29.6);
    cout << "A4'un alani: " << a2.alan() << " cm2" << endl;

    Kagit a4 = kes(a2);
    cout << "A2'nin alani: " << a4.alan() << " cm2" << endl;

    return 0;
}

Kagit kes (const Kagit& kagit) {
    Kagit yeni;

    yeni.en = kagit.en * 2;
    yeni.boy = kagit.boy * 2;

    return yeni;
}

//friend Kagit kes(const Kagit& kagit);
