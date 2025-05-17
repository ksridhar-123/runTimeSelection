#pragma once
#include <iostream>
#include <map>
#include <memory>

using namespace std;

class Base;

typedef unique_ptr<Base> (*BasePtr)();
typedef map<string, BasePtr> ConstructorMap;

class Base
{

private:

	static ConstructorMap& retConstructorMap();

public:

	template <typename derivedT>
	class addConstructorInMap
	{
	public:
		static unique_ptr<Base> constructDerived();

		addConstructorInMap();

		~addConstructorInMap();
	};

	Base();

	virtual void func() = 0;

	static unique_ptr<Base> derivedModel(string);

	static void retAvailableModels();
};

#include "BaseI.h"