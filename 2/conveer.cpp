#include <iostream>  // подключение заголовочного файла

using namespace std;

int main()             // описание главной функции
{
//конвейерный оператор "запятая"
//результатом операции "запятая" является результат самого 
//правого выражения
	cout << "\ttest_1 \n";
	int i;
	i = (2,3,4);
	cout << "i = (2,3,4); \ti = " << i << endl;
	
	cout << "\n\ttest_2 \n";
	i = 5;
	if (i = 2*i, i > 8)
	{
		cout << " Operation OK 1 !\n\n";
	}

  i = 5;
	if (i < 6, i > 8 ) //победило правое выражение false
	{
		cout << " Operation OK 2  !\n\n";
	}

//поменяем местами выражения в условии
	if (i > 8, i < 6 ) //победило правое выражение true
	{
		cout << " Operation OK 3  !\n\n";
	}

	cout << " Operation OK 4  !\n\n";

	int a,b,c;
	cout << "\ttest_3 \n Enter 3 number:\n";
	cin >> (a,b,c);  //ввести три значения 5 7 9
	cout << "\ta = " << a   //значение из /1
		<< "\tb = " << b   //значение из /1
		<< "\tc = " << c << endl; //первое введенное значение 5 из 5 7 9
	return 0;
}