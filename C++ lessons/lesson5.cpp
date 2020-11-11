#include <iostream>
#include <time.h> //for creation of different random numbers

using namespace std;

/*
int main() {

	//Part1 : lists

	//int mylist[3]; //there will be 3 elements in mylist. First index is 0, last one is 2. You shouldn't write 'mylist[3]'.

	//for (int i = 0; i < 3; i++)
	//{
	//	cout << "value " << i << endl;
	//	cin>>mylist[i];
	//}



	//part 2 : create random numbers

	//int mylist[3];

	//for (int i = 0; i < 3; i++)
	//{
	//	mylist[i] = rand();  //with rand() function, u will always get the same values.
	//	cout << mylist[i] << endl;
	//}

	//srand(time(0)); //u need to call this function only one time in order to create different random variables each time u run the code.
	//				//srand uses the value of time (since time changes every moment), u will be able to get different random values, in every trial.
	//				//we are feeding our 'rand()' function with 'srand()' . One of the best ways to feed is time!!Because time will always be diffrent.
	//for (int i = 0; i < 3; i++)
	//{
	//	mylist[i] = rand();
	//	cout << mylist[i] << endl;
	//}



	//Part3 :  how to take mod ?

	//srand(time(0));
	//int mylist[5];
	//int sum=0;

	//for (int i = 0; i < 5; i++)
	//{
	//	mylist[i] = rand();
	//	cout << mylist[i] << endl;
	//}
	//for (int i = 0; i < 5; i++)
	//{
	//	if (mylist[i] % 2 != 0)   //That means, when we divide by 2, if the remaining is not equal to 0, do this.
	//	{
	//		sum = sum + mylist[i];	//we will sum all odd values.
	//	}

	//}
	//
	//cout <<"Summation:  "<< sum << endl;



	//Part4: Sorting algorithm

	srand(time(0));
	int mylist[5];
	int temp;

	for (int i = 0; i < 5; i++)
	{
		mylist[i] = rand()%100; //it will give you random numbers between 0-100.
		cout << mylist[i] << endl;
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = i; j < 5; j++) //u shouldn't compare with previous value so you put j=i. Otherwise it will sort from greatest to smallest.
		{
			if (mylist[i] > mylist[j])
			{
				temp = mylist[j];
				mylist[j] = mylist[i];
				mylist[i] = temp;
			}
		}	
	}
	cout << "Sorted list:" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << mylist[i] << endl;
	}

}*/