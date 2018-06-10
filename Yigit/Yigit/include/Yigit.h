#ifndef YIGIT_H
#define YIGIT_H

#include <vector>
#include <stdexcept>
using namespace std;

template <class T>
class Yigit
{
    public:
        void push(T t);
        T pop();
        T top() const;
        bool empty() const;
    private:
        vector<T> veriler;
};

#endif // YIGIT_H
