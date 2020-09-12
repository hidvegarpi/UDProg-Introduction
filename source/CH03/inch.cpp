#include "std_lib_facilities.h"

int main() {
	const double cm_per_inch = 2.54;
	double inch;

	while (inch != 0) {
		cout << "Enter distance in inch: ";
		cin >> inch;
		cout << "length: " << inch << " inch\n";
		cout << "        " << inch * cm_per_inch << " cm\n";
	}

	return 0;
}