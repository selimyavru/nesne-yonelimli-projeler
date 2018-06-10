#include "Market.h"
#include<iomanip>
#include"Urun.h"
using namespace std;

Market::Market()
{

}

Market::Market(string ad)
{
    this->ad=ad;
}
void Market::urunEkle(Urun& urun)
{
    this->urunler.push_back(urun);
}

void Market::hasilatHesapla()
{
    for(vector<Urun>::iterator i=this->urunler.begin();i!=this->urunler.end();i++)
    {
        //Urun u=urunler[i];
        this->gider +=i->fiyat*i->stok;
        this->gelir +=((i->fiyat * 1.2)* (i->satilan));
    }//for
    this->kar=this->gelir - this->gider;
}
void Market::dokumYazdir()
{
    Urun u;
    cout<<left;
    cout<<this->ad<<endl;
    for(int i = 0;i<60;i++)
        cout<<"-";
        cout<<endl;
        cout<<"Urunler:"<<endl;
        for(int i = 0;i<60;i++)
        cout<<"-";
        cout<<endl;
        cout<<setw(15)<<left<<"Ad:"<<setw(15)<<right<<"Fiyat"<<setw(15)<<right<<"Stok"<<setw(15)<<right<<"Satilan"<<endl;
    for(vector<Urun>::iterator i=this->urunler.begin();i!=this->urunler.end();i++)
    {
        cout<<setw(15)<<i->ad<<setw(15)<<i->fiyat<<setw(15)<<i->stok<<setw(15)<<i->satilan<<endl;
    }
    cout<<endl;
    for(int i = 0;i<60;i++)
    cout<<"-";
    cout<<endl;
    cout<<"Toplam Gider"<<gider<<endl;
        cout<<"Toplam Gelir"<<gelir<<endl;
        cout<<"Toplam Kar"<<kar;

}

