#ifndef BAGLILISTE_H
#define BAGLILISTE_H
#include <iostream>
#include "Dugum.h"

template <class T>
class BagliListe
{
public:

    Dugum<T>* ilk;
    Dugum<T>* son;

    BagliListe()
    {
        ilk = NULL;
        son = NULL;
    }

   virtual ~BagliListe()
    {

    }

    void ekle (T t)
    {
        if(listeBosMu())
        {
            Dugum<T> *birinci=new Dugum<T>(t);
            ilk=birinci;
            son = birinci;
        }
        else
        {
            Dugum<T>* simdi=new Dugum<T>(t);
            son ->sonraki = simdi;
            simdi -> onceki=son;
            son=simdi;
        }
    }

    void sil (T t)
    {
        Dugum<T>* del;
        del=ilk;

        for(; del!=NULL; del=del->sonraki)
        {
            if(del->veri==t)
            {
                if(del==ilk)
                {
                    del->sonraki->onceki=NULL;
                    ilk=del->sonraki;
                    delete del;
                }
                else if (del==son)
                {
                    del->onceki->sonraki=NULL;
                    son=del->onceki;
                    delete del;
                }
                else
                {
                    del->onceki->sonraki=del->sonraki;
                    del->sonraki->onceki=del->onceki;
                    delete del;
                }
            }

        }
    }
    bool listeBosMu()
    {
        if (ilk == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool dugumVarMi(T t)
    {
        Dugum<T>* simdi=new Dugum<T>(t);
        simdi=ilk;

        while(simdi->sonraki !=NULL)
        {
            if (simdi -> veri==t)
            {
                return true;
            }
            simdi = simdi->sonraki;
        }

        if (simdi -> veri==t)
        {
            return true;
        }
        else
        {
            return false;
        }

    }

    void listele()
    {
        Dugum<T>* del;

        if(listeBosMu())
        {
            cout<< "Liste Bos"<<endl;
        }
        else
        {
            cout<<"Ilk -> "<<ilk->veri<<endl;
            for(del=ilk->sonraki; del!=son; del=del->sonraki)
                cout << del->veri<<endl;
            cout<<"Son -> "<<son->veri<<endl;
        }
    }
};



#endif // BAGLILISTE_H
