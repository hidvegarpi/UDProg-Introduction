#include "std_lib_facilities.h"

int main()
{
	//cout << "Enter your name and age\n"; //EXAMPLE: Sifu 19 ENTER or Sifu ENTER 19 ENTER
	//string name;
	//int age;
	//cin >> name >> age;

	cout << "Enter your first name: ";

	string name;
	cin >> name;

	cout << "Enter your age: ";

	int age;
	cin >> age;

	cout << "Hello, " << name << "! (age: " << age << ")\n";
	return 0;
}