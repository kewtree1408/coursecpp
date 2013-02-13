#include <iostream>

void RepeatChar();
void RepeatChar(char ch);
void RepeatChar(char ch, int n);

using namespace std;

int main() {
	char ch;
	int n;

	cout << "REPEAT CHAR" << endl;
	RepeatChar();

	cout << "Enter the symbol: " << endl;
	cin >> ch;
	RepeatChar(ch);

	cout << "Enter the symbol and number of repeat with space" << endl;
	cin >> ch >> n;
	RepeatChar(ch,n);

	cout << "Finish\n";
	return 0;
}

void RepeatChar() {
	for (int i=0; i<70; i++)
		cout << '+';
	cout << endl;
}

void RepeatChar(char ch) {
	for (int j=0; j<70; j++)
		cout << ch;
	cout << endl;
}

void RepeatChar(char ch, int n){
	for (int k=0; k<n; k++)
		cout << ch;
	cout << endl;
}
