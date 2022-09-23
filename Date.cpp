
#include "Date.h"
#include<iostream>

using namespace std;

void Date::checkyearDate() {

	if (year % 4 != 0 || (year % 100 == 0 && year % 400 != 0)) {		//fórmula de año bisiesto y no bisiesto para febrero
		month == 02;
		day >= 29;
		cout << year << " That's not a leap year\n";

	}
	else {
		month == 02;
		day <= 28 || day >= 1;
		cout << " That's a leap year";
	}

}

void Date::checkmonthDate() {

	if (month <= 0 || month >= 13) {
		cout << " That month doesn't exist";
	}
	else {
		cout << month << "/";
	}
}

void Date::checkdayDate() {

	if (day <= 0 || day >= 32) {
		cout << " That day isn't real";
	}
	else
		cout << day << "/";

}

void Date::printMenu() {	//para poner las elecciones en consola

	cout << "Write a year: ";
	cin >> year;
	
	cout << "\nWrite a number month: ";
	cin >> month;
	
	cout << "\nWrite a number day: ";
	cin >> day;
	

}