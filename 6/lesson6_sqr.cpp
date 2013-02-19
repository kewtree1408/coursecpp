#include <iostream>

void sqr1 (int Vec[], int sizeVec);   //через массив
void sqr2 (int *pVec, int sizeVec);   //через указатель на массив
void sqr3 (int &rVec, int sizeVec);   //через ссылку на массив

using namespace std;

void print(int *mass, int N) {
	for (int i=0; i<N; i++) {
		cout << mass[i] << " ";
	}
	cout << endl;
}

int main() {
	const int Nmax = 10;   //максимальный размер массива
	int AVec[Nmax];       //целый массив
	
	cout << "Source Array: "; 
	for (int i = 0; i < Nmax; i++) {
		AVec[i] = i;
		cout << AVec[i] << " ";
	}
	cout << endl;

	//~ Убедимся, что размер массива можно узнать и так:
	cout << "Sizeof massive:" << sizeof(AVec) << "/" <<sizeof(int) <<" = "
		                      << sizeof(AVec)/sizeof(int) << endl;
	//~ Возникает мысль, а может мы можем не передавать размер массива, а извлечь его именно так?
	//~ посмотрим:
	sqr1(AVec,Nmax);
	print(AVec,Nmax);
	//~ Видим, что этот вариант не подходит, тк мы передаем только указатель, а не сам массив
	//~ А размер указателя sizeof(*int) == 4 равен 4 байтам 
	
	sqr2(AVec,Nmax);
	print(AVec,Nmax);

	sqr3(*AVec,Nmax); // аналог: sqr3(AVec[0], Nmax);
	print(AVec,Nmax);

	return 0;
}

//~ Возведение в квадрат каждого элемента массива и его изменение, что видно в функции main() 
void sqr1(int Vec[], int sizeVec) {
	cout << "In function sqr1:" << sizeof(Vec) << "/" <<sizeof(int) <<" = " << sizeof(Vec)/sizeof(int) << endl;
	cout << "With massive" << endl;
	for (int i=0; i<sizeVec; i++)
		Vec[i] = Vec[i]*Vec[i];
}

void sqr2(int* pVec, int sizeVec) {
	cout << "With pointer" << endl;
	for (int i=0; i<sizeVec; i++)
		pVec[i] = (*(pVec+i)) * (*(pVec+i));
}

void sqr3 (int &rVec, int sizeVec) {
	cout << "With reference:" << endl;
	for (int i=0; i<sizeVec; i++)
		*(&rVec+i) = (*(&rVec+i)) * (*(&rVec+i));
}
