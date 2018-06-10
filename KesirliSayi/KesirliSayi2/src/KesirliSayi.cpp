#include "KesirliSayi.h"	//BİR TEŞEKKÜR YETER :) ERDEM ŞAHİN

KesirliSayi::KesirliSayi():pay(0), payda(1){}           //STANDART YAPICI

//BAZEN THİS->PAY YERİNE DİREK PAY YAZMAK DAHA KOLAYA KAÇAR
//AMA AŞAĞIDAKİ YAPICIDA FONKSİYONDA AYNI İSİMDE BİR DEĞİŞKEN DAHA VAR
//NESNENİN PAY VE PAYIYLA, BUNLARIN KARIŞMAMASI AMACIYLA THİS KULLANIN
                            //*         //*
KesirliSayi::KesirliSayi(int pay, int payda){
    if(payda<0){                                        //EĞER Kİ PAYDA SIFIRDAN KÜÇÜKSE PAYDA VE PAYI (-) İLE ÇARPARIZ
        this->pay=-pay;                                 //BÖYLECE PAYDA ASLA NEGATİF OLAMAZ VE KESRİN DEĞERİ DEĞİŞMEZ
        this->payda=-payda;                             //ÖRN: PAY -3 PAYDA -4 = 3/4 , PAY 3 PAYDA -4 = -3/4 GİBİ
    }
    else{
        this->pay=pay;                  //STANDART PAY VE PAYDA ATAMA (ELSE İÇİNDE OLDUĞUNDA DİKKAT EDELİM)
        this->payda=payda;
    }
    sadelestir();     //İLK DEĞER VERİLDİĞİ ANDA KESİRİ SADELEŞTİRİR
}

KesirliSayi::KesirliSayi(int tamsayi):pay(tamsayi), payda(1){}          //NESNENİN İLK DEĞERİ 1 ADET SAYI VERİLMİŞSE
                                                                        //PAY=SAYI , PAYDA=1 OLUR
void KesirliSayi::paydaEsitle(KesirliSayi& ks){
    if(this->payda!=ks.payda){                          //EĞER Kİ PAYDALAR EŞİTSE İF SAYESİNDE GEREKSİZ İŞLEM YAPMAYIZ
        pay*=ks.payda;                                  //EŞİT DEĞİLSE KESİRLERİN PAY VE PAYDALARINI BİRBİRLERİNİN
        ks.pay*=payda;                                  //PAYDALARİYLA ÇARPARİZ
        payda = ks.payda = payda*ks.payda;
    }
}

void KesirliSayi::sadelestir(){
    int i;                                      //EBOB HESAPLAMA
    pay<payda ? i=pay : i=payda;
    if(i<0)
        i=-i;                                   //ÖRNEK PAY=15 PAYDA=9 DİYELİM i=9 OLUR
    while(1<=i){                                //O HALDE 9 DAN 1 E KADAR OLAN TÜM SAYILARI
        if(pay%i==0 && payda%i==0){             //PAY VE PAYDA YA BÖLELİM. PAY VE(&&) PAYDANIN BÖLÜMÜ 0 KALANINI VEREN
            pay/=i;                             //İLK SAYI EBOB OLUR. BU DURUMDA İF'İN İÇİ ÇALIŞIR VE
            payda/=i;                           //PAY VE PAYDA EBOB'A (YANİ i) BÖLÜNÜR BÖYLECE KESİR SADELEŞİR
            break;                              //BREAK İLE DE DÖNGÜDEN ÇIKILIR.
        }                                       //*NOT: BÖYLECE 1'E KADAR OLAN TÜM SAYILARI KONTROL ETMEMİŞ OLURUZ
        --i;                                    //*PERFORMANS İÇİN
    }
}

KesirliSayi& KesirliSayi::operator=(KesirliSayi ks){        //BİR NESNE BİR BAŞKA NESNEYE ATANIRSA (KESİR1=KESİR2 GİBİ)
    this->pay = ks.pay;                                     //KESİR2 NİN PAY VE PAYDASINI KESİR1 İN PAY VE PAYDASINA ATAR
    this->payda = ks.payda;

    return *this;           //return (*this) NESNENİN ADRESİNİ GÖNDERİR
}

