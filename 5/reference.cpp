//Отделение от дробного числа целой и вещественной части
#include <iostream>

using namespace std;

void intfrac(double, double&, double&);
void intfrac(double, double*, double*);

int main() {
	double number;
	double intpart, fracpart; // переменные для целой и дробной части
	for(;;){
		cout << "\nEnter the number(for exit -- enter the 0): ";
		cin >> number;
		if (number == 0.0)
			break;
		intfrac(number, intpart, fracpart);
		cout << "After &:\nThe integer part is " << intpart << endl;
		cout << "The fraction part is " << fracpart << endl;
		intfrac(number, &intpart, &fracpart);
		cout << "After *:\nThe integer part is " << intpart << endl;
		cout << "The fraction part is " << fracpart << endl;
	}
	return 0;
}

void intfrac(double n, double& intp, double& fracp){
	// кажется, что эту строку можно убрать, но это будет не верно, т.к. у нас возникнет ошибка компиляции: мы пытаемся вернуть дробный тип, а внезапно возвращаем длинный целый. Непорядок.
	long tmpIntPart = static_cast<long>(n); // выделили целую часть при помощи приведения типа (потеря вещественной части)
	
	intp = static_cast<double>(tmpIntPart);  
	fracp = n - intp;
}

void intfrac(double n, double* intp, double* fracp){
	long long tmpIntPart = static_cast<long long>(n); // выделили целую часть при помощи приведения типа (потеря вещественной части)
	
	*intp = static_cast<double>(tmpIntPart);  
	*fracp = n - *intp;
}