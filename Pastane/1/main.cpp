#include <iostream>
using namespace std;
#include "Pastane.h"
void ayracYaz(int uzunluk);

    int main() {
    Pastane pst("ABC Pastanesi");
	pst.calistir();

	return 0;
	}

	void ayracYaz(int uzunluk) {
	for (; uzunluk >= 0; --uzunluk)
	cout<<"-";
	cout<< endl;
	}
