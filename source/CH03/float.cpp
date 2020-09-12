#include "std_lib_facilities.h"

int main(){
	cout << "Enter a real number: ";

	double d;
	cin >> d;

	cout << "d = " << d << endl
	<< "d + 1 = " << d + 1 << endl
	<< "d * 3 = " << d * 3 << endl
	<< "d + d = " << d + d << endl
	<< "d * d = " << d * d << endl
	<< "d / d = " << d / 2 << endl
	<< "sqrt(d) = " << sqrt(d) << endl;
	return 0;
}