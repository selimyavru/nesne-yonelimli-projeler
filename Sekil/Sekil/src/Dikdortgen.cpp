#include "Dikdortgen.h"

Dikdortgen::Dikdortgen(double e, double b)
{
    this->en=e;
    this->boy=b;
}

void Dikdortgen::yazdir(){
    if(en==boy){
        ad="Kare";}
    else{
        ad="Dikdortgen";}
    Sekil::yazdir();
    cout << "Seklin alani: " << alan() << endl << "Seklin cevresi: " << cevre() << endl;

}
double Dikdortgen::alan(){
    return (*this).en * (*this).boy;

}
double Dikdortgen::cevre(){
    return ((*this).en + (*this).boy)*2;

}
