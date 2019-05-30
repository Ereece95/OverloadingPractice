#include "Test.h"
#include <iostream>
using namespace std;

Test::Test(int id, string name) :
	id(id), name(name) {

}

void Test::printTest()
{
	cout << id << ": " << name << endl;
}

// Operator overload functions
Test& Test::operator=(const Test& other)
{
	cout << "Assignment running" << endl;

	id = other.id;
	name = other.name;
	return *this;
}
Test::Test(const Test& other)
{
	cout << "Copy constructor running" << endl;
	*this = other;
}