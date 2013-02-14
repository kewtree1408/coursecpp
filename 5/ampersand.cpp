// ������ ������ ���������� ������ �����.
// � ������ ������, ��������� ������������ ����������, ����� ���������� �������� ��� 
// ����������� ��������, � ��� ����� � ��� ����������� ��������. 
// ������ ���������� ������ ����� �����.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	bool bVar = true;
	char chVar1 = 'W';
	char chVar2 = 'R';
	int iVar = 123;
	long longVar  = 65535; // 4 �����  
	double dVar = 3.1415926535;  //8 ����

// ������� ����� �������� ����� ����� ����
// ������� � ������������������ ������������� � � �����

	cout << "bVar = " << bVar;
	cout << "\tAddress of bVar = " << &bVar 
          << "\t" << (int)&bVar << endl;
					
	cout << "chVar1 = " << chVar1;
	cout << "\tAddress of chVar1 = " << &chVar1 // �� ����� ���������������� �����, �.�. cout �������� �������� � ���� ������, �������� � �� ����� ������������� 0 (�� ��� �� ����� �� ���� ����)
          << "\t" << int(&chVar1) << endl; // ��������� ������ ������ ���������� �����

	cout << "chVar2 = " << chVar2;
	cout << "\tAddress of chVar2 = " << &chVar2 
          << "\t" << (int) &chVar2 << endl;

	cout << "iVar = " << iVar;
	cout << "\tAddress of iVar = " << &iVar 
          <<"\t"<< reinterpret_cast <int> (&iVar) << endl;

	cout << "longVar = " << longVar;
	cout << "\tAddress of longVar = " << &longVar 
          <<"\t"<< (int) &longVar<< endl;
	
	cout << "dVar = " << dVar;
	cout << "\tAddress of dVar = " << &dVar 
          <<"\t"<< reinterpret_cast<int>(&dVar) << endl; // ���� ������������ ���� ��� ���������� ����, �� �� ������ ����� �� ������� warning �����������
	return 0;           
}