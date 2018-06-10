#include "Ucgen.h"

Ucgen::Ucgen(int k1, int k2, int k3):Sekil("Ucgen"){
    this->kenar1=k1;
    this->kenar2=k2;
    this->kenar3=k3;


}
double Ucgen::cevreHesapla(){
    return (*this).kenar1 + (*this).kenar2 + (*this).kenar3;

}
double Ucgen::alanHesapla(){
    double u,a;
    u=cevreHesapla();
    u/=2;
    a=sqrt(u*(u-(*this).kenar1)*(u-(*this).kenar2)*(u-(*this).kenar3));
    return a;

}
