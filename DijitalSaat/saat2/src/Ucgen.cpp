#include "Ucgen.h"
#include <cmath>
#include <iostream>
using namespace std;
Ucgen::Ucgen ()
{
}
        void Ucgen::bilgileriAl(){
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        }
        double Ucgen::cevreHesapla(){
            double k1,k2,k3;
            double xfark = abs(x1-x2);
            double yfark = abs(y1-y2);

            k1=sqrt(pow(xfark,2)+pow(yfark,2));

            xfark = abs(x2-x3);
            yfark = abs(y2-y3);

            k2=sqrt(pow(xfark,2)+pow(yfark,2));

            xfark = abs(x3-x1);
            yfark = abs(y3-y1);

            k3=sqrt(pow(xfark,2)+pow(yfark,2));


        return k1+k2+k3;
        }
        double Ucgen::alanHesapla(){
            double alan;
            alan = (abs(((x1*y2)+(x2*y3)+(x3*y1))-((y1*x2)+(y2*x3)+(y3*x1))));

        return alan/2;

        }


