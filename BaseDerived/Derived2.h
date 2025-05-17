#pragma once
#include <iostream>
#include "Base.h"

class Derived2 : public Base
{
public:

	Derived2();

	static const string& retModelName();

	virtual void func() override;
};
