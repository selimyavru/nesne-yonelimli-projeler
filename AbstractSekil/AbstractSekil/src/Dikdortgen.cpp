#include "Dikdortgen.h"

Dikdortgen::Dikdortgen(int e, int b):Sekil("Dikdortgen"){
    this->en=e;
    this->boy=b;

}
double Dikdortgen::cevreHesapla(){
    return ((*this).en + (*this).boy)*2;

}
double Dikdortgen::alanHesapla(){
    return (*this).en * (*this).boy;

}
