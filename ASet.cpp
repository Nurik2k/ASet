#include "ASet.h"


ASet::ASet()
{
	_a = 0;
	_b = 0;
}

ASet::ASet(int a, int b)
{
	_a = a;
	_b = b;
}

ASet::ASet(int b)
{
	_b = b;
	_a = 0;
}

ASet::~ASet()
{
}

void ASet::incl(int obj)
{
	if (obj >= _b) {
		obj = _b;
	}
}



void ASet::excl(int obj)
{
	_b = obj - 1;
}

bool ASet::contain(int obj)
{
	if (obj <= _b && obj >= _a) {
		return true;
	}
	else {
		return false;
	}
}

void ASet::print()
{
	for (int i=_a; i <= _b; i++) {
		std::cout << i << std::endl;
	}
}
