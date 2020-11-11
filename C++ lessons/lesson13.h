#pragma once								//It is used for the header file to be included only once in the source file.
#include <iostream>
using namespace std;

class Worker
{
public:
	int a;
	Worker() {
		a = 10;
	}

	virtual void Print() {					//We should define this function as a virtual function in order to access other Print() functions of sub-classes when
											//we gather all the created objects in a common list.
		cout << "Worker" << a << endl;
	}
};

class Student :public Worker
{
public:
	int b;
	Student() {
		b = 20;
	}

	void Print() {
		cout << "Student" << a << " " << b << endl;
	}
};

class Professor :public Worker
{
public:
	int c;
	Professor() {
		c = 30;
	}
	void Print() {
		cout << "Professor" << a << " " << c << endl;
	}
};