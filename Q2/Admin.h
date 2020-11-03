#pragma once
#ifndef admin_H
#include<iostream>
#include"user.h"

class admin: public user{
private:
	char name[36];
	char cnic[13];
public:
	admin() {
		name[0] = '\0';
		cnic[0] = '\0';
	}
	void SetAdminInfo() {
		cout << "\nEnter admin name without space : ";
		cin >> name;
		cout << "\nEnter CNIC of admin : ";
		cin >> cnic;
		setUser();
	}
	void printAdminInfo() {
		cout << "\nAdmin Name : " << name;
		cout << "\nAdmin CNIC : " << cnic;
		printUserNameandPin();

	}
	~admin() {
		name[0] = '\0';
		cnic[0] = '\0';
	}

};

#endif // !admin_H
