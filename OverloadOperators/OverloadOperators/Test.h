#pragma once
#include <iostream>
using namespace std;

class
{
private:
	int id;
	string name;
public:
	Test(id, name);

	Test(int id, string name);

	void printTest();

	
	// Operator overloading for "="
	const Test& operator=(const Test& other);

	// Operator overloading for copy contrusctor
	Test(const Test& other);


};