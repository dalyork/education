#include <iostream>
#include <string>

using namespace std;
//Inheritance is shown with a basic example.
class Shape		//We define a base class named 'Shape' which has the base variables for all shapes. 
{				//We will define a triangle and rectangle class derived from this base class. Both will have area, unit, shapeType, and edges.
public:
	int area;	//This refers to the area of a shape.
	string unit;	//This is the unit of area which is cm2.
	string shapeType;	//This is the type of shape like rectangle or triangle.
	string edges;		//This is the edges of a shape like 'width length' or 'height base'.
	Shape() {
		unit = "cm2";
	}
	Shape(int area) {		//You can also assign the area via the constructor with a parameter.
		this->area = area;	//since the parameter and the variable have the same names, you should use 'this->area' which refers to the variable of the class.
	} //otherwise it will only see the 'area' as parameter.
	void PrintArea() {				//To print the area of the shapes. It has  the common variable 'shapeType' which is defined in constructors of derived shapes.
		cout << "The area of  " << shapeType << ":" << " " << area << endl;
	}
};

class Triangle :public Shape		//Inherited class: The base class is 'Shape' and the derived class is 'Triangle'.
{
public:
	int height;
	int base;
	Triangle() {					//The variables coming from the base class will be defined in constructor.
		shapeType = "Triangle";
		edges = "height and base";
	}
	Triangle(int height) :height(height) {}	//You can always assign a parameter to your variable like this.

	void CalculateArea() {
		area = (height * base) / 2;
	}
	void EnterData() {
		cout << "Please enter " << edges << " of the triangle." << endl;
		cout << "Height: ";
		cin >> height ;
		cout << "Base: ";
		cin >> base;
	}
};

class Rectangle :public Shape		//This class is derived from the base class 'Shape'.
{
public:
	int width;
	int length;
	Rectangle() {
		shapeType = "Rectangle";
		edges = "width and length";
	}
	Rectangle(int width, int length):width(width),length(length){}	//You can assign parameters to multiple variables with this method.

	void CalculateArea() {
		area = width * length;
	}
	void EnterData() {
		cout << "Please enter " << edges <<" of the rectangle."<< endl;
		cout << "Width: ";
		cin >> width ;
		cout <<  "Length: ";
		cin >> length;
	}
};

class Square:public Shape
{
public:
	int edge;
	Square():Shape(20) {	//Like this, we call the constructor of shape but with the parameter one. So the area will be 20 of the square.
		shapeType = "Square";
	}
	~Square() {	//This is the destructor function which is called when the object is destroyed.

	}
};

/*int main() {
	Triangle t1;
	t1.EnterData();
	Rectangle r1;
	r1.EnterData();
	t1.CalculateArea();
	r1.CalculateArea();
	t1.PrintArea();
	r1.PrintArea();
}*/