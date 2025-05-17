#include <iostream>
#include "MakeDerived.h"
#include "Derived1.h"
#include "Derived2.h"

using namespace std;

Base::addConstructorInMap<Derived1> addDerived1;
Base::addConstructorInMap<Derived2> addDerived2;

void makeDerivedSucess()
{
	cout << "All Derived models loaded successfully" << endl << endl;
}

void availableModels()
{
	cout << "Available models are:" << endl;
	Base::retAvailableModels();
	cout << endl;
}