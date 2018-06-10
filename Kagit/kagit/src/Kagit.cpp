#include "Kagit.h"

Kagit::Kagit()
{

}
Kagit::Kagit(double en, double boy){
    this->en = en;
    this->boy = boy;

}
double Kagit::alan(){
    double alan;
    alan = en * boy;

    return alan;
    }


//Kagit::~Kagit()
//{
    //dtor
//}
