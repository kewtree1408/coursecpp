#include <iostream> 
using namespace std;

int main() 
{
	double dNumber;          //���������� ����������
	double *dptr = &dNumber; //���������� ��������� � ������������� ���
	double *dptr0;           //��� �������� ���������� ������

	dptr0 = dptr;            //�������� ��������� �������� ���������

	cout << "\nInitial: dptr = " << dptr << " " << (int) dptr << endl;
	cout << "Increment: ++dptr = " << ++dptr << " " << (int) dptr << endl;
	cout << "Number of elements = "<< dptr - dptr0 << "\n\n";
	cout << "Increment:  ++dptr = " << ++dptr <<"  " << (int) dptr << endl;
	cout << "Number of elements = " << dptr - dptr0 << "\n\n";
	// ���������, ��� �������� �������
	cout << "dptr0 = " << dptr0 << "\tdptr0 + 2  = " << dptr0 + 2 <<endl;
	cout <<" \t\t\tdptr = " << dptr << "\n\n";
	//����������
	cout << "USE INT:\n dptr0 = " << int(dptr0) << "\t dptr0 + 10  = " << (int)(dptr0 + 10) <<endl;
	cout <<" \t\t\tdptr = " << (int)(++++++++++++++++dptr) << "\n\n";

	return 0;
} 