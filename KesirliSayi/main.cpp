#include <iostream>
#include <sstream>

using namespace std;

#include "KesirliSayi.h"

double toplamPuan = 0;
int soruPuani = 4;

bool test(KesirliSayi expected, KesirliSayi actual);
bool test(bool expected, bool actual);
bool test(string expected, string actual);

int main() {
	KesirliSayi *ks1;
	KesirliSayi *ks2;
	KesirliSayi *expected;
	KesirliSayi actual;
	stringstream s1, s2;

	cout << "Bil 112 Lab - Kesirli Sayi Degerlendirmesi" << endl;
	cout << "------------------------------------" << endl;

	cout << "KesirliSayi() ve operator=(KesirliSayi ks) testi:" << endl;
	ks1 = new KesirliSayi;
	actual = *ks1;
	expected = new KesirliSayi(0, 1);
	test(*expected, actual);
	test(*expected, actual);

	cout << "KesirliSayi(int pay, int payda) ve sadelestir() testi:" << endl;
	ks1 = new KesirliSayi(720, 5040);
	actual = *ks1;
	expected = new KesirliSayi(1, 7);
	test(*expected, actual);
	test(*expected, actual);

	cout << "KesirliSayi(int tamsayi) testi:" << endl;
	ks1 = new KesirliSayi(-5);
	actual = *ks1;
	expected = new KesirliSayi(5, -1);
	test(*expected, actual);

	cout << "operator=(int tamsayi) testi:" << endl;
	actual = 4;
	expected = new KesirliSayi(-4, -1);
	test(*expected, actual);

	cout << "operator+(KesirliSayi ks), paydaEsitle(KesirliSayi& ks) testi:" << endl;
	ks1 = new KesirliSayi(3, 10);
	ks2 = new KesirliSayi(2, 10);
	actual = *ks1 + *ks2;
	expected = new KesirliSayi(1, 2);
	test(*expected, actual);
	test(*expected, actual);

	cout << "+ isleminden sonra isleme giren nesneler degismemeli:" << endl;
	expected = new KesirliSayi(3, 10);
	test(*expected, *ks1);

	cout << "operator-(KesirliSayi ks) testi:" << endl;
	ks1 = new KesirliSayi(5, 10);
	ks2 = new KesirliSayi(3, 10);
	actual = *ks1 - *ks2;
	expected = new KesirliSayi(1, 5);
	test(*expected, actual);

	cout << "- isleminden sonra isleme giren nesneler degismemeli:" << endl;
	expected = new KesirliSayi(5, 10);
	test(*expected, *ks1);

	cout << "operator*(KesirliSayi ks) testi:" << endl;
	ks1 = new KesirliSayi(2, 7);
	ks2 = new KesirliSayi(5, 14);
	actual = *ks1 * *ks2;
	expected = new KesirliSayi(5, 49);
	test(*expected, actual);

	cout << "* isleminden sonra isleme giren nesneler degismemeli:" << endl;
	expected = new KesirliSayi(2, 7);
	test(*expected, *ks1);

	cout << "operator/(KesirliSayi ks) testi:" << endl;
	ks1 = new KesirliSayi(3, 7);
	ks2 = new KesirliSayi(5, 14);
	actual = *ks1 / *ks2;
	expected = new KesirliSayi(6, 5);
	test(*expected, actual);

	cout << "/ isleminden sonra isleme giren nesneler degismemeli:" << endl;
	expected = new KesirliSayi(3, 7);
	test(*expected, *ks1);

	cout << "operator+=(KesirliSayi ks) testi:" << endl;
	ks1 = new KesirliSayi(3, 10);
	ks2 = new KesirliSayi(2, 10);
	*ks1 += *ks2;
	actual = *ks1;
	expected = new KesirliSayi(1, 2);
	test(*expected, actual);

	cout << "operator-=(KesirliSayi ks) testi:" << endl;
	ks1 = new KesirliSayi(5, 10);
	ks2 = new KesirliSayi(3, 10);
	*ks1 -= *ks2;
	actual = *ks1;
	expected = new KesirliSayi(1, 5);
	test(*expected, actual);

	cout << "operator*=(KesirliSayi ks) testi:" << endl;
	ks1 = new KesirliSayi(2, 7);
	ks2 = new KesirliSayi(5, 14);
	*ks1 *= *ks2;
	actual = *ks1;
	expected = new KesirliSayi(5, 49);
	test(*expected, actual);

	cout << "operator/=(KesirliSayi ks) testi:" << endl;
	ks1 = new KesirliSayi(3, 7);
	ks2 = new KesirliSayi(5, 14);
	*ks1 /= *ks2;
	actual = *ks1;
	expected = new KesirliSayi(6, 5);
	test(*expected, actual);

	cout << "operator++() testi:" << endl;
	ks1 = new KesirliSayi(3, 7);
	actual = ++(*ks1);
	expected = new KesirliSayi(10, 7);
	test(*expected, actual);

	cout << "operator++() operatorunde isleme giren kesirli sayida 1 artmali:" << endl;
	test(*expected, *ks1);

	cout << "operator++(int i) testi:" << endl;
	ks1 = new KesirliSayi(3, 7);
	actual = (*ks1)++;
	expected = new KesirliSayi(3, 7);
	test(*expected, actual);

	cout << "operator++(int i) operatorunde sadece isleme giren kesirli sayi 1 artmali:" << endl;
	expected = new KesirliSayi(10, 7);
	test(*expected, *ks1);

	cout << "operator==(KesirliSayi ks) false testi:" << endl;
	ks1 = new KesirliSayi(8, 5);
	ks2 = new KesirliSayi(5, 14);
	test(*ks1 == *ks2, 0);

	cout << "operator==(KesirliSayi ks) true testi:" << endl;
	ks1 = new KesirliSayi(13, 21);
	ks2 = new KesirliSayi(13, 21);
	test(*ks1 == *ks2, 1);

	cout << "operator!=(KesirliSayi ks) false testi:" << endl;
	ks1 = new KesirliSayi(13, 21);
	ks2 = new KesirliSayi(13, 21);
	test(*ks1 != *ks2, 0);

	cout << "operator!=(KesirliSayi ks) true testi:" << endl;
	ks1 = new KesirliSayi(8, 5);
	ks2 = new KesirliSayi(5, 14);
	test(*ks1 != *ks2, 1);

	cout << "operator<(KesirliSayi ks) false testi:" << endl;
	ks1 = new KesirliSayi(7, 5);
	ks2 = new KesirliSayi(8, 14);
	test(*ks1 < *ks2, 0);

	cout << "operator<(KesirliSayi ks) true testi:" << endl;
	ks1 = new KesirliSayi(5, 14);
	ks2 = new KesirliSayi(4, 5);
	test(*ks1 < *ks2, 1);

	cout << "operator>(KesirliSayi ks) false testi:" << endl;
	ks1 = new KesirliSayi(5, 5);
	ks2 = new KesirliSayi(4, 2);
	test(*ks1 > *ks2, 0);

	cout << "operator>(KesirliSayi ks) true testi:" << endl;
	ks1 = new KesirliSayi(4, 5);
	ks2 = new KesirliSayi(5, 14);
	test(*ks1 > *ks2, 1);

	cout << "operator<=(KesirliSayi ks) false testi:" << endl;
	ks1 = new KesirliSayi(4, 5);
	ks2 = new KesirliSayi(4, 14);
	test(*ks1 <= *ks2, 0);

	cout << "operator<=(KesirliSayi ks) true testi:" << endl;
	ks1 = new KesirliSayi(10, 5);
	ks2 = new KesirliSayi(28, 14);
	test(*ks1 <= *ks2, 1);

	cout << "operator>=(KesirliSayi ks) false testi:" << endl;
	ks1 = new KesirliSayi(4, 14);
	ks2 = new KesirliSayi(4, 13);
	test(*ks1 >= *ks2, 0);

	cout << "operator>=(KesirliSayi ks) true testi:" << endl;
	ks1 = new KesirliSayi(10, 5);
	ks2 = new KesirliSayi(28, 14);
	test(*ks1 >= *ks2, 1);

	cout << "operator>>(istream& ist, KesirliSayi& ks) testi:" << endl;
	s1.str("4032\n-28224");
	s1 >> *ks1;
	expected = new KesirliSayi(-1, 7);
	test(*expected, *ks1);

	cout << "operator<<(ostream& ost, const KesirliSayi& ks) testi:" << endl;
	s2 << *expected;
	test("-1/7", s2.str());

	cout << "Notunuz  : " << (toplamPuan*100/148) << endl;

	return 0;
}

bool test(KesirliSayi expected, KesirliSayi actual) {
	cout << "Expected : " << expected << endl;
	cout << "Actual   : " << actual << ", ";
	if (expected.pay == actual.pay && expected.payda == actual.payda) {
		toplamPuan += soruPuani;
		cout << "testi gecti." << endl << endl;
		return 1;
	} else {
		cout << "testten kaldi." << endl << endl;
		return 0;
	}
}

bool test(bool expected, bool actual) {
	cout << "Expected : " << expected << endl;
	cout << "Actual   : " << actual << ", ";
	if (expected == actual) {
		toplamPuan += soruPuani;
		cout << "testi gecti." << endl << endl;
		return 1;
	} else {
		cout << "testten kaldi." << endl << endl;
		return 0;
	}
}

bool test(string expected, string actual) {
	cout << "Expected : " << expected << endl;
	cout << "Actual   : " << actual << ", ";
	if (expected == actual) {
		toplamPuan += soruPuani;
		cout << "testi gecti." << endl << endl;
		return 1;
	} else {
		cout << "testten kaldi." << endl << endl;
		return 0;
	}
}
