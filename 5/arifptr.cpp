#include <iostream> 
using namespace std;

int main() 
{
	double dNumber;          //объ€вление переменной
	double *dptr = &dNumber; //объ€вление указател€ и инициализаци€ его
	double *dptr0;           //дл€ хранени€ начального адреса

	dptr0 = dptr;            //сохраним начальное значение указател€

	cout << "\nInitial: dptr = " << dptr << " " << (int) dptr << endl;
	cout << "Increment: ++dptr = " << ++dptr << " " << (int) dptr << endl;
	cout << "Number of elements = "<< dptr - dptr0 << "\n\n";
	cout << "Increment:  ++dptr = " << ++dptr <<"  " << (int) dptr << endl;
	cout << "Number of elements = " << dptr - dptr0 << "\n\n";
	// ѕосмотрим, что значени€ совпали
	cout << "dptr0 = " << dptr0 << "\tdptr0 + 2  = " << dptr0 + 2 <<endl;
	cout <<" \t\t\tdptr = " << dptr << "\n\n";
	//јналогично
	cout << "USE INT:\n dptr0 = " << int(dptr0) << "\t dptr0 + 10  = " << (int)(dptr0 + 10) <<endl;
	cout <<" \t\t\tdptr = " << (int)(++++++++++++++++dptr) << "\n\n";

	return 0;
} 