// пример на использование аргументов по умолчанию
#include <iostream>  // подключение заголовочного файла

//пропуск заданного числа строк
// void Skip (int EmptyLines = 5); // 5  - значение по умолчанию
void Skip (int = 5); // 5  - значение по умолчанию

using namespace std;

int main()             // описание главной функции
{
	int jump;
	cout << "Enter positive integer value: ";
	cin  >> jump;
	cout << "With parametr\n";
	Skip (jump);   //аргумент явно
	cout << "WithOUT parameter\n";
	Skip ();       //список аргументов пустой, берется по умолчанию
	return 0;          
}


void Skip (int emptyLines) {
	//int i;
	//for (i = 1; i <= emptyLines; i++)
	//	cout << i << endl;  //номер строки
	// Привыкаем писать так:
	for (int i=0; i<emptyLines; ++i)
		cout << i+1 << endl;
}
