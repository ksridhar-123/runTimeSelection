#include <iostream>
#include "Derived2.h"

using namespace std;

Derived2::Derived2()
{
	cout << "Derived2 ctor" << endl;
}

const string& Derived2::retModelName()
{
	static string modelName = "Derived2";
	return modelName;
}

void Derived2::func()
{
	cout << "Derived2 func()" << endl;
}