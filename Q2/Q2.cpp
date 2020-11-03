#include<iostream>
#include"student.h"
#include"Admin.h"
#include"faculty.h"
using namespace std;


int menu(int operation) {
	cout << endl;
	system("PAUSE");
	system("CLS");
	operation = -1;
	while (operation < 0) {
		cout << "\nEnter 0 for exist";
		cout << "\nEnter 1 for student";
		cout << "\nEntre 2 for admin";
		cout << "\nEnter 3 for faculity\n------->>\t";
		cin >> operation;
	}
	return operation;
}


int main() {
	int opetion = 1;
	while (opetion) {
		opetion = menu(opetion);
		if (opetion == 1) {
			student s;
			s.setStudentinfo();
			s.printStudentInfo();
		}
		else if (opetion == 2) {
			admin a;
			a.SetAdminInfo();
			a.printAdminInfo();
		}
		else if (opetion == 3) {
			faculty f;
			f.setFacultyInfo();
			f.printfacultyInfo();
		}
	}
	return 0;
}