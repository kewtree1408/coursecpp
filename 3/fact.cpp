// factor.cpp // подсчет факториала
// Факториал: n! = 1*2*3*...*(n-1)*n;
// Такая же ситуация как с числами фиббоначи. Мы ограничены диапазоном типа.
// Для того, чтобы посчитать факториал от максимально возможного числа,
// воспользуемся типом long long int (unsigned), а также добавим в программу возможность
// выхода с ошибкой, если число не умещается в допустимый диапазон типа.


#include <iostream>
#include <climits>

using namespace std;

int main() {
	unsigned int numb; // Вводим число, для которого хотим найти факториал
	unsigned long long fact = 1; // тип long для результата
	cout << "Enter the positive number: ";
	cin >> numb; // ввод числа
	for(int j=numb; j>0; j--) { // умножение 1 на
		// напишем сначала версию без проверки, а затем с проверкой для диапазона
		// отметить, как важен порядок операций
		if (fact > LONG_LONG_MAX) {
			cout << "Fill int!!! MAX number(experiment) = " << 20 << endl;
			return -1;
		}
		fact *= j; // numb, numb-1, ..., 2, 1
	} // сначала без фигурных скобок
	cout << "Factorial " << numb << " = " << fact << endl;
	return 0;
}