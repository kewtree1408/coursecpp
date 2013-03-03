#include <iostream>

using namespace std;

class Fractal {
public:
	Fractal (const char* _name, int _iter) :
	  name(_name), iter(_iter)
	  { }

	  void show() const {
		  cout << "Name: " << name << "iterations = " << iter << endl;
	  }

protected:
	char name[20];
	int iter;
};

class Algebraic : public Fractal {
public:
	Algebraic(const char* f, float C) : 
	  formula(f), constant(C) { }
	
	  void draw() const {
		  cout << "Here will drawing Algebraic\n";
	  }

private:
	char formula[30];
	float constant;
};

class Geometric : public Fractal {
public:
	Geometric(const char *init) : initial(init) { }
	void draw() const {
		cout << "Here will drawing Geometric\n";
	}

private:
	char initial[20];
};

class Stochastic : public Fractal
{ };

class Tree : public Stochastic {
public:
	Tree(int n=3, int m=3) {
		matrix = new double* [n];
		for (int i=0; i<n; i++)
			matrix[i] = new double [m];
	}
	~Tree() {
		for (int i=0; i<n; i++)
			delete [] matrix[i];
		delete [] matrix;
	}
	void draw () const {
		cout << "Here will drawing Tree\n";
	}
private:
	double ** matrix;
};

int main() {
	
}