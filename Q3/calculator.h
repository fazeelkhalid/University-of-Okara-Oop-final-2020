#pragma once
#ifndef calculator_H
#include<iostream>

using namespace std;

class calculator {
private:
	float fNum;
	float sNum;
	float tNum;
	char fOpe;
	char sOpe;
	float result;
	int inputNumber;
	float add(float f, float s) {
		return f + s;
	}
	float sub(float f, float s) {
		return f - s;
	}
	float mul(float f, float s) {
		return f * s;
	}
	float div(float f, float s) {
		return f / s;
	}


public:
	calculator() {
		fNum = 0;
		sNum = 0;
		tNum = 0;
		fOpe = '+';
		sOpe = '+';
		inputNumber = 0;
		result = 0;
	}
	void setInput() {
		inputNumber = 0;
		while (inputNumber < 2 || inputNumber > 3) {
			cout << "\nnumber in Clculation : ";
			cin >> inputNumber;
		}
		if (inputNumber == 2) {
			cout << "\nEnter first Number : ";
			cin >> fNum;
			cout << "\nEnter OPeration: ";
			cin >> fOpe;
			cout << "\nEnter second Number : ";
			cin >> sNum;
		}
		else {

			cout << "\nEnter first Number : ";
			cin >> fNum;
			cout << "\nEnter first operation : ";
			cin >> fOpe;
			cout << "\nEnter second Number : ";
			cin >> sNum;
			cout << "\nEnter second operation : ";
			cin >> sOpe;
			cout << "\nEnter third number : ";
			cin >> tNum;
		}
	}
	void operations() {
		// if first is positive;
		if (inputNumber == 3) {
			if (fOpe == '+'&& sOpe == '+') {
				if (inputNumber == 3)
					result = add(result, tNum);
			}
			else if (fOpe == '+'&& sOpe == '-') {
				result = add(fNum, sNum);
				result = sub(result, tNum);
			}
			else if (fOpe == '+'&& sOpe == '*') {
				result = mul(sNum, tNum);
				result = add(fNum, result);
			}
			else if (fOpe == '+'&& sOpe == '/') {
				result = div(sNum, tNum);
				result = add(fNum, result);
			}

			//if first is negative
			else if (fOpe == '-'&& sOpe == '+') {
				result = sub(fNum, sNum);
				result = add(result, tNum);
			}
			else if (fOpe == '-'&& sOpe == '-') {
				result = sub(fNum, sNum);
				result = sub(result, tNum);
			}
			else if (fOpe == '-'&& sOpe == '*') {
				result = mul(sNum, tNum);
				result = sub(fNum, result);
			}
			else if (fOpe == '-'&& sOpe == '/') {
				result = div(sNum, tNum);
				result = sub(fNum, result);
			}

			//if first is multiply
			else if (fOpe == '*'&& sOpe == '+') {
				result = mul(fNum, sNum);
				result = add(result, tNum);
			}
			else if (fOpe == '*'&& sOpe == '-') {
				result = mul(fNum, sNum);
				result = sub(result, tNum);
			}
			else if (fOpe == '*'&& sOpe == '*') {
				result = mul(sNum, tNum);
				result = mul(fNum, result);
			}
			else if (fOpe == '*'&& sOpe == '/') {
				result = mul(sNum, tNum);
				result = div(fNum, result);
			}

			//if first operation is divide
			else if (fOpe == '/'&& sOpe == '+') {
				result = div(fNum, sNum);
				result = add(result, tNum);
			}
			else if (fOpe == '/'&& sOpe == '-') {
				result = div(fNum, sNum);
				result = sub(result, tNum);
			}
			else if (fOpe == '/'&& sOpe == '*') {
				result = mul(sNum, tNum);
				result = div(fNum, result);
			}
			else if (fOpe == '/'&& sOpe == '/') {
				result = div(sNum, tNum);
				result = div(fNum, result);
			}
			else {
				cout << "\n\n --------->>\t please check operation (:";
			}
		}
		else{
			if (fOpe == '+') {
				result = add(fNum, sNum);
			}
			else if (fOpe == '-') {
				result = sub(fNum, sNum);
			}
			else if (fOpe == '*') {
				result = mul(fNum, sNum);
			}
			else if (fOpe == '/') {
				result = div(fNum, sNum);
			}
			else {
				cout << "\n\n --------->>\t please check operation (:";
			}
		}
	}
	void prin() {
		cout << "\n\n--------->>\t Result \t<<---------";
		cout << "\n\t\t" << result;
	}

};

#endif // !calculator_H
