#include <iostream>

using namespace std;

struct human				//We define a new type of variable which combines several variables under itself.
{
	char name[100];
	char surname[100];
	int id;
	int age;
};							//We should put ; at the end when we close a struct.

human enter_data() {		// We create a function which will return human variable type. We will create a new student belonging to human.
	human student;

	cout << "Name: ";
	cin >> student.name;
	cout << "Surname: ";
	cin >> student.surname;
	cout << "id: ";
	cin >> student.id;
	cout << "age: ";
	cin >> student.age;

	return student;
}

struct rectangle
{
	int height;
	int width;
};

int findArea(rectangle* d) {
	d->height = 15;					//since our input is pointer, now we can change the values in this function.
	d->width = 3;
	return d->height * d->width;	//If your input is the address of your struct variable, then you notation to call its attributes is different, shown in this line.
}

int findArea2(rectangle& d) {		//This is called reference: it is similar to pointer but now you can use 'd.height' with a dot.
	d.height = 20;					//You can similarly change sub-values of your input struct variable, by using reference.
	d.width = 4;
	return d.height * d.width;
}

void increase(int& a) {
	a++;
}

/*int main() {

	//Part1: Struct

	//human stu1;				//We define a human type variable.

	//stu1 = enter_data();	//Now we will fill its other variables such as name, surname..
	//cout << stu1.name << endl << stu1.surname << endl << stu1.id << endl << stu1.age<<endl;



	//Part2: Struct-Call function via address

	//rectangle rec1;
	//rec1.height = 5;			
	//rec1.width = 4;
	//int rec1_area = findArea(&rec1);		//We change the height and width inside the function.
	//cout << "height and width: " << rec1.height << " " << rec1.width << endl;
	//cout <<rec1_area<<endl;
	//
	//int rec1_area2 = findArea2(rec1);		//If you use reference, you don't need to put an address.
	//cout << "height and width: " << rec1.height << " " << rec1.width << endl;
	//cout << rec1_area2 << endl;



	//Part3: Reference
	
			//The important  thing with reference is that you cannot change the address of your variable. However, you could change it with pointers.
	int num1 = 5;
	increase(num1);						//Since we put reference as input, we can change the value of variable like we did with pointers.
	cout << "increased num1: " << num1; 

										
}*/