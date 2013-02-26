#include <iostream>

using namespace std;

class foo {

public:
	foo() 
	{ count ++; }
	int get() 
	{ return count; }

private:
	static int count;

};

int foo::count = 0;

int main() {
	foo f1, f2, f3;
	cout << f1.get() << endl;
	cout << f2.get() << endl;
	cout << f3.get() << endl;
	return 0;
}