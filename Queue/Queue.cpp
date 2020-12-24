#include <iostream>
using namespace std;

#define BUFFER_SIZE 30
int library[BUFFER_SIZE];
int head_ = 0;
int tail_ = 0;
bool ifempty = false;

void head(int number) {
	int y = library[number];
	cout << "Now,the head number is" << y << endl;
}

void tail() {
	int x = library[BUFFER_SIZE];
	cout << "Now,the tail number is" << x << endl;
}

void peep(int number) {
	int y = library[number];
	cout << "The number you peep is:" << number << " , " << "The worth is:" << y << endl;
}

void empty() {
	cout << "Loading ,it's time to cleaning... " << endl;
	for (int i = 0; i <= head_; i++) {
		library[i] = NULL;
	}
	head_ = 0;
}

void isEmpty() {
	if (head_ == 0) {
		cout << "it is empty.." << endl;
		ifempty = true;
	}
	
}

int main() {
	empty();
	isEmpty();
	system("pause");
	return 0;
}