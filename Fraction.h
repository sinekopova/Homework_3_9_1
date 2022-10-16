#pragma once

#include "FractionException.h"

class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction(int numerator, int denominator);
	long double res();
	bool operator==(Fraction other);
	bool operator!=(Fraction other);
	bool operator<(Fraction other);
	bool operator>(Fraction other);
	bool operator>=(Fraction other);
	bool operator<=(Fraction other);
};
