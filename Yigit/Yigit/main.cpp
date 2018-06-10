#include <iostream>
using namespace std;

#include "Yigit.h"
#include "Kisi.h"

int main()
{
    try{
    Yigit<int> sayilar;
    Yigit<Kisi> kisiler;

    sayilar.push(1);
    sayilar.push(2);
    sayilar.push(3);
    cout << sayilar.top() << endl;
    for(int i=0; i<3; ++i)
        cout << sayilar.pop() << endl;

    kisiler.push(Kisi("Ad1", "Soyad1"));
    kisiler.push(Kisi("Ad2", "Soyad2"));
    kisiler.push(Kisi("Ad3", "Soyad3"));
    cout << kisiler.top() << endl;
    while (true)
        cout << kisiler.pop() << endl;
    return 0;

}catch (exception const& ex){
    cerr << "Hata: " << ex.what() << endl;
    return -1;
}
}
