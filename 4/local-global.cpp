#include <iostream>

int Test = 500; //���������� ����������
void PrintTest(void);

using namespace std;

int main() {
	int Test = 400;  //������������ � ����� main
	cout << "\n1. main: Local in main() Test = " << Test << "\n\n";

	PrintTest();	  //����� ������� ������ ���������� ����������

	cout << "6. main: Local in main() Test = " << Test << "\n\n";

	// :: - �������� ���������� ������� ��������� 
	cout << "7. main: Global for main() ::Test = " << ::Test << "\n\n";
	
	//��������� ����� ���� � ��� ����� ��������� ���������� Test
	{  //+++ ������ ������� �������� � ������� ���������
		int Test = 200;
		cout << "8. main: Local in main() from block Test = " << Test << "\n\n";

		// :: - �������� ���������� ������� ��������� ��������� ������ 
		// �� ���������� ����������, � �� �� ���������� � ������������ �����
		cout << "9. main: Global for main() from block ::Test = " << ::Test << "\n\n"; 
		//����� 501, � �� 400

	}  //--- ����� ������� �������� � ������� ��������� Test = 200
 
	cout << "10. main: Local in main() AFTER BLOCK Test = " << Test << "\n\n";

	return 0;           // ������� �� ������� � ������������ �������
}                      // ����� ����� � main() ��������������

void PrintTest (void) {
	cout << "2. PrintTest :  Global for PrintTest() Test = " << Test << "\n\n";
	//��������� ����� ���� � ��� ����� ��������� ���������� Test
	{  //+++ ������ ������� �������� � ������� ���������
		int Test = 300;

		cout << "3. PrintTest: Local from block Test = " << Test << "\n\n";
		
		// :: - �������� ���������� ������� ��������� 
		cout << "4. PrintTest: Global for PrintTest() from block ::Test = " 
			<< ::Test << "\n\n";

		//������� ���������� ����������
		::Test++;

		cout << "5. PrintTest :  Global for PrintTest() from block CHANGE ::Test = " 
			<< ::Test << "\n\n";  //��������� �����
	}
}
