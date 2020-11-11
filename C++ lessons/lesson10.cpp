#include <iostream>
using namespace std;

class rectangle			//Here we create a class named rectangle. If we create an object from this class, it will have 3 variables.
{
public:				//That means all elements which are under public, can be accessed when another user creates an object.
					//In the main, you can see all public variables and functions when you create an object.
	int height;
	int width;
	int area;

	void enterData() {				//The variables of the object will be manipulated by these functions.
		cout << "Height: ";
		cin >> height;
		cout << "Width: ";
		cin >> width;
	}

	void findArea() {
		area = height * width;
		cout<<"Area: " << area<<endl;
	}
};									//We should put ; at the end when we close a class.

class square
{
private:			//All variables and functions under private can not be accessed when a user creates an object in main.

	int edge;		//u cannot assign value to this variable in main function.
	int area;		//u can only change these values by the public functions below, because functions have access to those variables.

public:
	void enterData() {		//only the functions have access to the private variables.
		cout << "Edge: ";
		cin >> edge;
	}
	
	void findArea() {
		area = edge * edge;
		cout << "Area: " << area<<endl;
	}
};

/*int main(){
	rectangle d1;
	d1.height = 5;		//since the variable is public, you can change the value here.
	d1.enterData();		// u could also assign values to the variables of the object externally-->  ' d1.height = 15 '
	d1.findArea();

	square s1;
	s1.enterData();		//u need this function to manipulate the variables of the object because they are private.
	s1.findArea();

}*/