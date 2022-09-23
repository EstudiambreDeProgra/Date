#pragma once
class Date{

	private:										//atributos
		int day, month, year;
	public:
		Date(int _day, int _month, int _year) : day(_day), month(_month), year(_year){};		//constructor
		void checkyearDate();						//para los años
		void checkmonthDate();						//para los meses
		void checkdayDate();						//para los días
		void printMenu();							//para imprimir el menú

};
