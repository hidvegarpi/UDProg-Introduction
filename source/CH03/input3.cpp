#include "std_lib_facilities.h"

int main()
{
	//cout << "Enter your name and age\n"; //EXAMPLE: Sifu 19 ENTER or Sifu ENTER 19 ENTER
	//string name;
	//int age;
	//cin >> name >> age;

	cout << "Enter your first name, last name and age: ";
	string first_name;
	string last_name;
	int age;
	cin >> first_name >> last_name >> age;

	string name = first_name + " " + last_name;
	name += " Jr.";
	age++;

	cout << "Hello, " << name << "! (age: " << age << ")\n";
	return 0;
}