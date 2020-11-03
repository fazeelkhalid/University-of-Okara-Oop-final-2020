#pragma once
#ifndef faculty_H
#include<iostream>
#include"user.h"

using namespace std;

class faculty : public user {
private:
	char *name;
	char *teach; //store teacher teach what kind of sub
	int age;
public:
	faculty() {
		name = nullptr;
		teach = nullptr;
		age = 0;
	}
	void setFacultyInfo() {
		name = new char[36];
		teach = new char[36];
		cout << "\nEnter faculty name : ";
		cin >> name;
		cout << "\nEnter teacher teach what kind of subject : ";
		cin >> teach;
		while (age <= 23) {
			cout << "\nEnter teacher age greater then 23 : ";
			cin >> age;
		}
		setUser();
	}
	void printfacultyInfo() {
		cout << "\nFaculty name : " << name;
		cout << "\nFaculty teach what kind of subject : " << teach;
		cout << "\nfaculty age : " << age;
		printUserNameandPin();
	}
	~faculty() {
		if (name != NULL) {
			delete []name;
		}
		if (teach != NULL) {
			delete[]teach;
		}
		age = 0;
	}
};
#endif // !faculty_H
