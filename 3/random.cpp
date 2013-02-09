// угадывание произвольного числа
#include <iostream>  // подключение заголовочного файла
#include <stdlib.h> // здесь находится описание ф-ции рандом

using namespace std;

int main() // описание главной функции
{
	const int range = 32; // диапазон выбора случайного числа
	// или
	//cout << "Enter the range for randomize number\n" << endl;
	//cin >> range;
	int random = rand()%range; // случайное число
	int n; // число, которое мы вводим, в попытке угадать мысли функции rand()

	cout << "\tFind randomize number! \n";
	cout << "Enter a number in the range 0.." << range << ":\n";
	do
	{
		//random = rand()%range;
		cout << "\tN = ";
		cin >> n;
		if (n < random)
			cout << "Too Low, try again!\n";  //число меньше задуманного
		else if (n > random)
			cout << "Too High, try again!\n"; //число больше задуманного
		else 
			cout << "\n\n\tOK! " << random << " is Rigth!\n\n\n\a\a"; //нашли
	} while (n != random);
	
	return 0;
}

/* А как сделать так, чтобы мы никогда не догадались, какое число задумал компутер?
Нужно всего-то изменить 2 строчки. Или даже переместить одну. Как должен потом выглядеть код?*/