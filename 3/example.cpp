#include <iostream>  // подключение заголовочного файла

using namespace std;

int main()	//описание главной функции
{
	cout << "OPERATORS for & break!\n\n"; //вывод текста на экран
	int i = 0;
	int sum = 0;
	char NoYes; // что мы выберем (диалог)

	for ( ; ; )
	{
//1
		for (i=0; i<10; ++i) // 1-й вариант   45
			sum += i;
		cout << " Sum1 = " << sum << " i = " << i << endl;
		cout << "Continue 1? (N,Y) : " ;
		cin >> NoYes;
		if ((NoYes == 'n') || (NoYes == 'N'))
		{
			cout << "\tFinish 1!\n";
			break;
		}
		
//2
		for (i=0; i<10; i++) // 2-й вариант   90
			sum += i;
		cout << " Sum2 = " << sum << " i= " << i << endl;
		cout << "Continue 2? (N,Y) : " ;
		cin >> NoYes;
		if ((NoYes == 'n') || (NoYes == 'N'))
		{
			cout << "\tFinish 2!\n";
			break;
		}

//3
		for (i=0; i<10; ++i, sum += i); // !!  145, а не 135 !!!
//		for (i=0; i<10;  sum += i, i++); //  135 !!!

		cout << " Sum3 = " << sum << " i= " << i << endl;
		cout << "Continue 3? (N,Y) : " ;
		cin >> NoYes;
		if ((NoYes == 'n') || (NoYes == 'N'))
		{
			cout << "\tFinish 3!\n";
			break;
		}

		cout << endl;
		cout << "\tREPEAT Summing . . . \n";
	}

	cout << "\t\t\tTOTAL Finish!!!\n\n";
	
	return 0;         
}