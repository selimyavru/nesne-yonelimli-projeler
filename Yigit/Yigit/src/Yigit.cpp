#include "Yigit.h"
#include "Kisi.h"

template <class T>
void Yigit<T>::push(T t){
    veriler.push_back(t);
}

template <class T>
T Yigit<T>::pop(){
    if(veriler.empty()){
        throw out_of_range("Yigit bos");
    }
    T t = veriler.back();
    veriler.pop_back();
    return t;
}

template <class T>
T Yigit<T>::top() const {
    if(veriler.empty()){
        throw out_of_range("Yigit bos");
    }

    return veriler.back();
}

template <class T>
bool Yigit<T>::empty() const {
    return veriler.empty();
}

template class Yigit<int>;
template class Yigit<Kisi>;