KesirliSayi& KesirliSayi::operator=(int tamsayi){           //BİR NESNEYE KESİR1=4 GİBİ BİR ATAMA YAPILIRSA
    pay=tamsayi;                                            //O HALDE KESİR1 İN PAYINI 4 PAYDASINI DİREK 1 YAPAR
    payda=1;
}

//AŞAĞIDAKİ AŞIRI YÜKLENMİŞ OPERATÖRLER DAHA FARKLI ÇALIŞTIRILABİLİR VE KODUN DAHA HIZLI ÇALIŞMA ŞEKLİNE GETİRİLEBİLİR
//BU SADECE STANDART BİR ÖRNEKTİR

KesirliSayi KesirliSayi::operator+(KesirliSayi ks){
    paydaEsitle(ks);          //DİKKAT!!                   |   ÖNCELİKLE İKİ KESİR TOPLAMADAN ÖNCE PAYDALARI EŞİTLERİZ
    ks.pay=pay+ks.pay;        //K1 VE K2 NESNİ İÇİN        |   SONRA PAYLARI TOPLARIZ. (PAYDALAR ZATEN EŞİTLENDİ)
    ks.sadelestir();          //K1+K2 DURUMUNDA            |   DAHA SONRA TEKRAR SADELEŞTİRİRİZ. (DEĞERLERİ DEĞİŞMEZ)
    sadelestir();             //ks=K2 OLUR.                |   KS FONKSİYONDAN ÇIKINCA BELLEKTEN SİLİNİR.
    return ks;                //K1 E THİS İLE VEYA DİREK   |   SADELEŞTİRMEMİZİN NEDENİ KS NİN DEĞERİNİ GERİ DÖNDÜRDÜĞÜMÜZDEN
}                             //ULAŞABİLİRİZ               |   KAYNAKLANIR. YANİ SADELEŞTİRİLMİŞ OLARAK TOPLAMI GÖNDERİRİZ
                              //AŞAĞIYA DİKKAT EDELİM      |   YANİ TOPLAMI KS YE KAYDEDİP GÖNDERDİK.
KesirliSayi KesirliSayi::operator-(KesirliSayi ks){
    paydaEsitle(ks);
    ks.pay=this->pay-ks.pay;  //BENZER ÖRNEK                          SADECE ÇIKARMA YAPTIK, MANTIK AYNI
    ks.sadelestir();          //THİS KULLANDIR BİR FARK YOK
    sadelestir();
    return ks;
}

KesirliSayi KesirliSayi::operator*(KesirliSayi ks){
    ks.pay*=pay;
    ks.payda*=payda;
    ks.sadelestir();                               //BURDA sadelestir(); KULLANMAMAMIZIN NEDENİ 1. NESNENİN DEĞERİNDE
    return ks;                                     //HERHANGİ BİR DEĞİŞİKLİK YAPMAMAMIZDANDIR.
}                                                  //YUKARDA paydaEsitle(ks) İLE 2 NESNEDE DE DEĞİŞİKLİK YAPMIŞTIK

KesirliSayi KesirliSayi::operator/(KesirliSayi ks){
    int tmp;
    tmp=ks.payda*pay;                              //1
    ks.payda=ks.pay*payda;                         //2
    ks.pay=tmp;                                    //3
    ks.sadelestir();                               //tmp KULLANMAMIZIN NEDENİ 1. İŞLEMDE KS NİN PAYINI DEĞİŞTİRDİK
    return ks;                                     //2. İŞLEMDE DE BU PAYI KULLANAMAYIZ ÇÜNKÜ İLK DEĞERİMİZ LAZIM
}                                                  //PAYLA İŞİMİZ BİTTİKTEN SONRA 3. DEYİMLE PAYIMIZI DA ATADIK

KesirliSayi& KesirliSayi::operator+=(KesirliSayi ks){
    return (*this)=(*this)+ks;                      //YUKARIDAKİ OPERATÖR AŞIRI YÜKLENMELERİNİ KULLANARAK BU
}                                                   //OPERATÖRLERİ DE AŞIRI YÜKLEYEBİLİRİZ
                                                    //*this İLE DE NESNENİN REFERANSINI GERİ DÖNDÜRÜRÜZ
