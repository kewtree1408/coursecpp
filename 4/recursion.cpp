#include <iostream>

using namespace std;

int fact(int);

int main() {
	cout << "Enter the factorial:\n";
	int n;
	cin >> n;

	cout << "Factorial = " << fact(n) << endl;
	return 0;
}

int fact(int numb) {
	if (numb==1)
		return 1; // база индукции(рекурсии)
	return numb*fact(numb-1);
}