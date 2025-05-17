#include <iostream>
#include <memory>
#include "Base.h"
#include "MakeDerived.h"

using namespace std;

int main()
{
	makeDerivedSucess();

	cout << "Enter the name of the model" << endl;
	availableModels();
	string st;
	cin >> st;
	cout << endl;

	unique_ptr<Base> derived = Base::derivedModel(st);
	derived->func();
}