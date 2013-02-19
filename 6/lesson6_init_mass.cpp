#include <iostream>  // ����������� ������������� �����

using namespace std;

int main() {

	//~ ���������� ��������
	float vec[10];                //�������� �������� 0..9
	short int Prise[12];          //�������� �������� 0..11
	int nArr[3];                  //��������� ������ �� ���� ���������

	nArr[0] = 7;        //���������� �������� ������� ��������
	nArr[1] = 8;
	nArr[2] = 9;

	//~ ���������� � ������������� �������
	int Days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

	//~ ��� ����� � �� ������������������ �������?
	cout <<"1) NON initializing array vec:\n";
	cout << vec[0] << " " << vec[1] << " " << vec[2] << " ...\n\n";

	//~ ��� ����� � ������������������ �������
	cout <<"2) Initializing array Days: \n";
	cout << Days[0] << " " << Days[1] << " " << Days[2] << " ...\n\n";

	int LeftHand[5] = {1,2,3,4,5}; //��� ��������� �����, � ����������� ������ !!!
	int RigthHand[5];
    //~ RigthHand = LeftHand;  //������ !!

	//~ ���� ������ ����������� �������
	cout << "3) All elements of Days " << endl;
	for (int i = 0; i < 12; i++)
		cout <<"\tMonth "<< i+1 <<" has " <<Days[i]<<" days.\n";

	//~ ���� ������ ��������������� ��������, �� �� �����, �� ����������� ��� �����
	int DaysP[12] = {31,28,31,30,31};  //������ 5 ���������

	cout << "4) Partically Initializing array DaysP: "<< endl;
	//~ ���� ������ ����������� �������
	for (int i = 0; i < 12; i++)
		cout <<" Month "<< i+1 <<" has " <<DaysP[i]<<" days.\n";

	
	//~ ���� ������ ������������� ������ ������� �������, �� ���������� ��������
	//~ int DaysF[12] = {31,28,31,30,31,30,31,31,30,31,30,31,44,55};


	//~ �������� � ������������� ������� ��� ������ �������� ��� ����� (�� �����)
	int DaysU[] = {31,28,31,30,31,30,31,31,30};  //������ 9 ���������

	//~ ��� ����� � ������������������ ������� ����������� �����
	cout <<"5) UnKnown size of array DaysU\n";
	
	for (unsigned int i = 0; i < sizeof DaysU/sizeof(int); i++)
		cout <<" Month "<< i+1 <<" has " <<DaysU[i]<<" days.\n";

	//~ ����� �� ������� ������� �� �������������� !!!
	cout << "6) Days OUT of RANGE !!\n";
	for (int i = 0; i < 22; i++)
		cout <<" Month "<< i+1 <<" has " <<Days[i]<<" days.\n";

	return 0;         // ������� �� ������� � ������������ �������
}                      // ����� ����� � main() ��������������
