#include"lesson13.h"		//We can directly include the header file which contains functions and classes, inside this source file.

void Print(Worker* wo) {	//We will just put a worker type pointer to call its Print() function.
	wo->Print();
}

int main() {

	Student* s = new Student();		//To create an object on the heap memory
	Professor* p = new Professor();
	Worker* w = new Worker();

	s->Print();						//since s is a pointer, we should call the function like this.


	//Transformation:
	Worker* r =(Worker*) s;			//since s is a pointer that means it is already an address, we cannot do the transformation like 'Worker* r = (Worker*) &s'
	Worker* t = p;					//This code is enough for the transformation.
	
	r->Print();						//Even if r is a worker object, since we used virtual function in the parent class, it will call Student::Print() function.
	t->Print();						//This will call the Print() function of Professor, even if we define t as a Worker.
	

	//Gathering different type objects in a list:
	Worker* list[10];				//To gather a list of objects, we need to define a pointer list of the parent type.

	list[0] = s;					//Since the list elements type is pointer, we can directly assign our object pointers into the list.
	list[1] = p;					//Here actually p is Professor type however we transform it to Worker type.
	list[2] = w;

	for (int i = 0; i < 3; i++)
	{
		list[i]->Print();
	}

	Print(list[0]);		//Since list[0] is Worker type pointer, we can put it inside the function defined above. This will call the Print function of Student s.

}