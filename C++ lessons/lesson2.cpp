#include <iostream>

using namespace std;

/*// Part 1 defining variables

int main() {

	int num1; int num2; //When you use semicolon, the second variable can be at the same row or you can go to a new row. As you wish..
	int num3, num4; //you can define in a same row by using only one type and a comma between variables.
	int num5 = 17; //if you want, you can assign a value when you define a variable.
	int NUM5 = 15; // when u use a capital letter , it will be a different variable. Because C++ can understand capital letters. 
	num1 = num5 + NUM5;
	num3 = 3; num4 = 4;
	cout << num1 << endl;
	
	int res;
	cout << (res = num3 + num4); //you can directly write in brackets to print the result value.


}*/


/*  // Part 2 increment variables
int main() {

	int i = 5;

	i = i + 1;
	i += 1; //This is another way to increment the value of a variable.
	cout << i << endl;

	i++; //This will also increment the value by 1.
	cout << i << endl;

	cout << i++ << endl;//when you write this, first the computer will do 'cout i' and then increment i by 1. That means you will need the 'cout i' again to see new i.
	cout << i << endl;

	cout << ++i << endl; // In this situation, i will be first incremented then printed.



	int sayi1;
	int j = 0;

	sayi1 = j++;  // When you print sayi1 u will get 0. Because first sayi1 is assigned to j. But you can write 'j+1' or '++j' instead, if u want to get 1.
	cout << sayi1 << endl;

}*/


 /* //Part3 variable types

int main() {

	float a = 2.1f; //when you write float, you need to put f at the end otherwise compiler will tranform it to double.

	double b = 3.5;

	short t = 10; // smaller range and memory size then int type.

	int k;

	k = (int)a; // You tell to compiler that you are converting your float value to integer, so it will print 2. That means compiler will take only integer value of a.

	cout << k << endl;
	cout << a << endl;
	cout << b << endl;

	int f = 2147483647 + 1; //since the maximum number an int type can take is 2147483647, it will be -2147483647 when u increment.
	
	unsigned int c = 2147483647 + 1; //unsigned int range starts from 0 to 4294967295, that means u can increment the value now.

	cout << f << "  " << c << endl;

	const int i = 1; // you won't be able to change in a different row. This value will remain constant. U may want to define these types as global variable.


}*/