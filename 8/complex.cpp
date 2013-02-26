#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

struct Complex {
	float x;
	float y;
	void show() {
		cout << x << "+" << y << "i ";
	}
	double mod();
};

double Complex :: mod() {
	return pow(static_cast<double>(x*x+y*y), 0.5);
}

void find(Complex* numbs, int n, double& max, int& index) {
	max = 0;
	for (int i=0; i<n; i++) {
		/*int tmp = (numbs[i].x*numbs[i].x+numbs[i].y*numbs[i].y);
		double sq_mod = pow(double(tmp),0.5);*/
		//и такая.. нежели предыдущая
		double mod = numbs[i].mod();
		if (mod > max) {
			max = mod;
			index = i+1;
		}
	}
}

int main() {
	cout << "Enter the count of complex-number: ";
	int n;
	cin >> n;
	Complex *numbs = new Complex [n]; 
	
	for (int i=0; i<n; i++) {
		numbs[i].x = rand()%10+1;
		numbs[i].y = rand()%5+2;
		//cout << numbs[i].x << "+" << numbs[i].y << "i ";
		//такая запись понятнее
		numbs[i].show();
	}
	cout << endl;
	
	double max;
	int idx;
	// передача по ссылке, 
	// find max from modules
	find(numbs,n,max,idx);
	cout << "Max = " << max << "\n" << "idx = " << idx << endl; 
	
	return 0;
}