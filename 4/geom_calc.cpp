// В качестве простого примера рассмотрим калькулятор, но только не просто с операциями +, -,
// *,/. А создадим калькулятор, вычисляющий площадь одной из фигур: треугольника, квадрат, круга.
#include <iostream>
#include <cmath>
#include <ctype.h>

//
int gl = 5;
const double pi = 3.1415;
inline float Circle(float = gl);
inline float Triangle(float = gl);
inline float Square(float = gl);

using namespace std;

int main() {


	float side;
	char choise;

	cout << "Area Calculation\n";
	cout << "Enter the side: ";
	cin >> side;
	cout << "Enter the mode: ";
	cin >> choise;

	switch (tolower(choise)){
		case 'c':
			cout << Circle(side) << endl;
			break;
		case 't':
			cout << Triangle(side) << endl;
			break;
		case 's':
			cout << Square(side) << endl;
			break;
		default:
			cout << "Error choise\n";
	}
	
	return 0;
}

float Circle(float R) {
	return static_cast<float>(pi*pow(R,2));
}

float Triangle(float a) {
	 cout << "Right Triangle" << endl;
	 return static_cast<float>(sqrt(3.0)/4*a*a);
}

float Square(float a) {
	return a*a;
}

