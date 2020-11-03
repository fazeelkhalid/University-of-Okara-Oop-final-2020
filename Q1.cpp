#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<ctime>
using namespace std;


class date1 {
private:
	int day;
	int month;
	int year;
public:
	date1() {

		std::time_t t = std::time(0);   // get time now
		std::tm* now = std::localtime(&t);
		year = (now->tm_year + 1900);
		month = (now->tm_mon + 1);
		day = (now->tm_mday);
	}
	void setDate() {
		day = 0;
		month = 0;
		year = 0;
		while (!(day > 0 && day <= 31)) {
			cout << "\nEnter date : ";
			cin >> day;
		}
		while (!(month > 0 && month <= 12)) {
			cout << "\nEnter month : ";
			cin >> month;
		}
		while (!(year > 0)) {
			cout << "\nEnter year : ";
			cin >> year;
		}
	}
	void printDate() {
		cout << "\n\n\n--------->>\tDate\t<<---------\n";
		cout << "\n" << day << " / " << month << " / " << year ;
	}
	void nextDate() {
		int tempDay = day;
		int tempMonth = month;
		int tempYear = year;

		if (tempDay == 31) {
			tempDay = 1;
			if (month == 12) {
				tempMonth = 1;
				tempYear++;
			}
			else {
				tempMonth++;
			}
		}
		else if (tempDay == 30 && (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)) {
			tempDay++;
		}
		else if (tempDay == 30 && (month == 2 || month == 4 || month == 6 || month == 9 || month == 11)) {
			tempDay = 1;
			if (month == 12) {
				tempMonth = 1;
				tempYear++;
			}
			else {
				tempMonth++;
			}
		}
		else {
			tempDay++;
		}
	
		cout << "\n\n\n--------->>\tNext Date\t<<---------\n";
		cout << "\n" << tempDay << " / " << tempMonth << " / " << tempYear;
		cout << endl << endl;
	}
};



int main() {
	date1 d;
	
	d.printDate();
	d.nextDate();
	d.setDate();
	d.nextDate();
	d.printDate();
	return 0;
}