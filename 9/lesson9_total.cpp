#include <iostream>

using namespace std;

class Info {
public:
	Info() {
		total++;
		id = total;
	}
	~Info() {
		total--;
		cout << "Delete id " << total << endl;
	}
	void showid() {
		cout << "Id = " << id << endl;
	}
	static void showtotal() {
		cout << "Total = " << total << endl;
	}
private:
	static int total;
	int id;
};

int Info :: total = 0;

int main() {
	Info in1;
	Info::showtotal();  // метод выдает один и тот же результат для всех объектов класса
	in1.showid();

	Info in2, in3;
	Info::showtotal();
	in2.showid();

	Info::showtotal();
	in3.showid();

	return 0;
}