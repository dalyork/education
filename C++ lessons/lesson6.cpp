#include <iostream>
#include<string>

using namespace std;
/*
int main() {


	//Part 1: character lists

	//char a = 'a';		// 'char a' creates one byte of place in the memory. You can only put one letter.
	//char b[] = "hello"; // 'char b[]' is a character list. It automatically calculates the size of the list for the memory. U need to use double quotes.

	//cout << b << endl; //u can directly print the character list. 'cout' understands that it is a char list.

	//b[2] = '\0'; // when 'cout' sees this value, it prints the values until '\0'. So it will only print 'he'. 
	//			// normally at the end of each char list, '\0' is added to stop printing. When we have 10 letters, it will put 11 bytes : 10letters + '\0'
	//cout << b << endl;

	//char c[20]; //if u define a char list without giving the string, u will need to fill every list member manually:  c[0]='H' ; c[1]='e' ;......
	//strcpy_s(c, "Hello World"); //This assigns the string to our char list. U don't need to fill the list manually.
	//cout << c << endl;

	//int char_num=0;
	//while (c[char_num]!='\0')	//we find the number of characters in the char list. We end counting when we arrive to '\0'. It is the last list member.
	//{
	//	char_num++;
	//}
	//cout << char_num << endl;	

	//int char_num1;
	//char_num1 = strlen(c);	//This function calculates automatically the length of the string.
	//cout << char_num1 << endl;



	//Part2 : string library

	string strA = "Hello World";
	cout << strA << endl;

	strA = "How are you?"; //U can change strA thanks to string class. If u define a basic char list u are not able to change it after.
	cout << strA << endl;

	strA += " Kenan?"; //u can add another string to the previous one.
	cout << strA << endl;

	string strB = "hello";
	string strC = "hello";
	if (strB==strC)			//We can compare two different strings.
	{
		cout << "String B and C are hello" << endl;
	}

	int mylength = 0;
	for (int i = 0; i < strB.length(); i++)   //u can use the length funtion to find string length. U can also use this in a for loop.
	{
		mylength++;
	}
	cout << "hello has " << mylength << " characters" << endl;

}*/