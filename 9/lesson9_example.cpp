#include <iostream>

using namespace std;

class A {
public:
	int pubDataA;
protected:
	int protDataA;
private:
	int privDataA;
};

class B : public A {
public:
	void func() {
		int a;
		//a = privDataA;
		a = protDataA;
		a = pubDataA;
	}
};

class C: private A {
public:
	void func() {
		int a;
		//a = privDataA;
		a = protDataA;
		a = pubDataA;
	}
};

int main() {
	int a;
	B objB;
	/*objB.privDataA;
	objB.protDataA;*/
	objB.pubDataA;

	C objC;
	/*objC.privDataA;
	objC.protDataA;
	objC.pubDataA;*/

	return 0;
}