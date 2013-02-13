#include <iostream>
#include <locale>
#include "even-odd.h"

// объявим прототипы
/*
bool iseven(int); // на вход подаем четное число, в результате ответ: четное оно или нет
bool ispositive(int); // положительное число? 
bool isnegative(int); // отрицательное число?
*/

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	// В цикле вводим число до тех пор, пока не введем 0
	int num;
	while(1){ // бесконечный цикл
		cout << "\nEnter the number:\n";
		cin >> num;
		// Если число четное, то и выведем, что оно четное
		if (iseven(num)) {
			cout << "1. Even\n";
		}
		else { // в противном случае может быть только 1н результат -- нечетное
			cout << "1. Odd\n";
		}
		if (ispositive(num)){ // проверка на положительность
			cout << "2. Positive\n";
		}
		else if (isnegative(num)){ // проверка на отрицательность
			cout << "2.Negative\n";
		}
		else { // по нулевому значению выход из цикла
			cout << "NULL!\n";
			break;
		}
	}

	return 0;
}

// Напишем реализацию функций

bool iseven(int x) {
	if (!(x%2)) // (x%2==0)
		return true;
	return false;
}

bool ispositive(int a) {
	if (a>0)
		return true;
	return false;
}

bool isnegative(int num) { return ( num<0 ? true:  false ); }