KesirliSayi& KesirliSayi::operator-=(KesirliSayi ks){
    return (*this)=(*this)-ks;                      //YANİ ASLINDA ANLAMA KOLAYLIĞI AÇISINDAN
}                                                   //NESNEYİ GERİ DÖNDÜRDÜK DİYELİM
                                                    //ÜSTTEKİ OPERATÖR YÜKLEMELERİ OLMAZSA BU ŞEKİLDE YAPAMAZDIK
KesirliSayi& KesirliSayi::operator*=(KesirliSayi ks){
    return (*this)=(*this)*ks;                      //NOT: NESNEYE *this İLE ULAŞABİLDİĞİMİZİ UNUTMAYIN
}

KesirliSayi& KesirliSayi::operator/=(KesirliSayi ks){
    return (*this)=(*this)/ks;
}

KesirliSayi& KesirliSayi::operator++(){         // ++k1 ŞEKLİNDE YAZIM İÇİNDİR. ARTTIRIP DİREK NESNEYİ REFERANS DÖNDÜRÜR
    pay+=payda;                                 // KESİRE +1 EKLİYORUZ.
    return (*this);                             //AŞAĞIDAKİ İŞLEMDE AYNI AMA DURUM BİRAZ FARKLI
}

KesirliSayi KesirliSayi::operator++(int i){     // k1++ ŞEKLİNDE YAZIM İÇİNDİR. int i DERLEYİCİ İÇİN YAZILIR.
    KesirliSayi result(*this);                  // result NESNENİN KOPYASIDIR.
    pay+=payda;                                 // NESNEMİZİN DEĞERİNİ BU SATIRDA 1 ARTTIRIYORUZ FAKAT
    return result;                              // BU SATIRDA GÖRÜLDÜĞÜ ÜZERE İLK HALİNİ GERİ DÖNDÜRÜYORUZ
}                                               // YANİ ARTMAMIŞ HALİNİ!

bool KesirliSayi::operator==(KesirliSayi ks){   //PAYDA EŞİTLEMEYE GEREK YOK EŞİT DURUMDAKİ PAYLARI KARŞILAŞTIRMA HEPSİ AYNI
    return (pay*ks.payda)==(ks.pay*payda);      //this-> MANTIĞI İÇİN ARALARDA KULLANIMI VAR YAZILMASA DA OLUR.
}

bool KesirliSayi::operator!=(KesirliSayi ks){
    return (this->pay*ks.payda)!=(ks.pay*payda);
}

bool KesirliSayi::operator<(KesirliSayi ks){
    return (pay*ks.payda)<(ks.pay*this->payda);
}

bool KesirliSayi::operator>(KesirliSayi ks){
    return (this->pay*ks.payda)>(ks.pay*this->payda);
}

bool KesirliSayi::operator<=(KesirliSayi ks){
    return (pay*ks.payda)<=(ks.pay*payda);
}

bool KesirliSayi::operator>=(KesirliSayi ks){
    return (pay*ks.payda)>=(ks.pay*payda);
}

istream& operator>>(istream& ist, KesirliSayi& ks){     //AKIŞ EKLEME OPERATÖRÜNÜ AŞIRI YÜKLEDİK
    ist>>ks.pay>>ks.payda;                              //KULLANICIDAN cin>>kesir1 ŞEKLİNDE PAY VE PAYDAYI ALABİLİYORUZ
    if(ks.payda<0)
        ks.pay=-ks.pay, ks.payda=-ks.payda;             //YAPICI ÇALIŞMADIĞI İÇİN NEGATİF PAYDA KONTROLÜ YAPIYORUZ
    ks.sadelestir();                                    //ALDIĞIMIZ PAY VE PAYDAYI SADELEŞTİRME BU SATIRDADIR.
    return ist;
}

ostream& operator<<(ostream& ost, const KesirliSayi& ks){
    ost<<ks.pay<<"/"<<ks.payda;                         //AKIŞ ÇIKARMA OPERATÖRÜ AŞIRI YÜKLEMESİ...
    return ost;
}
