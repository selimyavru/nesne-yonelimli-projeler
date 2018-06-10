#include "Hastane.h"

void Hastane::calistir(){
    int secim;
    do{
        menuYaz();
        cin>>secim;
        if(secim==1)
            doktorEkle();
        else if(secim==2)
            doktorlariListele();
        else if(secim==3)
            asistanEkle();
        else if(secim==4)
            asistanlariListele();
        else if(secim==5)
            basHekimAta();
        else if(secim==6)
            basHekimYazdir();

    }while(secim!=0);

    cout<<"Program kapatiliyor..."<<endl;
}

void Hastane::menuYaz(){
    cout<<"Hastane Yönetim Sistemi\n"
        <<"-----------------------\n"
        <<"1. Doktor Ekle\n"
        <<"2. Doktorlari Listele\n"
        <<"3. Asistan Ekle\n"
        <<"4. Asistanlari Listele\n"
        <<"5. Bas Hekim Ata\n"
        <<"6. Bas Hekim Yazdir\n\n"
        <<"0. Cikis\n"
        <<"Islem seciniz: ";
}

void Hastane::doktorEkle(){
    Doktor d;
    cin>>d;
    doktorlar.push_back(d);
}

void Hastane::doktorlariListele(){
    cout<<setw(10)<<right<<"Ad"
        <<setw(10)<<right<<"Soyad"
        <<setw(10)<<right<<"Gorev"
        <<setw(10)<<right<<"Maas"<<endl;
    cout<<"----------------------------------------"<<endl;
    for(int i=0;i<doktorlar.size();i++)
        cout<<doktorlar[i];
    cout<<endl;
}

void Hastane::asistanEkle(){
    Asistan a;
    cin>>a;
    asistanlar.push_back(a);
}

void Hastane::asistanlariListele(){
    cout<<setw(10)<<right<<"Ad"
        <<setw(10)<<right<<"Soyad"
        <<setw(10)<<right<<"Gorev"
        <<setw(10)<<right<<"Maas"
        <<setw(10)<<right<<"Sinif"
        <<setw(10)<<right<<"Gno"<<endl;
    cout<<"------------------------------------------------------------"<<endl;
    for(int i=0;i<asistanlar.size();i++)
        cout<<asistanlar[i];
    cout<<endl;
}

void Hastane::basHekimAta(){
    cin>>basHekim;
}

void Hastane::basHekimYazdir(){
    cout<<setw(10)<<right<<"Ad"
        <<setw(10)<<right<<"Soyad"
        <<setw(10)<<right<<"Gorev"
        <<setw(10)<<right<<"Maas"<<endl;
    cout<<"----------------------------------------"<<endl;
    cout<<basHekim<<endl;
}
