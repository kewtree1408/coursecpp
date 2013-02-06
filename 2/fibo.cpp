// fibo.cpp // генерирование чисел Фибоначчи с помощью цикла while
/*
#include <iostream>

using namespace std;

int main() {
	int limit = 100000; // поставим сами границу
	int first = 1; // первое значение
	int second = 1; // второе значение
	int last = second; // последнее
	int prevlast = first; // предпоследнее
	int sum = 0;
	
	while(prevlast < limit / 2 ) // результат не должен быть слишком большим
	{
		cout << last << " "; // вывод последнего члена
		sum = prevlast + last; // сложение двух последних членов
		prevlast = last; // обновление предпоследнего
		last = sum; // обновление последнего членов
	}
	cout << endl;
	return 0;
}
*/

/*
Теперь подумаем: зачем нам вообще какая-то граница?
Ведь мы вообще могли бы попытаться вывести бесконечное кол-во чисел. (и в некоторых ЯП такое возможно).
Но нас ограничивает тип, в котором мы храним последнее значение.
Какие модификации по улучшению мы можем сделать.
1. У нас помимо int существует и long -- длинный тип. У длинного типа тоже есть свой диапазон принимаемых значений.
Поэтому можем воспользоваться заголовочным файлом с точными значениями диапазона: climits.
2. Заметим, у нас элементы могут быть только положительными числами. А значит можно использовать спец модификатор -- unsigned,
в переводе -- беззнаковый (без отрицательных значений).
Значит сделаем 1й шаг: все элементы сделаем длинного целого типа -- беззнаковыми.
И поставим границу limit -- не ручками, а с помощью встроенной константы из заголовочного файла climits
*/

/*
#include <iostream>
#include <climits>

using namespace std;

int main() {
	unsigned long int limit = ULONG_MAX; // установим константу
	int first = 1; // первое значение
	int second = 1; // второе значение
	unsigned long int last = second; // последнее
	unsigned long int prevlast = first; // предпоследнее
	int sum = 0;
	
	// делим на 2 заранее, т.к. цикл с предусловием.
	while(prevlast < limit / 2 ) // результат не должен быть слишком большим
	{
		cout << last << " "; // вывод последнего члена
		sum = prevlast + last; // сложение двух последних членов
		prevlast = last; // обновление предпоследнего
		last = sum; // обновление последнего членов
	}
	cout << endl;
	return 0;
}
*/
// увидели последовательность намного больше

/*
Теперь подумаем: зачем нам создавать отдельную переменную limit, если ее значение уже определено и 
никак не будет изменено программой. Не нужно. Поэтому не будем ее создавать.
Затем: зачем нам значения first и second? они нужны на начальном этапе, но затем они в программе не используются, значит можем удалить.
И последнее: объявлять переменные в С++ необязательно вначале ф-ции, лучше даже это делать в момент использования. Поэтому:
объявление сделаем внутри блока while.
В итоге получим 2й шаг:
*/


#include <iostream>
#include <climits>

using namespace std;

int main() {
	unsigned long int last = 1; // последнее
	unsigned long int prevlast = 1; // предпоследнее
	
	// делим на 2 заранее, т.к. цикл с предусловием.
	while(prevlast < ULONG_MAX / 2 ) // результат не должен быть слишком большим
	{
		cout << last << " "; // вывод последнего члена
		int sum = prevlast + last; // сложение двух последних членов
		prevlast = last; // обновление предпоследнего
		last = sum; // обновление последнего членов
	}
	cout << endl;
	return 0;
}










/*
#include <iostream>

using namespace std;

int main() {
 //граница типа unsigned long
	const unsigned long limit = 4294967295;
	unsigned long next = 0; // предпоследний член
	unsigned long last = 1; // последний член
	while(next < limit / 2 ) // результат не должен быть слишком большим
	{
		cout << last << " "; // вывод последнего члена
		long sum = next + last; // сложение двух последних членов
		next = last; // обновление предпоследнего
		last = sum; // и последнего членов
	}
	cout << endl;
	return 0;
}
*/