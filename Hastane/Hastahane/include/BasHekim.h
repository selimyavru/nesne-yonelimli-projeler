#ifndef BASHEKİM_H
#define BASHEKİM_H

#include <iomanip>
#include "Yonetici.h"
#include "Kisi.h"

class BasHekim: public Yonetici, public Kisi{
    friend ostream& operator<<(ostream& , BasHekim& );
    friend istream& operator>>(istream& , BasHekim& );

    public:
        BasHekim();

    private:
};

#endif // BASHEKİM_H
