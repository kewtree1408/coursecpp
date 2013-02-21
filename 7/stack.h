#include <iostream>

// ����������� ����������� ����� ��� ������ �� ������
typedef double typeval;

struct stackItem {
	typeval value;
	stackItem* next;
};

struct Stack {
	int count;
	stackItem *root;
};

using namespace std;

// ��������� ��� ������ �� ������
Stack *stack_create();
void stack_push(Stack *, typeval );
typeval stack_pop(Stack *);
typeval stack_top(Stack *);
int stack_size(Stack *);
void stack_print(Stack* );
void stack_delete(Stack *);