#include <iostream>

using namespace std;

class Complex{

public:
	Complex() : re(0), im(0) 
	{ }
	Complex(int _re, int _im) : 
		re(_re), im(_im)
	{ }
	void show() {
		cout << re << "+" << im << "i" << endl; 
	}
	void get() {
		cout << "Enter the complex number: "<<endl;
		cin >> re >> im;
	}
	void add(Complex , Complex );

private:
	int re;
	int im;
};

void Complex :: add(Complex c1, Complex c2) {
	re = c1.re + c2.re;
	im = c1.im + c2.im;
}

int main() {
	Complex c1, c2(5,6), c3;
	c1.get();
	c3.add(c1,c2);
	c1.show();
	c2.show();
	c3.show();


	return 0;
}