#include "Fraction.h"


Fraction::Fraction(int numerator, int denominator) {
	numerator_ = numerator;
	denominator_ = denominator;
}
long double Fraction::res() {
	if (denominator_ == 0)
		throw DivisionByZeroException();
	return numerator_ / denominator_;
}
bool Fraction::operator==(Fraction other) {
	return (res() == other.res() ? true : false);
}
bool Fraction::operator!=(Fraction other) {
	return !(*this == other);
}
bool Fraction::operator<(Fraction other) {
	return (res() < other.res()) ? true : false;
}
bool Fraction::operator>(Fraction other) {
	return(other.res() < res());
}
bool Fraction::operator>=(Fraction other) {
	return !(*this < other);
}
bool Fraction::operator<=(Fraction other) {
	return !(other < *this);
}
