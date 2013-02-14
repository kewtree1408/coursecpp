// Передача параметров по значению, ссылке, указателю.
// ПЕРЕДАЧА ПАРАМЕТРОВ ПО ЗНАЧЕНИЮ.  ИЗМЕНЕНИЙ НЕТ    
// ПЕРЕДАЧА ПАРАМЕТРОВ ПО ССЫЛКЕ.    ИЗМЕНЕНИЯ ЕСТЬ   
// ПЕРЕДАЧА ПАРАМЕТРОВ ПО УКАЗАТЕЛЮ. ИЗМЕНЕНИЯ ЕСТЬ   
// ПЕРЕДАЧА ПАРАМЕТРОВ ПО УКАЗАТЕЛЮ БЕЗ ПРАВА ИЗМЕНЕНИЯ 

#include <iostream>

int globVar=4;

// int x и int &x  - две стороны одной и той же переменной:
//  имя  и разыменованный адрес

// Прототипы функций
void   func1Val(int  x,  int  y); //передаются значения
void   func2Ref(int &x,  int &y); //передаются ссылки
void   func3Ptr(int *x,  int *y); //передаются указатели

//передаются указатели без права модификации
void func4_constPtr( const int *x, const int *y);//без права изменения

using namespace std;

int main() {
	int a=1, b=2;

	cout << "\tBefore functions:\n";//изменений нет
	cout <<"a = " << a <<"\tb = "<< b <<"\tglobVar = " << globVar << endl;
	
	cout << "\tExecute func1(by value):\n";
	func1Val(a,b);   // Передача данных по значению
	cout <<"a = " << a <<"\tb = "<< b <<"\tglobVar = " << globVar << endl;

	cout << "\tExecute func2(by reference):\n";
	func2Ref(a,b);   // Передача данных по ссылке
	cout <<"a = " << a <<"\tb = "<< b <<"\tglobVar = " << globVar << endl;

	cout << "\tExecute func3(by poiter):\n";
	func3Ptr(&a,&b);   // Передача данных по указателю
	cout <<"a = " << a <<"\tb = "<< b <<"\tglobVar = " << globVar << endl;

	//передаются указатели без права модификации
// 	func4_constPtr(&a, &b);  // сообщение об ошибке !!!

	return 0; 
}

void func1Val(int x, int y) { 
	x = x + 10;  //изменение копии
	y = y + 10;  //изменение копии
	globVar = globVar + 10;  //изменение глобальной переменной
}

void func2Ref (int &x, int &y) { 
	x = x + 10;  //изменение оригинала
	y = y + 10;  //изменение оригинала
	globVar = globVar + 10;  //изменение глобальной переменной
}


void func3Ptr(int *x, int *y) { 
	*x = *x + 10;  //изменение оригинала
	*y = *y + 10;  //изменение оригинала
	globVar = globVar + 10;  //изменение глобальной переменной
}

/*
//передаются указатели на константные значения
void func4_constPtr( const int *x, const int *y) { 
	*x = *x + 10;  //изменение оригинала ОШИБКА !!
	*y = *y + 10;  //изменение оригинала ОШИБКА !!
	globVar = globVar + 10;  //изменение глобальной переменной
}
*/