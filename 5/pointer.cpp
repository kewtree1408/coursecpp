#include <iostream>

using namespace std;

int main()
{
	int  myAge;     //����������
	int * pAge=0;   //���������

	cout << "Enter your Age:\n";
	cin >> myAge;
	cout << "\nSET: pAge = &myAge\n\n"; // �������� � ����� �� ���� �����
	pAge = &myAge;  // � ��������� pAge �������� ����� myAge
	
	cout << "myAge = " << myAge << endl;   //��������� ��������
	cout << "*pAge = " << *pAge << endl; //��������� �������� ����� ��������

	cout << "Enter *pAge:\n";
	cin >> *pAge;

	cout << "myAge = " << myAge << endl;   //����� ��������
	cout << "*pAge = " << *pAge << endl; //����� �������� ����� ��������

	cout << "Change your age:\n";
	cin >> myAge;
	
	cout << "myAge = " << myAge << endl;   //����� ��������
	cout << "*pAge = " << *pAge << endl;   //����� �������� ����� ��������
	
	cout << "Addres of myAge and pAge:\n";
	cout << "&myAge = " << &myAge << "\tpAge = " << pAge << "\n\n"; //�������, ��� ������ ����������� � ����� � ��� �� �������

	return 0;
}
// ���������� myAge ���� int � ����������-��������� pAge ��  int � ��� ��� ������� ����� � ��� �� ����������. ���������� myAge ������������ ������ ����� ��������, � �������� �&� ������������ ��� ��������� ������ ���� ����������. ���������� pAge � ������������ ������ ����� �����, � �������� �*� ������ ��� ��������� �������� �� ����� ������. ������� *pAge �  myAge �������� � ��������� *pAge ����� ������������ ����� ����� ��� � ���������� ���� int.
// ����������-��������� ������� �� ������ ������ ����������. ��� ������ ��������� �� ������������ ��� ������. ��� ��������� �������� ����������� ������� ������ ���������� ��� �������, ����� �������� ��������� ��������. ��������, ����� ���������� ���� int �������� ����� ��� � ����� ���������� ���� double, �� ��� ����� int � double ��������� ��������� ���������� ������ � ��������� ���������� ������� ��� �������� ��������. ���� ����������-��������� ����� ���������� ������ (������ 4 �����).
