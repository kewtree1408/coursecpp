#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	char hello[] = "Hello, C++!\n";
	char firstName[20];
	char secondName[20];
	char address[80];
	
	// как и раньше
	cout << hello;
	cout << "\nEnter your first name: ";
	cin >> firstName;
	// через printf/scanf
	printf("\nEnter your second name: ");
	scanf("%s",secondName);
	// через puts/gets (put string, get string) -- положить строку\ взять строку
	puts("Enter your address: ");
	getchar(); // если этого не написать, то в качестве адресса будет взят перевод строки, 
	//который мы ввели сразу же после фамилии
	gets(address);
	 
	cout << "--------------------\n\n";
	
	printf("Dear, %s %s!!!\n\tI know you live in %s.\n\n",firstName,secondName,address);
	
	return 0;
}
