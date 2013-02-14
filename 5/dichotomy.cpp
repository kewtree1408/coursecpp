#include <iostream>
#include <cmath>

using namespace std;

inline double epsilon(); 
double dichotomy (double , double , double (*nameFunc)(double), double ); 
inline double F1(double ); 
inline double F2(double ); 
inline double F3(double ); 

int main () {
    double e=epsilon()*1000000;

    double a1=2.0;
    double b1=3.0;

	double a2=0.0;
    double b2=2.0;

    double a3=0.4;
    double b3=1.0;

	cout << "DICHOTIMY\n";
	cout << "root of F1 = " << dichotomy(a1,b1,F1,e) << endl;
	cout << "root of F2 = " << dichotomy(a2,b2,F2,e) << endl;
	cout << "root of F3 = " << dichotomy(a3,b3,F3,e) << endl;

    return 0;
}

double epsilon()
{
    double e=1.0;
    while ((e+1)>1)
        e/=2.0;
    return e;
}

double dichotomy (double a, double b, double (*F)(double), double e) {
    double x;
    while (fabs(b-a)>e) {
        x=(b+a)/2;
        if (F(a)*F(x)>0)
            a=x;
        else b=x;
    }
    return x;
}

double F1 (double x)
{
    return 3*sin(sqrt(x))+0.35*x-3.8;
}

double F2(double x)
{
    return 0.25*x*x*x+x-1.2502;
}

double F3(double x)
{
    return x+sqrt(x)+pow(x,1.0/3.0)-2.5;
}
