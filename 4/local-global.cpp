#include <iostream>

int Test = 500; //глобальная переменная
void PrintTest(void);

using namespace std;

int main() {
	int Test = 400;  //локализована в блоке main
	cout << "\n1. main: Local in main() Test = " << Test << "\n\n";

	PrintTest();	  //вызов функции печати глобальной переменной

	cout << "6. main: Local in main() Test = " << Test << "\n\n";

	// :: - операция разрешения области видимости 
	cout << "7. main: Global for main() ::Test = " << ::Test << "\n\n";
	
	//добавляем новый блок с еще одной локальной переменной Test
	{  //+++ начало области действия и области видимости
		int Test = 200;
		cout << "8. main: Local in main() from block Test = " << Test << "\n\n";

		// :: - операция разрешения области видимости действует ТОЛЬКО 
		// на глобальные переменные, а не на переменные в охватывающем блоке
		cout << "9. main: Global for main() from block ::Test = " << ::Test << "\n\n"; 
		//видим 501, а не 400

	}  //--- конец области действия и области видимости Test = 200
 
	cout << "10. main: Local in main() AFTER BLOCK Test = " << Test << "\n\n";

	return 0;           // возврат из функции в операционную систему
}                      // конец блока и main() соответственно

void PrintTest (void) {
	cout << "2. PrintTest :  Global for PrintTest() Test = " << Test << "\n\n";
	//добавляем новый блок с еще одной локальной переменной Test
	{  //+++ начало области действия и области видимости
		int Test = 300;

		cout << "3. PrintTest: Local from block Test = " << Test << "\n\n";
		
		// :: - операция разрешения области видимости 
		cout << "4. PrintTest: Global for PrintTest() from block ::Test = " 
			<< ::Test << "\n\n";

		//изменим глобальную переменную
		::Test++;

		cout << "5. PrintTest :  Global for PrintTest() from block CHANGE ::Test = " 
			<< ::Test << "\n\n";  //изменения видны
	}
}
