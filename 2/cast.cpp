#include <iostream>
using namespace std;
int main() {
     int intVar = 1500000000; // 1 500 000 000
     cout << "intVar = " << ((intVar * 100) / 10) << endl; // �������� ���������
     cout << "intVar = " << ((static_cast<long double>(intVar) * 100) / 10) << endl; // ������ ���������
     return 0;
}
