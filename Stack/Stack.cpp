#include <iostream>
#define CAPACITY 20
using namespace std;

int lib[CAPACITY];
int _top = 0;
bool ifempty = false;

void push(int num) {
	if (_top == CAPACITY) {

	}
	lib[_top] = num;
	cout << "Push number is " << num << "(_top is <" << _top << ">)" << endl;
	_top++;
}

void pop() {
	int num = (_top - 1);
	int x = lib[num];
	cout << "(_top:" << num << ")Pop number is " << x << endl;
	lib[_top] = NULL;
	_top--;
}

void top() {
	int x = lib[CAPACITY];
	cout << "Currently, the top is " << x << endl;
}

void peep(int num) {
	int x = lib[num];
	cout << "Which number you want to peep is: No. " << num << ", the value is: " << x << endl;
}

void empty() {
	cout << "Cleaning work is running.........." << endl;
	for (int i = 0; i <= _top; i++) {
		lib[i] = NULL;
	}
	_top = 0;
}

void IsEmpty() {
	if (_top == 0) {
		cout << "It's empty now......." << endl;
		ifempty = true;
	}
}

int main() {
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	pop();
	pop();
	pop();
	pop();
	top();
	push(187);
	push(178);
	push(1978);
	int x = (_top - 1);
	int y = (_top - 2);
	int z = (_top - 3);
	peep(z);
	peep(y);
	peep(x);
	empty();
	IsEmpty();
	system("pause");
	return 0;
}