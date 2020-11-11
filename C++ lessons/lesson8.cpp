#include <iostream>

using namespace std;


void changeValues(int* a, int* b)		// This is a function which does not return anything. It just applies something. 
{										// You need to put addresses as input if you want to affect the variables in main().
	if (*a<0)	//We don't want to change any negative number.
	{
		return;	//It will act like 'break' here.
	}

	int temp=*a;
	*a = *b;
	*b = temp;
}


//Dynamic list:  (HEAP memory)
int* extendlist(int* oldaddress, int oldsize, int sizetoincrease) {
	int* newaddress = new int[oldsize + sizetoincrease];

	memcpy(oldaddress, newaddress, oldsize * sizeof(int)); //To copy values from old address to the new.
	delete[] oldaddress;
	return newaddress;
}


/*int main() {

	//Part 1: Pointers

	//int a = 15;
	//int* mypointer = &a;    //this is how you define a pointer. the type of pointer should be the same with ' a '
	//// int* mypointer;
	//// mypointer=&a;  These two lines would do the same thing.

	//cout << "Address: " << &a << endl;
	//cout << mypointer << endl;    //this will print the adress value of ' a ' 
	//
	//cout << "a: " << a << endl;
	//cout << *mypointer << endl;   //this will print the value which is in address mypointer, so it will print ' a '

	//*mypointer = 20;			// we change the value that is kept in the address of 'a', therefore 'a' will be changed.
	//cout <<"new a: "<< a << endl;



	//Part 2 : how to use void function

	//int num1 = 15;
	//int num2 = 20;
	//cout << "num1: " << num1 << endl;
	//cout << "num2: " << num2 << endl;
	//
	//changeValues(&num1, &num2);			   //you should give the addresses of the numbers as inputs, if you want to affect them.
	//cout << "new num1: " << num1 << endl;
	//cout << "new num2: " << num2 << endl;



	//Part 3: Pointer arithmetic

	//int a[] = {1,2,3};		//Lists are defined as addresses in memory, it will keep 4*3 bytes of memory and assign these numbers to those addresses.
	//int* p;
	//p = a;					//Since a[] is already an address, you shouldn't write ' &a ' . Here a is the 1st integer value's address.

	//cout << *p << endl << *(p + 1) << endl << *(p + 2) << endl; //First it prints the first value of list because p has the address of the first element.
	//															//Then p+1 is the next 4bytes address which has the value of the second element.
	//cout << p[0] << endl << p[1] << endl << p[2] << endl;  // This gives the same with the code above.



	//Part4: Heap memory

	int* p = new int[5];		//We define heap memory like this. 'p' must be a pointer because we take the heap address here.

	for (int i= 0; i < 5; i++)	//We assign values in those addresses.
	{
		p[i] = i+1;
	}

	cout << "old list: "<<endl;

	for (int i = 0; i < 5; i++)
	{
		cout << p[i] << endl;
	}

	int* k = new int[10];		//If we want to increase the size of the list, we should define a new address then assign our old one to the new.

	for (int i = 0; i < 10; i++)	//We transfer our old values to the new address.
	{
		if (i < 5) {
			k[i] = p[i];
		}
		else {
			k[i] = i+1;
		}
	}

		//Instead of the for loop above, you could do--->  memcpy(newaddress,oldaddress,oldsize*sizeof(int)) --> memcpy(k,p,5*sizeof(int))

	delete[] p;		//We need to delete the release old address, otherwise it will appear full til the end of the program.

	p = k;

	cout << "new list: "<<endl;
	for (int i = 0; i < 10; i++)
	{
		cout << p[i] << endl;
	}


}*/