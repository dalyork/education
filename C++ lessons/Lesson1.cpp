#include <iostream>

using namespace std;

/*   // Part 1 (print and input)

int main() {

	int f = 10;
	cout << "hello world" <<f<< endl; //  endl means endline , you could also write "hello world\n" 

	cin >> f;
	cout << f<<"\n";

	char a[100]; // char str[size]  this is in order to define a string variable
	cin >> a;  // we could say also    cin>>f>>a;   that means first we give input f then a
	cout << a<<endl;

	system("pause"); // when you run the program this allows you to type a button to continue and then close.
	
}*/


/*  //Part 2(different namespaces and same variable name defined in different types)

float a = 15; //defined in std namespace
namespace M {	// you can define different namespace in order to use same variable name in a different type
	int a = 44;
	int b = 77;
}
namespace C {
	char a[100] = "Hello";
	char b[100] = "Hi";
}
int main() {
	cout << a<<endl;
	cout << M::a << endl;
	cout << C::a << endl;

	using namespace M;	//if u will use namespace M u can type this and u will not have to type ' cout<<M::b '  That means M is the active namespace.

	cout << b << endl;

	cout << C::b << endl;  //you can only use 'using namespace '  once.
	// if u don't want to put at the beginning 'using namespace std' , you should write 'std::cout<<' , 'std::endl ' because they are defined in std namespace.
}*/