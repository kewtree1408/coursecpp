//Определить, сколько дней осталось до нашего дня рождения. 
//Напишем программу, которая на вход будет принимать текущую дату (день и месяц) и 
//дату нашего дня рождения, а на выходе выведем кол-во дней, которое стоит подождать до ДР. 
//Чтобы упростить задачу, будем считать, что все годы у нас не високосные.

#include <iostream>
using namespace std;
int main() {
	int c_month, c_day; // current month, current day
	int b_month, b_day; // birthday month, birdthday day
	int day_per_month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	
	//~ Вводим текущие день и меcяц, а также наши ДР
	cout << "Enter current data with space (day, month): " << endl;
	cin >> c_day >> c_month;
	cout << "Enter birthday data with space (day, month): " << endl;
	cin >> b_day >> b_month;
	
	//~ вводим временные переменные
	int current=c_day, birth=b_day;
	//~ считаем кол-во дней от начала года до текущей даты
	for (int i=0; i<c_month-1; i++) {
		current += day_per_month[i];
	}
	//~ считаем кол-во дней от начала года до нашего ДР
	for (int i=0; i<b_month-1; i++) {
		birth += day_per_month[i];
	}
	
	//~ считаем результат
	int result = birth-current;
	//~ если получили отрицательное значение, значит получили переход 
	//~ между годами и нужно прибавить к отриц числу 365 -- кол-во дней
	if (result < 0) result += 365;
	cout << "Before birthday remains: " << result << endl; 

	return 0;
}
