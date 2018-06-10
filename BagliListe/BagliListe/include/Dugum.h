#ifndef DUGUM_H
#define DUGUM_H
#include "Kisi.h"
#include <iostream>

template <class T>
class Dugum
{
public:
    T veri;
    Dugum<T>* onceki;
    Dugum<T>* sonraki;
    Dugum(T v)
    {
        veri=v;
    }
};


#endif // DUGUM_H
