#include <iostream>

using namespace std;

class simple {
private:
	int somedata;
public:
	void setdata(int d) {
		somedata = d;
	}
	void showdata() {
		cout << "The data of class = " << somedata << endl;
	}
};

int main() {
	simple cl1, cl2;
	cl1.setdata(100);
	cl2.setdata(60);
	cl2.showdata();
	cl1.showdata();
	return 0;
}


