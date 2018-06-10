#include "KarmasikSayi.h"

KarmasikSayi::KarmasikSayi() {
    gercel = 0;
    sanal = 0;
}

KarmasikSayi& KarmasikSayi::operator =(KarmasikSayi ks) {
    gercel = ks.gercel;
    sanal = ks.sanal;
    return *this;
}

KarmasikSayi KarmasikSayi::operator +(KarmasikSayi ks) {
    KarmasikSayi toplam;
    toplam.gercel = gercel + ks.gercel;
    toplam.sanal = sanal + ks.sanal;
    return toplam;
}

KarmasikSayi& KarmasikSayi::operator +=(KarmasikSayi ks) {
    gercel += ks.gercel;
    sanal += ks.sanal;
    return *this;
}

bool KarmasikSayi::operator ==(KarmasikSayi ks) {
    return gercel == ks.gercel && sanal == ks.sanal;
}

istream& operator >>(istream& ist, KarmasikSayi& ks) {
    char isaret, x;
    ist >> ks.gercel >> isaret >> ks.sanal >> x;
    if (isaret == '-') ks.sanal = -ks.sanal;
    return ist;
}

ostream& operator <<(ostream& ost, const KarmasikSayi& ks) {
    ost << ks.gercel << (ks.sanal < 0 ? " - " : " + ") << max(ks.sanal, -ks.sanal) << "i" << endl;
    return ost;
}
