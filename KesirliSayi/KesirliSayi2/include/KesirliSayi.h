#ifndef KESİRLİSAYİ_H
#define KESİRLİSAYİ_H

#include <iostream>

using namespace std;

class KesirliSayi{
    friend istream& operator>>(istream&, KesirliSayi& );
    friend ostream& operator<<(ostream&, const KesirliSayi& );      //CONST A DİKKAT EDELİM
    friend bool test(KesirliSayi, KesirliSayi );                    //EKRAN ÇIKTISI ALIRKEN NESNEDE
                                                                    //ZATEN BİR DEĞİŞİKLİK YAPMAYACAĞIZ
    public:
        KesirliSayi();
        KesirliSayi(int, int );
        KesirliSayi(int );
        KesirliSayi& operator=(KesirliSayi );
        KesirliSayi& operator=(int );
        KesirliSayi operator+(KesirliSayi );                //REFERANS OPERATÖRÜ YOK
        KesirliSayi operator-(KesirliSayi );                //O HALDE NESNENİN REFERANSI DÖNMEYECEK
        KesirliSayi operator*(KesirliSayi );
        KesirliSayi operator/(KesirliSayi );
        KesirliSayi& operator+=(KesirliSayi );              // & REFERANS OPERATÖRÜNE DİKKAT EDİN
        KesirliSayi& operator-=(KesirliSayi );              //BURDA NESNEYE BİR ATAMA OLDUĞUNU ANLAYABİLİRİZ
        KesirliSayi& operator*=(KesirliSayi );              //YANİ NESNENİN BİR REFERANSINI GERİ DÖNDÜRÜYOR
        KesirliSayi& operator/=(KesirliSayi );
        KesirliSayi& operator++();
        KesirliSayi operator++(int );
        bool operator==(KesirliSayi );
        bool operator!=(KesirliSayi );
        bool operator<(KesirliSayi );
        bool operator>(KesirliSayi );
        bool operator<=(KesirliSayi );
        bool operator>=(KesirliSayi );

    private:
        void paydaEsitle(KesirliSayi& );            //ERİŞİM VE HİZMET FONKSİYONLARI GENELDE PRİVATE TANIMLANIR
        void sadelestir();                          //NEDENİ İSE BU FONKSİYONLAR SADECE PUBLİC FONKSİYONLARA HİZMET EDER
                                                    //YANİ ASLINDA BİR ARACIDIR DİYEBİLİRİZ
        int pay, payda;
};

#endif // KESİRLİSAYİ_H
