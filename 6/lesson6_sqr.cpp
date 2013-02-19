#include <iostream>

void sqr1 (int Vec[], int sizeVec);   //����� ������
void sqr2 (int *pVec, int sizeVec);   //����� ��������� �� ������
void sqr3 (int &rVec, int sizeVec);   //����� ������ �� ������

using namespace std;

void print(int *mass, int N) {
	for (int i=0; i<N; i++) {
		cout << mass[i] << " ";
	}
	cout << endl;
}

int main() {
	const int Nmax = 10;   //������������ ������ �������
	int AVec[Nmax];       //����� ������
	
	cout << "Source Array: "; 
	for (int i = 0; i < Nmax; i++) {
		AVec[i] = i;
		cout << AVec[i] << " ";
	}
	cout << endl;

	//~ ��������, ��� ������ ������� ����� ������ � ���:
	cout << "Sizeof massive:" << sizeof(AVec) << "/" <<sizeof(int) <<" = "
		                      << sizeof(AVec)/sizeof(int) << endl;
	//~ ��������� �����, � ����� �� ����� �� ���������� ������ �������, � ������� ��� ������ ���?
	//~ ���������:
	sqr1(AVec,Nmax);
	print(AVec,Nmax);
	//~ �����, ��� ���� ������� �� ��������, �� �� �������� ������ ���������, � �� ��� ������
	//~ � ������ ��������� sizeof(*int) == 4 ����� 4 ������ 
	
	sqr2(AVec,Nmax);
	print(AVec,Nmax);

	sqr3(*AVec,Nmax); // ������: sqr3(AVec[0], Nmax);
	print(AVec,Nmax);

	return 0;
}

//~ ���������� � ������� ������� �������� ������� � ��� ���������, ��� ����� � ������� main() 
void sqr1(int Vec[], int sizeVec) {
	cout << "In function sqr1:" << sizeof(Vec) << "/" <<sizeof(int) <<" = " << sizeof(Vec)/sizeof(int) << endl;
	cout << "With massive" << endl;
	for (int i=0; i<sizeVec; i++)
		Vec[i] = Vec[i]*Vec[i];
}

void sqr2(int* pVec, int sizeVec) {
	cout << "With pointer" << endl;
	for (int i=0; i<sizeVec; i++)
		pVec[i] = (*(pVec+i)) * (*(pVec+i));
}

void sqr3 (int &rVec, int sizeVec) {
	cout << "With reference:" << endl;
	for (int i=0; i<sizeVec; i++)
		*(&rVec+i) = (*(&rVec+i)) * (*(&rVec+i));
}
