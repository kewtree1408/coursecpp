#include "stack.h"

int main() {
	Stack *st = stack_create();
	int command;
	while (1) {
		cout << "\nEnter the command for Stack: \n1) push\n2) pop\n3) top\n4) print\n5) delete\n6) size\n7) exit\n";
		cin >> command;
		switch(command) {
			case 1: cout <<"\tEnter the pushed value: ";
						typeval num;
						cin >> num;
						stack_push(st,num);
						break;
			case 2: cout << "Poped = " << stack_pop(st) << endl;
					break;
			case 3: cout << "Top = " << stack_top(st) << endl;
					break;
			case 4: stack_print(st);
					break;
			case 5: stack_delete(st);
					break;
			case 6: cout << "Size = " << stack_size(st) << endl;
					break;
			case 7: cout << "Finished!" << endl; 
					return 0;
			default: cout << "No such command\n";
		}
	}		
	return 0;
}
