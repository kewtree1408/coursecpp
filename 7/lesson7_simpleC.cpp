#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	char hello[] = "Hello, C++!\n";
	char firstName[20];
	char secondName[20];
	char address[80];
	
	// ��� � ������
	cout << hello;
	cout << "\nEnter your first name: ";
	cin >> firstName;
	// ����� printf/scanf
	printf("\nEnter your second name: ");
	scanf("%s",secondName);
	// ����� puts/gets (put string, get string) -- �������� ������\ ����� ������
	puts("Enter your address: ");
	getchar(); // ���� ����� �� ��������, �� � �������� ������� ����� ���� ������� ������, 
	//������� �� ����� ����� �� ����� �������
	gets(address);
	 
	cout << "--------------------\n\n";
	
	printf("Dear, %s %s!!!\n\tI know you live in %s.\n\n",firstName,secondName,address);
	
	return 0;
}
