#pragma once
#ifndef user_H
#include<iostream>

using namespace std;

class user {
private:
	char *userName;
	int *pincode;
	int pinSize;
public:
	user() {
		userName = NULL;
		pincode = NULL;
		pinSize = 0;
	}
	void setUser() {
		userName = new char[36];
		cout << "\nEnter UserName withOut Space : ";
		cin >> userName;
		while (pinSize <= 0) {
			cout << "\nEnter size of pinCode : ";
			cin >> pinSize;
		}
		pincode = new int[pinSize];
		cout << "\n---------->>\tEnter pinCode\t<<----------";
		for (int i = 0; i < pinSize; i++) {
			cout << "\nEnter " << i + 1 << " number : ";
			cin >> pincode[i];
		}
	}
	void printUserNameandPin() {
		cout << "\nYour user name : "<<userName;
		cout << "\nYour pin code : ";
		for (int i = 0; i < pinSize; i++) {
			cout << pincode[i];
		}
	}
	~user() {
		if (userName != NULL) {
			delete[]userName;
		}
		if (pincode != NULL) {
			delete[]pincode;
		}
	}
};

#endif // !user_H
