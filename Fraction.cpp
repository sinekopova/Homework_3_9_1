#include "Fraction.h"


Fraction::Fraction(int numerator, int denominator) {
	numerator_ = numerator;
	denominator_ = denominator;
}
long double Fraction::res() const {
	if (denominator_ == 0)
		throw DivisionByZeroException();
	return numerator_ / denominator_;
}
bool Fraction::operator==(Fraction other) const {
	return (res() == other.res() ? true : false);
}
bool Fraction::operator!=(Fraction other) const {
	return !(*this == other);
}
bool Fraction::operator<(Fraction other) const {
	return (res() < other.res()) ? true : false;
}
bool Fraction::operator>(Fraction other) const {
	return(other.res() < res());
}
bool Fraction::operator>=(Fraction other) const {
	return !(*this < other);
}
bool Fraction::operator<=(Fraction other) const {
	return !(other < *this);
}
