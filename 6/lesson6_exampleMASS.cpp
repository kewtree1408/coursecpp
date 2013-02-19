#include <iostream>

using namespace std;

void print_massive(int (*mass)[2][4], int n, int m, int p) {
	cout << "{";
	for (int i=0; i<n; i++) {
		cout << "{";
		for (int j=0; j<m; j++) {
			cout << "{";
			for (int k=0; k<p; k++) {
				cout << mass[i][j][k] << ",";
			}
			cout << "}";
		}
		cout << "}";
	}
	cout << "}" << endl;
}

int main() {
	const int n=3, m=2, p=4;
	//~ for (int i=0; i<24; i++)
		//~ cout << i+1 << ", ";
	//~ cout << endl;
	int mass1[3][2][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14,
							15, 16, 17, 18, 19, 20, 21, 22, 23, 24};
		
	int mass2[3][2][4] = { {{1, 2, 3, 4}, {5, 6, 7, 8}},
						   {{9, 10, 11, 12}, {13, 14, 15, 16}},
						   {{17, 18, 19, 20}, {21, 22, 23, 24}}	};
						   
	int mass3[n][m][p]={};
		
	print_massive(mass1,n,m,p);
	print_massive(mass2,n,m,p);
	print_massive(mass3,n,m,p);
	

	int mass4[][3] = {  { 71, 72, 73}  //���� ASCII
			    ,{ 74, 75, 76}  //560 % 256 = 48 ��� "0"
			    ,{ 77, 78, 79}
			    ,{ 80, 81, 82}  }; // ����� �������� "����������� �������"
	
	// � ����� ���� "�����������"
	for (int i=0; i<sizeof(mass4)/(3*sizeof(int)); i++)  //���� �� ������ ����������
	{
		for (int j=0; j<3; j++)  //���� �� ������ ����������
			cout << mass4[i][j] <<"\t" << (char)mass4[i][j]<< endl;
	}
	
	return 0;
}
