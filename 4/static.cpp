#include <iostream>
#include <locale> 

// Вычистываем среднее значение
float getavg(float);

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian"); // устанавливаем дотсупными ввод русских букв
	float numb; // переменная, в которой храним наше значение
	float average; // среднее значение
	
	while(true) { // в бесконечном цикле запускаем нашу программу
		cout << "Введите число (0 - выход из программы): " << endl;	
		cin >> numb;
		if (numb==0) // (!numb) по 0 -- выход
			break;
		average = getavg(numb);
		cout << "Среднее значение: " << average << endl;
	}
}

float getavg(float ai){
	// статические переменные устанавливают значения при компиляции
	static float total=0; // значение числителя
	static int count=0; // знаменатель
	
	total+=ai;
	count++;
	
	cout << total << " / " << count << " = " << total/count << endl; 
	return total/count; // total/++count;
}