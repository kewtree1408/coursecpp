// �������� ���������� �� ��������, ������, ���������.
// �������� ���������� �� ��������.  ��������� ���    
// �������� ���������� �� ������.    ��������� ����   
// �������� ���������� �� ���������. ��������� ����   
// �������� ���������� �� ��������� ��� ����� ��������� 

#include <iostream>

int globVar=4;

// int x � int &x  - ��� ������� ����� � ��� �� ����������:
//  ���  � �������������� �����

// ��������� �������
void   func1Val(int  x,  int  y); //���������� ��������
void   func2Ref(int &x,  int &y); //���������� ������
void   func3Ptr(int *x,  int *y); //���������� ���������

//���������� ��������� ��� ����� �����������
void func4_constPtr( const int *x, const int *y);//��� ����� ���������

using namespace std;

int main() {
	int a=1, b=2;

	cout << "\tBefore functions:\n";//��������� ���
	cout <<"a = " << a <<"\tb = "<< b <<"\tglobVar = " << globVar << endl;
	
	cout << "\tExecute func1(by value):\n";
	func1Val(a,b);   // �������� ������ �� ��������
	cout <<"a = " << a <<"\tb = "<< b <<"\tglobVar = " << globVar << endl;

	cout << "\tExecute func2(by reference):\n";
	func2Ref(a,b);   // �������� ������ �� ������
	cout <<"a = " << a <<"\tb = "<< b <<"\tglobVar = " << globVar << endl;

	cout << "\tExecute func3(by poiter):\n";
	func3Ptr(&a,&b);   // �������� ������ �� ���������
	cout <<"a = " << a <<"\tb = "<< b <<"\tglobVar = " << globVar << endl;

	//���������� ��������� ��� ����� �����������
// 	func4_constPtr(&a, &b);  // ��������� �� ������ !!!

	return 0; 
}

void func1Val(int x, int y) { 
	x = x + 10;  //��������� �����
	y = y + 10;  //��������� �����
	globVar = globVar + 10;  //��������� ���������� ����������
}

void func2Ref (int &x, int &y) { 
	x = x + 10;  //��������� ���������
	y = y + 10;  //��������� ���������
	globVar = globVar + 10;  //��������� ���������� ����������
}


void func3Ptr(int *x, int *y) { 
	*x = *x + 10;  //��������� ���������
	*y = *y + 10;  //��������� ���������
	globVar = globVar + 10;  //��������� ���������� ����������
}

/*
//���������� ��������� �� ����������� ��������
void func4_constPtr( const int *x, const int *y) { 
	*x = *x + 10;  //��������� ��������� ������ !!
	*y = *y + 10;  //��������� ��������� ������ !!
	globVar = globVar + 10;  //��������� ���������� ����������
}
*/