#include <iostream>
using namespace  std;


//Creating an integer list class which can increase its size automatically if it is full 

class intList
{
private:
	int* p;
	int numlist;	//number of current elements in list
	int sizelist;	//max size of list
public:
	intList() {
		p = new int[10];
		numlist = 0;
		sizelist = 10;
	}

	void add(int a) {
		if (numlist == sizelist) {
			expand();
		}

		p[numlist] = a;
		numlist++;

	}

	bool print(int&a,int listorder) {			//here we want to print a number from the list, &a will return the listorder'th value of the list member
		if (listorder < 0) {
			return false;
		}
		if (listorder > numlist) {
			return false;
		}
		a = p[listorder - 1];
	}

	void expand() {
		int* newarea = new int[sizelist + 10];
		memcpy(newarea, p, sizeof(int) * numlist);
		delete [] p;
		p = newarea;
		sizelist += 10;
	}

};

/*int main(){
	cout << "a" << endl;
	cout << "bb" << endl;
}*/


