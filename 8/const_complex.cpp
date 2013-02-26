#include <iostream>

using namespace std;

class Complex{

public:
	Complex() : re(0), im(0) 
	{ }
	Complex(int _re, int _im) : 
		re(_re), im(_im)
	{ }
	void show() const{
		cout << re << "+" << im << "i" << endl; 
	}
	void get() {
		cout << "Enter the complex number: "<<endl;
		cin >> re >> im;
	}
	Complex add(const Complex &) const;

private:
	int re;
	int im;
};

Complex
Complex :: add(const Complex& c2) const
{
	Complex tmp;
	tmp.re = re + c2.re;
	tmp.im = im + c2.im;
	return tmp;
}

int main() {
	Complex c1, c2(5,6), c3;
	c1.get();
	c3 = c1.add(c2);
	c1.show();
	c2.show();
	c3.show();
	return 0;
}
