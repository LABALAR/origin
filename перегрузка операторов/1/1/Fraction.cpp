#include "Fraction.h"

Fraction::Fraction(int numerator, int denominator)
{
	numerator_ = numerator;
	denominator_ = denominator;
}

bool Fraction::operator== (const Fraction& left) {
	int tmp;
	if (numerator_ > left.numerator_) {
		if (!(numerator_ % left.numerator_) && (denominator_ > left.denominator_)) {
			tmp = numerator_ / left.numerator_;
			if ((denominator_ / tmp) == left.denominator_)
				return true;
		}
	}
	else {
		if (!(left.numerator_ % numerator_) && denominator_ <= left.denominator_) {
			tmp = left.numerator_ / numerator_;
			if ((left.denominator_ / tmp) == denominator_)
				return true;
		}
	}
	return false;
}

bool Fraction::operator!= (const Fraction& left) {
	return !(*this == left);
}

bool Fraction::operator<  (const Fraction& left) {
	if (*this != left) {
		if ((static_cast<long>(numerator_) * left.denominator_) < (static_cast<long>(left.numerator_) * denominator_))
			return true;
		else
			return false;
	}
	else
		return false;
}

bool Fraction::operator>  (const Fraction& left) {
	if (*this != left && !(*this < left))
		return true;
	else
		return false;
}
bool Fraction::operator<= (const Fraction& left) {
	if (*this == left || *this < left)
		return true;
	else
		return false;
}

bool Fraction::operator>= (const Fraction& left) {
	if (*this == left || *this > left)
		return true;
	else
		return false;
}