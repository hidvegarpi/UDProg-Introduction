#include "std_lib_facilities.h"

int main()
{
	string first_name;
	string full_letter;
	cout << "Enter the name of the person you want to write to: ";
	cin >> first_name;
	full_letter += "Dear " + first_name + ", \n";
	full_letter += "How are you? I'm fine. I miss you. ";
	
	cout << "Please enter a friend's name: ";
	string friend_name;
	cin >> friend_name;
	full_letter += "Have you seen " + friend_name + " lately? ";
	
	char friend_sex = '0';
	cout << "What is the sex of your friend? (m/f) ";
	cin >> friend_sex;
	if (friend_sex == 'm') full_letter += "If you see " + friend_name + " ask him to call me. ";
	else if (friend_sex == 'f' ) full_letter += "If you see " + friend_name + "ask her to call me. ";
	
	cout << "Enter the age of the recipant: ";
	int rec_age = 0;
	cin >> rec_age;
	if (rec_age >= 110 || rec_age <= 0) simple_error("you're kidding!!");
	full_letter += "I hear you just had a birthday and you are "/* + rec_age + " years old."*/;
	full_letter += rec_age;
	full_letter += " years old. ";
	
	if (rec_age < 12){
		full_letter += "Next year you will be "/* + (rec_age + 1) + "."*/;
		full_letter += (rec_age + 1);
		full_letter += ". ";
	} else if (rec_age == 17) full_letter += "Next year you will be able to vote. ";
	else if (rec_age > 70) full_letter += "I hope you are enjoying retirement. ";
	
	full_letter += "\nYours sincerely,\n\n\nSifu\n";
	
	cout << "\n\n" << full_letter;
	
	return 0;
}