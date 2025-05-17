#pragma once

template <typename derivedT>
unique_ptr<Base> Base::addConstructorInMap<derivedT>::constructDerived()
{
	return make_unique<derivedT>();
}

template <typename derivedT>
Base::addConstructorInMap<derivedT>::addConstructorInMap()
{
	ConstructorMap& derivedMap = Base::retConstructorMap();
	derivedMap.insert({ derivedT::retModelName(), &constructDerived });
}

template <typename derivedT>
Base::addConstructorInMap<derivedT>::~addConstructorInMap()
{
	ConstructorMap& derivedMap = Base::retConstructorMap();
	derivedMap.clear();
}