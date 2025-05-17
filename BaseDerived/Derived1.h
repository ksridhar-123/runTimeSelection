#pragma once
#include <iostream>
#include "Base.h"

class Derived1 : public Base
{

public:

	Derived1();

	static const string& retModelName();

	virtual void func() override;
};