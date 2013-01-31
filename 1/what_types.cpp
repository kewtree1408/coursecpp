#include <iostream>
// #include <climits>
// #include <iomanip>

using namespace std;

int main(){
	cout << "\t\tTypes: sizeof(in bytes), limits" << endl;
	cout << "INTEGER" << endl;

	cout << "\tsizeof(short int) = " << sizeof(short int) << endl;
	cout << "\t\t(" << -__SHRT_MAX__ - 1 << ";" << __SHRT_MAX__ <<")" << endl;

	cout << "\tsizeof(unsigned short int) = " << sizeof(unsigned short int) << endl;
	cout << "\t\t(" << 0 << ";" << __SHRT_MAX__ * 2U + 1 << ")" << endl;

	cout << "\tsizeof(int) = " << sizeof(int) << endl;
	cout << "\t\t(" << -__INT_MAX__-1 << ";" << __INT_MAX__ <<")"<< endl;

	cout << "\tsizeof(unsigned int) = " << sizeof(int) << endl;
	cout << "\t\t(" << 0 << ";" << __INT_MAX__ * 2U + 1 <<")"<< endl;

	cout << "\tsizeof(long int) = " << sizeof(long) << endl;
	cout << "\t\t(" << -__LONG_MAX__ - 1 << ";" << __LONG_MAX__ <<")"<< endl;

	cout << "\tsizeof(unsigned long int) = " << sizeof(unsigned long) << endl;
	cout << "\t\t(" << 0 << ";" << __LONG_MAX__ * 2UL + 1 <<")"<< endl;

	cout << "\tsizeof(long long int) = " << sizeof(long long) << endl;
	cout << "\t\t(" << -__LONG_LONG_MAX__-1 << ";" << __LONG_LONG_MAX__ <<")"<< endl;

	cout << "\tsizeof(unsigned long long int) = " << sizeof(unsigned long long int) << endl;
	cout << "\t\t(" << 0 << ";" << __LONG_LONG_MAX__ * 2ULL + 1 <<")"<< endl;


	cout << "FLOAT" << endl;

	cout << "\tsizeof(float) = " << sizeof(float) << endl;
	cout << "\t\t(" << __FLT_MIN__ << ";" << __FLT_MAX__ <<")"<< endl;

	cout << "DOUBLE" << endl;

	cout << "\tsizeof(double) = " << sizeof(double) << endl;
	cout << "\t\t(" << __DBL_MIN__ << ";" << __DBL_MAX__ <<")"<< endl;

	cout << "\tsizeof(long double) = " << sizeof(long double) << endl;
	cout << "\t\t(" << __LDBL_MIN__ << ";" <<  __LDBL_MAX__ <<")"<< endl;

	cout << "CHAR" << endl;

	cout << "\tsizeof(char) = " << sizeof(char) << endl;
	cout << "\t\t(" << -__SCHAR_MAX__ - 1 << ";" << __SCHAR_MAX__ <<")"<< endl;

	cout << "\tsizeof(unsigned char) = " << sizeof(unsigned char) << endl;
	cout << "\t\t(" << 0 << ";" << __SCHAR_MAX__ * 2U + 1 <<")"<< endl;

// short	int : -__SHRT_MAX__ - 1; __SHRT_MAX__
// unsigned short int:	0; __SHRT_MAX__ * 2U + 1;
// 	int -__INT_MAX__ - 1; __INT_MAX__
// 	unsigned int: 0;__INT_MAX__ * 2U + 1
// 	long: -__LONG_MAX__ - 1; __LONG_MAX__;
// 	unsigned long: 0; __LONG_MAX__ * 2UL + 1;
// 	unsigned long long 0;__LONG_LONG_MAX__ * 2ULL + 1;

// 	float : __FLT_MIN__; __FLT_MAX__;
// 	double: __DBL_MIN__; __DBL_MAX__
// 	long double: __LDBL_MIN__; __LDBL_MAX__

// 	char: -__SCHAR_MAX__ - 1 ; __SCHAR_MAX__
// 	unsigned char: 0; __SCHAR_MAX__ * 2U + 1;

	return 0;
}
