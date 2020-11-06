#include "std_lib_facilities.h"
#include "stdio.h"
#include "limits.h"
#include "float.h"
#include "algorithm"

const string numbers = "0123456789";
//const string chars = "cminft";

int strLen(string a) {
	return (sizeof(a.c_str())/sizeof(*a.c_str()));
}

bool contains(const char* s, char c) {
	int l = strLen(s);
	for (int i = 0; i < l; i++) {
		if (s[i] == c) {
			return true;
		}
	}
	return false;
}

string removeLast(string s) {
	s += "#";
	int i = s.find("#");
	s = s.substr(0, i - 1);
	return s;
}

bool equals(string a, string b) {
	if (strLen(a) != strLen(b)) return false;
	for (int i = 0; i < strLen(a); i++) {
		if (a[i] != b[i]) {
			return false;
		}
	}
	return true;
}

int main() {
	double min = DBL_MAX;
	double max = DBL_MIN;
	double sum = 0;
	vector<double> list;
	while (true) {
		double num1 = 0;
		string input = "";

		cout << "Enter a number: ";
		cin >> input;
		if (input == "|") {
			cout << "\n\nEXIT\n\n\n";
			break;
		}

		string value = "";
		string unit = "";
		const char* chr = input.c_str();
		int length = (sizeof(chr)/sizeof(*chr));
		for (int i = 0; i < length; i++){
			if (contains(numbers.c_str(), chr[i])) value += chr[i];
			else if (chr[i] != ' ' && chr[i] != '\n' /*contains(chars.c_str(), chr[i])*/) unit += chr[i];
		}

		//unit = removeLast(unit);
		double cmValue = 0;
		double v = atof(value.c_str());

		if (equals(unit, "cm")) {
			cmValue = v;
		} else if (equals(unit, "mm")) {
			cmValue = v * 100;
		} else if (equals(unit, "in")) {
			cmValue = v * 2.54f;
		} else if (equals(unit, "ft")) {
			cmValue = v * 12 * 2.54f;
		} else {
			cout << "Not valid unit type: \"" << unit << "\"" << strLen(unit) << endl;
			value = "";
			unit = "";
		}
		
		if (equals(unit, "cm") || equals(unit, "mm") || equals(unit, "in") || equals(unit, "ft")) {
			if (min > cmValue) min = cmValue;
			if (max < cmValue) max = cmValue;

			cout << "CMValue: " << cmValue << endl;

			cout << "Value: \"" << value << "\" Unit: \"" << unit[0] << unit[1] << "\"" << endl;
			list.push_back(cmValue / 100);
			sum += cmValue / 100;		
		}
	}
	
	//cout smallest, largest, number of values, sum in meters
	cout << "Smallest: " << min << endl
	<< "Largest: " << max << endl
	<< "Number of elements: " << list.size() << endl
	<< "Sum of elements: " << sum << "m" << endl << endl;
	//cout sorted list
	for (int i = 0; i < list.size(); i++) {
		sort(list.begin(), list.end());
	}
	cout << "\nElements of list\n";
	for (int i = 0; i < list.size(); ++i) {
		cout << list[i] << endl;
	}

	return 0;
}
