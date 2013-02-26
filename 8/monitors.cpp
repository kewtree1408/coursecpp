#include <iostream>
#include <string.h>

using namespace std;

class Monitor {
public:

	void setParams(const char* _name, int _diag, int _time, const char* _type) {
		strcpy(name, _name);
		diagonal = _diag;
		responseTime = _time;
		strcpy(matrixType, _type);
	}

	void getParams() {
		cout << "Enter the name of monitor" << endl;
		cin >> name;
		cout << "Enter the diagonal, response time and matrix of monitor: " << endl;
		cin >> diagonal >> responseTime >> matrixType;
		cout << "Ok." << endl;
	}

	void showParams() {
		cout << "New Monitor: " << name << endl;
		cout << "Diagonal: "<< diagonal;
		cout << "\tResponse Time: "<<responseTime;
		cout << "\tMatrix of Type: " << matrixType << endl;
	}

private:
	char name[20];
	int diagonal;
	int responseTime;
	char matrixType[8];
};

int main() {
	Monitor m1, m2;
	m1.setParams("DELL",21,8,"IPS");
	m2.getParams();
	m1.showParams();
	m2.showParams();
	return 0;
}
