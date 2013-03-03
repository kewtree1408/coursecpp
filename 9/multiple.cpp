// рабочие

#include <iostream>
#include <locale>

#define LEN 80

using namespace std;

// сведения о школе и университете, об уровне полученного образования
class Student {
public:
	void get() {
		cout << " Enter the name of the institution: ";
		cin >> institution;
		cout << " Enter the degree: " << endl;
		cout << "\t(undergraduate, bachelor, masters, candidate): ";
		cin >> degree;
	}
	void show () const {
		cout << "\n Institution: " << institution << endl;
		cout << "\n Degree: " << degree << endl;
	}
private:
	char institution[LEN];
	char degree[LEN];
};

class Employee {
public:
	void get() {
		cout << "\n Enter the second name: ";
		cin >> name;
		cout << " Enter the ID: ";
		cin >> id;
	}
	void show() const {
		cout << "\n Second name: " << name << endl;
		cout << "\n ID: " << id << endl;
	}
private:
	char name[LEN];
	unsigned long id;
};

class Manager: private Employee, private Student {
public:
	void get () {
		Employee :: get();
		cout << " Enter the post: ";
		cin >> title;
		cout << " Enter the salary: ";
		cin >> salary;
		Student :: get();
	}
	void show () const {
		Employee :: show();
		cout << "\n Post: " << title;
		cout << " \n Sum of salary: " << salary;
		Student :: show();
	}

private:
	char title[LEN];
	double salary;
};

class Scientist : private Employee, private Student {
public:
	void get() {
		Employee :: get();
		cout << " Enter the count of publication: ";
		cin >> pubs;
		Student :: get();
	}
	void show () const {
		Employee :: show();
		cout << " \n The count of publication: " << pubs;
		Student :: show();
	}
private:
	int pubs;
};

class Laborer : public Employee 
{ };

int main() {
	setlocale(LC_ALL,"Russian");

	Manager m1;
	Scientist s1, s2;
	Laborer l1;
	
	cout << endl;
	cout << "\nEnter the info about 1st manager";
	m1.get();

	cout << "\nEnter the info about 1st scientist";
	s1.get();

	cout << "\nEnter the info about 2d scientist";
	s2.get();

	cout << "\nEnter the info about 1st laborer";
	l1.get();

	cout << "_________________________________________________________\n";

	cout << "\nInfo about 1st manager";
	m1.show();

	cout << "\nInfo about 1st scientist";
	s1.show();

	cout << "\nInfo about 2st scientist";
	s2.show();

	cout << "\nInfo about 1st laborer";
	l1.show();

	cout << endl;
	return 0;
}
