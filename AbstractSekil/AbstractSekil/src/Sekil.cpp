#include "Sekil.h"
#include <iomanip>
Sekil::Sekil(string t){
    tur = t;

}
ostream& operator << (ostream& o, Sekil& a){
    o << setw(10) << right << a.tur << setw(10)<< a.cevreHesapla() <<setw(10) << a.alanHesapla();

}
/*
double Sekil::cevreHesapla(){


}
double Sekil::alanHesapla(){


}
*/
