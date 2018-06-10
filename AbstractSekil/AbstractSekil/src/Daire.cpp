#include "Daire.h"

Daire::Daire(int rr):Sekil("Daire")
{
    r=rr;
}

double Daire::cevreHesapla(){

    return (*this).r * 2 * 3.14;
}
double Daire::alanHesapla(){

    return (*this).r * (*this).r * 3.14;
}
