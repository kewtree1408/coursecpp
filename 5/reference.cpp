//��������� �� �������� ����� ����� � ������������ �����
#include <iostream>

using namespace std;

void intfrac(double, double&, double&);
void intfrac(double, double*, double*);

int main() {
	double number;
	double intpart, fracpart; // ���������� ��� ����� � ������� �����
	for(;;){
		cout << "\nEnter the number(for exit -- enter the 0): ";
		cin >> number;
		if (number == 0.0)
			break;
		intfrac(number, intpart, fracpart);
		cout << "After &:\nThe integer part is " << intpart << endl;
		cout << "The fraction part is " << fracpart << endl;
		intfrac(number, &intpart, &fracpart);
		cout << "After *:\nThe integer part is " << intpart << endl;
		cout << "The fraction part is " << fracpart << endl;
	}
	return 0;
}

void intfrac(double n, double& intp, double& fracp){
	// �������, ��� ��� ������ ����� ������, �� ��� ����� �� �����, �.�. � ��� ��������� ������ ����������: �� �������� ������� ������� ���, � �������� ���������� ������� �����. ���������.
	long tmpIntPart = static_cast<long>(n); // �������� ����� ����� ��� ������ ���������� ���� (������ ������������ �����)
	
	intp = static_cast<double>(tmpIntPart);  
	fracp = n - intp;
}

void intfrac(double n, double* intp, double* fracp){
	long long tmpIntPart = static_cast<long long>(n); // �������� ����� ����� ��� ������ ���������� ���� (������ ������������ �����)
	
	*intp = static_cast<double>(tmpIntPart);  
	*fracp = n - *intp;
}