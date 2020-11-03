#include<iostream>
#include"calculator.h"
using namespace std;

int main() {
	calculator c;
	c.setInput();
	c.operations();
	c.prin();
	cout << endl;
	return 0;
}