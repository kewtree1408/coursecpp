// inheritance

#include <iostream>

using namespace std;

class Counter{
public:
	Counter() : count(0) 
	{}
	Counter (unsigned int c) : count(c)
	{}
	unsigned int get() {
		return count;
	}
	void inc() {
		count++;
	}

protected:
	unsigned int count;
};

class CountDn : public Counter{
public:
	void dec() {
		if (count != 0) count --;
		else cout << "Stop dec() " << endl;
	}
};

int main() {
	Counter c;
	CountDn cd1,cd2;
	cd1.inc();
	cd2.inc();
	cd2.inc();
	cout << cd1.get() << " " << cd2.get() << endl;

	c.inc();
	cout << c.get() << endl;
	//c.dec();
	return 0;
}