#include "Base.h"

Base::Base()
{}

ConstructorMap& Base::retConstructorMap()
{
	static ConstructorMap derivedMap;
	return derivedMap;
}

unique_ptr<Base> Base::derivedModel(string modelName)
{
	ConstructorMap& derivedMap = retConstructorMap();
	BasePtr ptr = (derivedMap.find(modelName))->second;
	return ptr();
}

void Base::retAvailableModels()
{
	ConstructorMap& derivedMap = retConstructorMap();
	
	for (auto it = derivedMap.begin(); it != derivedMap.end(); it++)
		cout << it->first << endl;
}