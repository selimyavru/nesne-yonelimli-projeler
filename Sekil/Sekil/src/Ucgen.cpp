#include "Ucgen.h"

Ucgen::Ucgen(double k1, double k2, double k3){
    this->kenar1=k1;
    this->kenar2=k2;
    this->kenar3=k3;

}
void Ucgen::yazdir(){
    ad="Ucgen";
    Sekil::yazdir();
    cout << "Seklin alani: " << alan() << endl << "Seklin cevresi: " << cevre() << endl;

}
double Ucgen::alan(){
    int u,a;
    u=cevre();
    u/=2;
    a=sqrt(u*(u-(*this).kenar1)*(u-(*this).kenar2)*(u-(*this).kenar3));
    return a;

}
double Ucgen::cevre(){
    return (*this).kenar1 + (*this).kenar2 + (*this).kenar3;

}
