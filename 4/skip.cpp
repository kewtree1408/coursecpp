// ������ �� ������������� ���������� �� ���������
#include <iostream>  // ����������� ������������� �����

//������� ��������� ����� �����
// void Skip (int EmptyLines = 5); // 5  - �������� �� ���������
void Skip (int = 5); // 5  - �������� �� ���������

using namespace std;

int main()             // �������� ������� �������
{
	int jump;
	cout << "Enter positive integer value: ";
	cin  >> jump;
	cout << "With parametr\n";
	Skip (jump);   //�������� ����
	cout << "WithOUT parameter\n";
	Skip ();       //������ ���������� ������, ������� �� ���������
	return 0;          
}


void Skip (int emptyLines) {
	//int i;
	//for (i = 1; i <= emptyLines; i++)
	//	cout << i << endl;  //����� ������
	// ��������� ������ ���:
	for (int i=0; i<emptyLines; ++i)
		cout << i+1 << endl;
}
