/*
Eric Reece
Created: 5/28/2019
Last edit: 5/28/2019

Notes:
	- This program serves to demonstrate the concept of overloading assignment operators in C++.
	- "Overloading is used to provide more than a single definition for a function or operator".
	- "Rule of 3" states that if you define a copy constructor, or an assignment operator, or
		destructor, you should implement the other 2 as well.
*/

#include <iostream>
#include "Test.h"
using namespace std;


int main()
{
	Test test1(10, "Mike");
	cout << "Print test1: " << flush;
	test1.printTest();

	Test test2(50, "Bob");
	test2 = test1; // shallow copy
	cout << "Print test2: " << flush;
	test2.printTest();

	Test test3;
	test3.operator=(test2);
	cout << "Print test3: " << flush;
	test3.printTest();

	cout << endl;

	// Copy initialization - if you assign an object with no constructor values,
	// it will use the implicit constructor (i.e why it doesn't print "Assignemnt running")
	Test test4 = test1;
	test4.printTest();


	return 0;
}

