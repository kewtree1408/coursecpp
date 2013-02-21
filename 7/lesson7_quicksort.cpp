#include <iostream>

using namespace std;

//~ рекурсивная функция, база рекурсии -- один элемент
void qsort(int *mass, int low, int high) {
	int x = mass[(low+high)/2]; // выбираем опорный элемент -- середина
	int i=low;
	int j=high;
	do {
		while (mass[i]<x) ++i; // если элементы стоят верно, то инкрементируем индекс
		while (mass[j]>x) --j; // тут элементы тоже стоят верно, и индекс декрементируем
		//~ если индекс справа стал больше, чем индекс слева, значит произошло что-то не то
		//~ и элементы нужно поменять
		if (i<=j) {
			int tmp = mass[i];
			mass[i] = mass[j];
			mass[j] = tmp;
			i++; j--; 
		}
	} while (i<=j); // выполняем цикл с постусловием: следим за текущими индексами
	//~ Пока у нас индексы стоят на своих местах
	
	if (j>low) qsort(mass,low,j);
	if (i<high) qsort(mass,i,high);
	
}

//~ Вызовим функцию qsort с начальными границами 0 и n
void quicksort(int *mass, int n) {
	qsort(mass,0,n);
}

int main() {
	const int n = 7;
	cout << "Enter the 7 elements of massive (int): ";
	int arr[n];
	for (int i=0; i<n; i++)
		cin >> arr[i];
	
	//~ Применяем алгоритм быстрой сортировки
	quicksort(arr,n-1);
	
	for (int i=0; i<n; i++)
		cout << arr[i] << " ";
	cout << endl;
	
	return 0;
}
