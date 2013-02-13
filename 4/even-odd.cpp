#include <iostream>
#include <locale>
#include "even-odd.h"

// ������� ���������
/*
bool iseven(int); // �� ���� ������ ������ �����, � ���������� �����: ������ ��� ��� ���
bool ispositive(int); // ������������� �����? 
bool isnegative(int); // ������������� �����?
*/

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	// � ����� ������ ����� �� ��� ���, ���� �� ������ 0
	int num;
	while(1){ // ����������� ����
		cout << "\nEnter the number:\n";
		cin >> num;
		// ���� ����� ������, �� � �������, ��� ��� ������
		if (iseven(num)) {
			cout << "1. Even\n";
		}
		else { // � ��������� ������ ����� ���� ������ 1� ��������� -- ��������
			cout << "1. Odd\n";
		}
		if (ispositive(num)){ // �������� �� ���������������
			cout << "2. Positive\n";
		}
		else if (isnegative(num)){ // �������� �� ���������������
			cout << "2.Negative\n";
		}
		else { // �� �������� �������� ����� �� �����
			cout << "NULL!\n";
			break;
		}
	}

	return 0;
}

// ������� ���������� �������

bool iseven(int x) {
	if (!(x%2)) // (x%2==0)
		return true;
	return false;
}

bool ispositive(int a) {
	if (a>0)
		return true;
	return false;
}

bool isnegative(int num) { return ( num<0 ? true:  false ); }

