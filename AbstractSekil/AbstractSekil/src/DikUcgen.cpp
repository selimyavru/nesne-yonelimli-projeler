#include "DikUcgen.h"

DikUcgen::DikUcgen(int k1, int k2):Ucgen(k1,k2,0){
    tur="DikUcgen";

}
double DikUcgen::cevreHesapla(){
    double a;
    a = sqrt((kenar1*kenar1)+(kenar2*kenar2));
    return kenar1+kenar2+a;
}
double DikUcgen::alanHesapla(){
    return (kenar1*kenar2)/2;

}
