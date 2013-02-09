#include <iostream.h>  // подключение заголовочного файла

using namespace std;

int main()             // описание главной функции
{
	cout << "  OPERATOR  while  ! \n\n"; // вывод текста на экран

//разрядность двоичного числа
	int LenBin = 4;  // 0xf = 1111 binary = 15 decimal   len=4 positions
	int dec;         //десятичное число

	while (1) //бесконечный цикл
	{
		cout << endl;
		cout <<" Enter decimal number [0..15] (-1 - EXIT) : ";
		cin >> dec;

		if (dec == -1)
			break;           //выход из цикла

		cout << " Decimal number = "<< dec << "     Binary number = ";
		while (LenBin)   // <>0  TRUE
		{
			if (dec & 8)  //побитовое умножение на 1000 Binary   <> 0
				           //ловим старший разряд
			   cout << 1;
			else          //                                      = 0
				cout << 0;

			dec = dec << 1; //сдвиг на 1 бит влево
			LenBin--;
		}

		cout << endl;
		LenBin = 4; //восстановили счетчик
		           //для надежности лучше это делать в начале цикла
		 // и убрать стартовую инициализацию из объявления переменной
		           // значение 4 лучше прописать в константах 
	}
	cout << endl << endl;
	return 0;           // возврат из функции в операционную систему
}