//����������, ������� ���� �������� �� ������ ��� ��������. 
//������� ���������, ������� �� ���� ����� ��������� ������� ���� (���� � �����) � 
//���� ������ ��� ��������, � �� ������ ������� ���-�� ����, ������� ����� ��������� �� ��. 
//����� ��������� ������, ����� �������, ��� ��� ���� � ��� �� ����������.

#include <iostream>
using namespace std;
int main() {
	int c_month, c_day; // current month, current day
	int b_month, b_day; // birthday month, birdthday day
	int day_per_month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	
	//~ ������ ������� ���� � ��c��, � ����� ���� ��
	cout << "Enter current data with space (day, month): " << endl;
	cin >> c_day >> c_month;
	cout << "Enter birthday data with space (day, month): " << endl;
	cin >> b_day >> b_month;
	
	//~ ������ ��������� ����������
	int current=c_day, birth=b_day;
	//~ ������� ���-�� ���� �� ������ ���� �� ������� ����
	for (int i=0; i<c_month-1; i++) {
		current += day_per_month[i];
	}
	//~ ������� ���-�� ���� �� ������ ���� �� ������ ��
	for (int i=0; i<b_month-1; i++) {
		birth += day_per_month[i];
	}
	
	//~ ������� ���������
	int result = birth-current;
	//~ ���� �������� ������������� ��������, ������ �������� ������� 
	//~ ����� ������ � ����� ��������� � ����� ����� 365 -- ���-�� ����
	if (result < 0) result += 365;
	cout << "Before birthday remains: " << result << endl; 

	return 0;
}
