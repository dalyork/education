#include <iostream>

using namespace std;

int factorial(int num)		// !!!  U should define your function above 'main()'
{
	int res=1;
	for (int i = 0; i < num; i++)
	{
		res = res * (i + 1);
	}
	return res;		// 'return' ends the function.
}


int takePower(int num, int power); //if u want to define the function under main(), u need to identify the function like here.
/*
int main() {

	int mynum;
	int mypower;
	cout << "Enter a number" << endl;
	cin >> mynum;
	cout << "Enter a power" << endl;
	cin >> mypower;
	cout << "Factorial of " << mynum << " is:" << endl;
	cout << factorial(mynum) << endl;
	cout << mynum << " to the power " << mypower << endl;
	cout << takePower(mynum, mypower) << endl;
	
}*/

int takePower(int num, int power)	//Since we already identified this function, now we can define it under main().
{
	int res = 1;
	for (int i = 0; i < power; i++)
	{
		res = res * num;
	}
	return res;
}