// SORU #3 UCGEN
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
struct ucgen{
 double x1,y1,x2,y2,x3,y3,k1,k2,k3;

};

void bilgileri_al(struct ucgen *u){

    cin >> u->x1 >> u->y1 >> u->x2 >> u->y2 >> u->x3 >> u->y3;


}

float cevre_hesapla(struct ucgen *u){

    double x_fark = abs(u->x1-u->x2);
    double y_fark = abs(u->y1-u->y2);

    u->k1=sqrt(pow(x_fark,2)+pow(y_fark,2));

    x_fark = abs(u->x2-u->x3);
    y_fark = abs(u->y2-u->y3);

    u->k2=sqrt(pow(x_fark,2)+pow(y_fark,2));

    x_fark = abs(u->x3-u->x1);
    y_fark = abs(u->y3-u->y1);

    u->k3=sqrt(pow(x_fark,2)+pow(y_fark,2));


    return u->k1+u->k2+u->k3;

}

float alan_hesapla(struct ucgen *u){
    double alan;
    alan = (abs(((u->x1*u->y2)+(u->x2*u->y3)+(u->x3*u->y1))-((u->y1*u->x2)+(u->y2*u->x3)+(u->y3*u->x1))));

    return alan/2;

}

int main()
{
    struct ucgen u;
    bilgileri_al(&u);
    cout << fixed << setprecision(2);
    cout << cevre_hesapla(&u) << endl;
    cout << alan_hesapla(&u) << endl;
    return 0;
}
