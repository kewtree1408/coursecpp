#include <iostream>
using namespace std;

void main()
{
	int iArr[4], *pint;
	int i;
	double dArr[4], *pdbl;
	pint = &iArr[0];
	pdbl = dArr;
	cout << "\t\t\t Int \t\t Double \n";
	cout << "\t  POINTER \t 4 bytes \t 8 bytes\n";
	for (i=0;i<4;i++)
	cout << "\t POINTER+" << i << "\t" << pint+i << "\t" << pdbl+i << endl;
	cout << "\t\t\t Int \t\t\t Double\n"; 
	cout << "\t  POINTER \t 4 Bytes \t\t 8 Bytes\n";
	for (i=0;i<4;i++)
	{
		*(pint+i)=2*i+11;
		dArr[i]=(2*i+11.0)/2;	// 11.0
		cout << "\tPOINTER+" << i << "\t" << &iArr[i] << "\t" << iArr[i] << "\t" << pdbl+i << "\t" << *(pdbl+i) << endl;
	}
	// Варианты обращения к элементам массива
	cout << iArr[2] << "\t" << *(pint+1) << "\t" << *(3+pint) << "\t" << 4[iArr] << endl;
	cout << *(iArr+1) << "\t" << 2[pint] << endl;
	for(i=0;i<4;i++)
		cout << i[pint] << endl;

	cout << "\t\t" << *(iArr+2) << "\t" << *iArr+2 << endl; // приоритет
} 
