#pragma once

#include "FractionException.h"

class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction(int numerator, int denominator);
	long double res() const;
	bool operator==(Fraction other) const;
	bool operator!=(Fraction other) const;
	bool operator<(Fraction other) const;
	bool operator>(Fraction other) const;
	bool operator>=(Fraction other) const;
	bool operator<=(Fraction other)const;
};
