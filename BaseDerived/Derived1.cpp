#include <iostream>
#include "Derived1.h"

using namespace std;

Derived1::Derived1()
{
	cout << "Derived1 ctor" << endl;
}

const string& Derived1::retModelName()
{
	static string modelName = "Derived1";
	return modelName;
}

void Derived1::func()
{
	cout << "Derived1 func()" << endl;
}