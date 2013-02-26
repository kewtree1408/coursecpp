#include <iostream>
#define MAX 1000
using namespace std;

class Distance {
public:
	Distance() : km(0), m(0.0) //конструктор без аргументов
	{ }
	Distance(int _km, float _m) : km(_km), m(_m) //конструктор с двумя аргументами
	{ }
	void get() {
		cout << "Enter the kilometers and meters: ";
		cin >> km >> m;
	}
	void show() const 
	{
		cout << m << " meters\t" << km << " kilometers\n";
	}
	Distance add(const Distance &) const; // сложение, прототип
private:
	int km;
	float m;
};

Distance 
Distance :: add(const Distance& d2) const
{
	Distance tmp;
	km = 0;
	d2.km = 0;
	tmp.km = km + d2.km;
	tmp.m = m + d2.m;
	while (tmp.m >= MAX) {
		tmp.m -= MAX;
		tmp.km++;
	}
	return tmp;
}

int main() {
	Distance d1, d2(8,100), d3;
	d1.get();
	d3 = d1.add(d2); // d3 = d1+d2
	d1.show();
	d2.show();
	d3.show();
	return 0;
}
