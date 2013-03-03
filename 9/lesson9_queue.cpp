#include <iostream>
#include <process.h>
#define MAX 4

using namespace std;

class Queue {
public:
	Queue(): last(-1), first(0)
	{}
	void push(int val) {
		last++;
		qu[last] = val;
	}
	int pop() {
		first++;
		return qu[first-1];
	}

protected:
	int qu[MAX];
	int first;
	int last;
};

class QueueErr : public Queue {
public:
	void push(int val) {
		if (last >= MAX-1) {
			cout << "Error:\n";
			exit(-1);
		}
		Queue :: push(val);
	}
	int pop() {
		if (first >= MAX-1 || first < 0) {
			cout << "Error\n";
			exit(-1);
		}
		Queue :: pop();
	}
};

int main() {
	QueueErr q;
	q.push(3); q.push(4); q.push(5); q.push(0); q.push(10);
	cout << q.pop() << endl;
	cout << q.pop() << endl;
	cout << q.pop() << endl;

	cout << q.pop() << endl;
	cout << q.pop() << endl;

	return 0;
}
