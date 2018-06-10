#ifndef KAGIT_H
#define KAGIT_H


class Kagit
{
    private:

        double en,boy;

    public:
        Kagit();
        Kagit(double en, double boy);
        double alan();
        friend Kagit kes(const Kagit& kagit);

};

#endif // KAGIT_H
