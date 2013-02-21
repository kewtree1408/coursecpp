#include <iostream>

// ќпределение собственных типов дл€ работы со стеком
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

// ѕрототипы дл€ работы со стеком
Stack *stack_create();
void stack_push(Stack *, typeval );
typeval stack_pop(Stack *);
typeval stack_top(Stack *);
int stack_size(Stack *);
void stack_print(Stack* );
void stack_delete(Stack *);