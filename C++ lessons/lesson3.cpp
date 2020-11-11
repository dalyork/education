#include <iostream>

using namespace std;

/*//Part1 If condition

int main() {

	int num1, num2, res;
	bool myres;

	cout << "num1?  ";
	cin >> num1;
	cout << "num2?  ";
	cin >> num2;

	res = num1 + num2;

	cout << res << endl;

	if (res > 0)	// if u will write only 1 row below, you dont need to open brackets. If u put only '0' between brackets, then it will not go inside.
		cout << "positive"<<endl;

	myres = num1 > num2;

	if (myres == true) {	// you need to put brackets because u have more than 1 row under if statement.
		cout << "num1 > num2" << endl;
		cout << "Hi bitch!" << endl;
	}
}*/




/*//Part 2 If condition symbols

int main() {

	int num1 = 7;
	int num2 = 5;

	if (num1 != num2) { // !=  means is not equal to.  

		cout << "num1 is not equal to num2" << endl;
	}

	// <=  or >=  can be used to say 'less/greater than or equal to'

	bool res;

	res = (num1 == num2);

	if (!res == true)	// ' !res ' is the opposite of res.
		cout << "num1 is not equal to num2" << endl;


	 
	if ((num1 > 2) && (num2 > 2)==true) // both condition should be satisfied.
		cout << "both numbers are greater than 2" << endl;

	if ((num1 > 2) || (num2 > 2) == true) // if one of these conditions is true.  'Or' logical connection
		cout << "Hello" << endl;

}*/

/*//Part 3  If..else if...else  and  switch-case-break
int main() {

	int a, b;
	cout << "a?" << endl;
	cin >> a;
	cout << "b?" << endl;
	cin >> b;

	if (a > b) {
		cout << "a is greater than b" << endl;
	}
	else if (a == b)
	{
		cout << "a equal to b" << endl;
	}
	else
	{
		cout << "b is greater than a" << endl;
	}



	switch (a)	//this works like if, but it doesn't controls each case. It goes directly to the correct case or to default.
	{
	case 1:	//This means, when a is 1.
		cout << "a=1" << endl;
		break;	//Break is essential if u want to use 'switch'
	case 2:	
		cout << "a=2" << endl;
		break;
	case 3:		//u can use multiple cases if u want. This will be like either case 3 or case 4.
	case 4:
		cout << "a=3 or 4" << endl;
		break;
	default: // this is like else
		cout << "default" << endl;
		break;
	}

	int num1;
	cout << "num1?" << endl;
	cin >> num1;
	cout << ((num1 >= 0) ? "Positive" : "Negative")<<endl;	// This will work like if. First string is shown if the condition is satisfied else the second.

}*/