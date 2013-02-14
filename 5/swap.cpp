#include <iostream>

// Prototype
void swap_val(int, int);
void swap_ref(int&, int&);
void swap_ptr(int*, int*);
void swap_xor(int&, int&);

using namespace std;

int main() {
	int a,b;
	cout << "Enter 2 number\n";
	cin >> a >> b;
	
	cout << "Check swap:\n";
	swap_val(a,b);
	cout << "1) a = " << a <<"\tb = " << b << endl;
	swap_ref(a,b);
	cout << "2) a = " << a <<"\tb = " << b << endl;
	swap_ptr(&a,&b);
	cout << "3) a = " << a <<"\tb = " << b << endl;
	swap_xor(a,b);
// 	a ^= b ^= a^= b;
	cout << "4) a = " << a <<"\tb = " << b << endl;	
	
	return 0;
}

// Realise
//Перестановка двух чисел  
void swap_val (int x, int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}

void swap_ref (int &x, int &y) {
	int temp;
	temp = x;
	x = y;
	y = temp;
}

void swap_ptr (int *x, int *y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

// without tmp variable
// 0011 1100
void swap_xor(int &x, int &y) {
// 	x = x ^ y; //x=1111 
// 	y = y ^ x; //1100^1111==0011
// 	x = x ^ y; // 1111^0011 = 1100
//	x^=(y^=(x^=y)); // bug
	x^=y^=x^=y;
}