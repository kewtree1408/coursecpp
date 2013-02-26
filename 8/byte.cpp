#include <iostream>

using namespace std;

class Memory {
public:
	Memory() :  b(0), Kb(0) 
	  { }
	Memory (int _b, int _Kb) : 
		b(_b), Kb(_Kb)
	 {}
	void get() {
		cout << "Enter the count of bytes and kilobytes: ";
		cin >> b >> Kb;
	}
	void show() {
		cout << b << "b\t "<< Kb << "Kb \n";
	}
private:
	int b;
	int Kb;
};

int main() {
	Memory mem1(5,6), mem2;
	Memory mem3 = mem1;
	Memory mem4(mem2);
	mem1.show();
	mem2.show();
	mem3.show();
	mem4.show();
	return 0;
}