// Взятие адреса переменных разных типов.
// В данном случае, используя обыкновенные переменные, можно обработать значение как 
// именованную величину, а его адрес – как производную величину. 
// Адреса переменных растут снизу вверх.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	bool bVar = true;
	char chVar1 = 'W';
	char chVar2 = 'R';
	int iVar = 123;
	long longVar  = 65535; // 4 байта  
	double dVar = 3.1415926535;  //8 байт

// разница между адресами равна длине типа
// запишем в шестнадцатиричином представлении и в целом

	cout << "bVar = " << bVar;
	cout << "\tAddress of bVar = " << &bVar 
          << "\t" << (int)&bVar << endl;
					
	cout << "chVar1 = " << chVar1;
	cout << "\tAddress of chVar1 = " << &chVar1 // Не видим шестнадцетичиные числа, т.к. cout пытается привести к виду строки, приводит и не видит терминального 0 (но еще не дошли до этой темы)
          << "\t" << int(&chVar1) << endl; // посмотрим разные версии приведения типов

	cout << "chVar2 = " << chVar2;
	cout << "\tAddress of chVar2 = " << &chVar2 
          << "\t" << (int) &chVar2 << endl;

	cout << "iVar = " << iVar;
	cout << "\tAddress of iVar = " << &iVar 
          <<"\t"<< reinterpret_cast <int> (&iVar) << endl;

	cout << "longVar = " << longVar;
	cout << "\tAddress of longVar = " << &longVar 
          <<"\t"<< (int) &longVar<< endl;
	
	cout << "dVar = " << dVar;
	cout << "\tAddress of dVar = " << &dVar 
          <<"\t"<< reinterpret_cast<int>(&dVar) << endl; // если использовать этот вид преведения типа, то вы скорее всего не увидете warning компилятора
	return 0;           
}