#pragma once
#ifndef student_H
#include"user.h"
#include<iostream>
using namespace std;

class student:public user {
private:
	char *name;
	int sclass; // student class
public:
	student() {
		name = NULL;
		sclass = 0;
	}
	void setStudentinfo() {
		name = new char[36];
		cout << "\nEnter student name without space : ";
		cin >> name;
		while (sclass <= 0) {
			cout << "\nEnter student class : ";
			cin >> sclass;
		}
		setUser();
	}
	void printStudentInfo() {
		cout << "\nstudent name : " << name;
		cout << "\nstudent class : " << sclass;
		printUserNameandPin();
	}
	~student() {
		if (name != NULL) {
			delete[]name;
			sclass = 0;
		}
	}
};



#endif // !student_H
