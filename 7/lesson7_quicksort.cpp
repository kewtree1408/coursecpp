#include <iostream>

using namespace std;

//~ ����������� �������, ���� �������� -- ���� �������
void qsort(int *mass, int low, int high) {
	int x = mass[(low+high)/2]; // �������� ������� ������� -- ��������
	int i=low;
	int j=high;
	do {
		while (mass[i]<x) ++i; // ���� �������� ����� �����, �� �������������� ������
		while (mass[j]>x) --j; // ��� �������� ���� ����� �����, � ������ ��������������
		//~ ���� ������ ������ ���� ������, ��� ������ �����, ������ ��������� ���-�� �� ��
		//~ � �������� ����� ��������
		if (i<=j) {
			int tmp = mass[i];
			mass[i] = mass[j];
			mass[j] = tmp;
			i++; j--; 
		}
	} while (i<=j); // ��������� ���� � ������������: ������ �� �������� ���������
	//~ ���� � ��� ������� ����� �� ����� ������
	
	if (j>low) qsort(mass,low,j);
	if (i<high) qsort(mass,i,high);
	
}

//~ ������� ������� qsort � ���������� ��������� 0 � n
void quicksort(int *mass, int n) {
	qsort(mass,0,n);
}

int main() {
	const int n = 7;
	cout << "Enter the 7 elements of massive (int): ";
	int arr[n];
	for (int i=0; i<n; i++)
		cin >> arr[i];
	
	//~ ��������� �������� ������� ����������
	quicksort(arr,n-1);
	
	for (int i=0; i<n; i++)
		cout << arr[i] << " ";
	cout << endl;
	
	return 0;
}
