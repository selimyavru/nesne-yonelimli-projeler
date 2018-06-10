#include "AdresKayitSistemi.h"

void AdresKayitSistemi::menuYaz(){
    cout<<"Adres Kayit Sistemi\n"
        <<"-------------------\n"
        <<"1. Kisi Ekle\n"
        <<"2. Kisi Sil\n"
        <<"3. Kisileri Listele\n"
        <<"4. Adres Degisikligi\n"
        <<"5. Dosyaya Kaydet\n"
        <<"6. Dosyadan Oku\n\n"
        <<"0. Cikis\n"
        <<"Islem seciniz: ";


}

void AdresKayitSistemi::calistir(){
    int secim;

    do{
        menuYaz();
        cin>>secim;
        cout<<endl;

        if(secim==1)
            kisiEkle();
        else if(secim==2)
            kisiSil();
        else if(secim==3)
            kisileriListele();
        else if(secim==4)
            adresDegistir();
        else if(secim==5)
            dosyayaKaydet();
        else if(secim==6)
            dosyadanOku();

    }while(secim!=0);

    cout<<"\nProgram kapatiliyor..."<<endl;
}

void AdresKayitSistemi::kisiEkle(){
    cout<<"Kisi bilgilerini giriniz (TC, Ad, Soyad, Adres):"<<endl;
    Kisi k;
    cin>>k;
    kisiler.push_back(k);
    cout<<"Kisi eklendi" << endl << endl;
}

void AdresKayitSistemi::kisileriListele(){
    cout<<"Kisiler" << endl <<"--------"<<endl;

    for(int i=0;i<kisiler.size();i++)
        cout<<i+1<<". "<<kisiler[i];

    cout<<endl;
}

void AdresKayitSistemi::kisiSil(){
    cout<<"Silmek istediginiz kisinin TC nosunu giriniz: ";
    int tcno;
    cin>>tcno;

    for(int i=0;i<kisiler.size();i++)
        if(tcno==kisiler[i].tc)
            kisiler.erase(kisiler.begin()+i);
    cout<<"Kisi silindi." << endl << endl;
}

void AdresKayitSistemi::dosyadanOku(){
    char dosya_adi[60];
    cout<<"Dosya adi giriniz: ";
    cin>>dosya_adi;
    ifstream dosyaOku(dosya_adi,ios::out);

    Kisi tmp;

    while(!dosyaOku.eof()){
        dosyaOku>>tmp.tc>>tmp.ad>>tmp.soyad;
        getline(dosyaOku,tmp.adres,'\n');

        if(!dosyaOku.eof())
            kisiler.push_back(tmp);
    }

    dosyaOku.close();
    cout<<endl;
}

void AdresKayitSistemi::dosyayaKaydet(){
    char dAdi[60];
    cout<<"Dosya adi giriniz: ";
    cin>>dAdi;
    ofstream dosyaYaz(dAdi,ios::out);

    for(int i=0;i<kisiler.size();i++)
        dosyaYaz<<kisiler[i].tc<<" "<<kisiler[i].ad<<" "<<kisiler[i].soyad<<" "<<kisiler[i].adres<<"\n";

    dosyaYaz.close();
    cout<<endl;
}

void AdresKayitSistemi::adresDegistir(){
    cout<<"Adresini degistirmek istediginiz kisinin TC nosunu giriniz: ";
    int tc1;
    cin>>tc1;

    for(int i=0;i<kisiler.size();i++)
        if(tc1==kisiler[i].tc){
            cout<<"Yeni adres giriniz: ";
            cin.ignore();
            getline(std::cin,kisiler[i].adres,'\n');
        }
        cout << "Adres degistirildi." << endl;

    cout<<endl;
}
