#include <iostream>
#include <locale> 

// ����������� ������� ��������
float getavg(float);

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian"); // ������������� ���������� ���� ������� ����
	float numb; // ����������, � ������� ������ ���� ��������
	float average; // ������� ��������
	
	while(true) { // � ����������� ����� ��������� ���� ���������
		cout << "������� ����� (0 - ����� �� ���������): " << endl;	
		cin >> numb;
		if (numb==0) // (!numb) �� 0 -- �����
			break;
		average = getavg(numb);
		cout << "������� ��������: " << average << endl;
	}
}

float getavg(float ai){
	// ����������� ���������� ������������� �������� ��� ����������
	static float total=0; // �������� ���������
	static int count=0; // �����������
	
	total+=ai;
	count++;
	
	cout << total << " / " << count << " = " << total/count << endl; 
	return total/count; // total/++count;
}