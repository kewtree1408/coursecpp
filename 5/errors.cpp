#include <iostream>

using namespace std;

int *global;

void Error1() {
	int a=100000;
	int *pa;
	
	cout << "a = " << a << endl;
	cout << "*pa = " << *pa << endl;
	cout << "pa = " << pa << endl;
	
// 	pa = &a; // ��� �����
	*pa = a;
	
	cout << "pa = " << pa << endl;
	cout << "*pa = " << *pa << endl;
	
}

void Error2() {
	cout << "global = " << global << endl;
	cout << "*global = " << *global << endl;
}

void Error3() {
	int *a=reinterpret_cast<int*>(100);
	cout << *a << endl;
// 	*a = 100;
}

int main() {
	
// 	Error1(); // ������������������ ��������� (� ������ �� ��������, � � ������ ����� ��������)
// 	Error2(); // ���������� ��������� -- �������, ��� ����� = 0
// 	Error3(); // ������� ��������� ��������� ���-�� ��� ��������� ����������
	
	return 0;
}