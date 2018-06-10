#include "PersonelYonetimSistemi.h"

void PersonelYonetimSistemi::calistir(){
    int secim;
    do{
        menuYaz();
        cin>>secim;
        cout << endl;
        if(secim==1){

            personelEkle();
        }
        else if(secim==2){
            personelSil();
        }
        else if(secim==3){
            personelleriListele();
        }

    }while(secim!=0);
    cout << "Program kapatiliyor...";

}

void PersonelYonetimSistemi::menuYaz(){
    cout << endl << "Personel Yonetim Sistemi" << endl;
    cout << "------------------------" << endl;
    cout << "1. Personel Ekle" << endl;
    cout << "2. Personel Sil" << endl;
    cout << "3. Personelleri Listele" << endl << endl;

    cout << "0. Cikis" << endl;
    cout << "Islem secin: ";

}
void PersonelYonetimSistemi::personelEkle(){
            int s;
            cout << "1. Calisan" << endl;
            cout << "2. Teknisyen" << endl;
            cout << "3. Muhendis" << endl;
            cout << "4. Mudur Yardimcisi" << endl;
            cout << "5. Mudur" << endl;
            cout << "Personel turu secin: " ;
            cin >> s;
    if(s==1){
        Calisan *c = new Calisan;
        c->bilgileriAl();
        personeller.push_back(c);

    }
    else if(s==2){
        Teknisyen *t = new Teknisyen;
        t->bilgileriAl();
        personeller.push_back(t);

    }
    else if(s==3){
        Muhendis *muh = new Muhendis;
        muh->bilgileriAl();
        personeller.push_back(muh);

    }
    else if(s==4){
        MudurYardimcisi *mdy = new MudurYardimcisi;
        mdy->bilgileriAl();
        personeller.push_back(mdy);

    }
    else if(s==5){
        Mudur *md = new Mudur;
        md->bilgileriAl();
        personeller.push_back(md);

    }
}
void PersonelYonetimSistemi::personelleriListele(){
    cout << setw(10) <<right  << "No" << setw(10) << "Ad" << setw(10) << "Soyad" << setw(10) << "Gorev" << setw(10) << "Maas" <<  setw(10) << "Proje" << setw(10) << "Bolum"<< endl;
    cout <<"----------------------------------------------------------------------" << endl;

    for(int i=0;i<personeller.size();i++){
        cout << setw(10) << right << i+1;
        personeller[i]->bilgileriYaz();
    }
}
void PersonelYonetimSistemi::personelSil(){
    int sa;
    personelleriListele();
    cout << endl << "Silmek istediginiz personelin nosunu giriniz: " ;
    cin >> sa;
    personeller.erase (personeller.begin()+sa-1);


}
PersonelYonetimSistemi::~PersonelYonetimSistemi(){


}
