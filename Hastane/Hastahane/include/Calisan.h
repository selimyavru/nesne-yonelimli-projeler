#ifndef CALİSAN_H
#define CALİSAN_H

#include <iostream>

using namespace std;

class Calisan{
    public:
        int getMaas();
        void setMaas(int );
        string getGorev();
        void setGorev(string );

    private:
        int maas;
        string gorev;
};

#endif // CALİSAN_H
