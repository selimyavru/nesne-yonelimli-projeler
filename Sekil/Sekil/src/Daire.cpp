#include "Daire.h"

Daire::Daire(double yc)
{
    this->yaricap=yc;

}

void Daire::yazdir(){
    ad="Daire";
    Sekil::yazdir();
    cout << "Seklin alani: " << alan() << endl << "Seklin cevresi: " << cevre() << endl;

}
double Daire::alan(){
    return (*this).yaricap * (*this).yaricap * 3.14;

}
double Daire::cevre(){
    return (*this).yaricap * 2 * 3.14;

}
