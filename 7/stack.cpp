#include "stack.h"

Stack *stack_create() {
	Stack* st = new Stack;
	st->root = NULL;
	st->count = 0;
	return st;
}

void stack_push(Stack *st, typeval num) {
	st->count++;
	
	stackItem *elem = new stackItem;
	elem->value = num;
	elem->next = st->root;
	
	st->root = elem;
}

typeval stack_pop(Stack *st) {
	if (st->count == 0) {
		cout << "Empty stack" << endl;
		return 0;
	} else {
		st->count--;
		stackItem *del = st->root;
		typeval poped = del->value;
		st->root = st->root->next;
		delete del;
		return poped;
	}
}

typeval stack_top(Stack *st) {
	if (st->count == 0) {
		cout << "Empty stack" << endl;
		return 0;
	}
	return st->root->value;
}

int stack_size(Stack *st) {
	return st->count;
}

void stack_print(Stack* st) {
	int N = st->count;
	if (N == 0) {
		cout << "Empty Stack" << endl;
	}
	else {
		stackItem *iter = st->root;
		for (int i=0; i<N; i++) {
			cout << iter->value << " ";
			iter = iter->next;
		}
	}
}

void stack_delete(Stack *st) {
	while (st->count != 0) {
		stackItem *del = st->root;
		st->root = st->root->next;
		delete del;
		st->count--;
	}
}