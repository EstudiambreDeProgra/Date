// Tarea Clase Fecha con año, mes y día

#include<iostream>
#include"Date.h"

using namespace std;

int main() {

	int day = 0, month = 0, year = 0;
	Date d1(day, month, year);

	d1.printMenu();
	d1.checkdayDate();
	d1.checkmonthDate();
	d1.checkyearDate();

	return 0;

}
