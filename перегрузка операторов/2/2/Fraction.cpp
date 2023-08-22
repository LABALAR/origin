#include "Fraction.h"

int Fraction::nod(const int n, const int d) {
	int tmp_n = n;
	int tmp_d = d;
	if (tmp_n < 0) tmp_n = -(tmp_n);
	if (tmp_d < 0) tmp_d = -(tmp_d);
	while (tmp_n && tmp_d) {
		if (tmp_n > tmp_d)
			tmp_n = tmp_n % tmp_d;
		else
			tmp_d = tmp_d % tmp_n;
	}
	return (tmp_n + tmp_d);
}

Fraction::Fraction(int numerator, int denominator)
{
	int _nod;
	_nod = nod(numerator, denominator);
	numerator_ = numerator / _nod;
	denominator_ = denominator / _nod;
}

bool Fraction::operator== (const Fraction& right) {
	int tmp;
	if (numerator_ > right.numerator_) {
		if (!(numerator_ % right.numerator_) && (denominator_ > right.denominator_)) {
			tmp = numerator_ / right.numerator_;
			if ((denominator_ / tmp) == right.denominator_)
				return true;
		}
	}
	else {
		if (!(right.numerator_ % numerator_) && denominator_ <= right.denominator_) {
			tmp = right.numerator_ / numerator_;
			if ((right.denominator_ / tmp) == denominator_)
				return true;
		}
	}
	return false;
}

bool Fraction::operator!= (const Fraction& right) {
	return !(*this == right);
}

bool Fraction::operator<  (const Fraction& right) {
	if (*this != right) {
		if ((static_cast<long>(numerator_) * right.denominator_) < (static_cast<long>(right.numerator_) * denominator_))
			return true;
		else
			return false;
	}
	else
		return false;
}

bool Fraction::operator>  (const Fraction& right) {
	if (*this != right && !(*this < right))
		return true;
	else
		return false;
}
bool Fraction::operator<= (const Fraction& right) {
	if (*this == right || *this < right)
		return true;
	else
		return false;
}

int Fraction::get_numerator() const { return numerator_; }
int Fraction::get_denominator() const { return denominator_; }

bool Fraction::operator>= (const Fraction& right) {
	if (*this == right || *this > right)
		return true;
	else
		return false;
}

std::ostream& operator<< (std::ostream& left, const Fraction& right) {
	left << right.get_numerator() << '/' << right.get_denominator();
	return left;
}

Fraction Fraction::operator+ (Fraction& right) {
	int tmp_n, tmp_d;
	tmp_d = denominator_ * right.denominator_;
	tmp_n = numerator_ * right.denominator_ + right.numerator_ * denominator_;
	return Fraction(tmp_n, tmp_d);
}

Fraction Fraction::operator- (Fraction& right) {
	int tmp_n, tmp_d;
	tmp_d = denominator_ * right.denominator_;
	tmp_n = numerator_ * right.denominator_ - right.numerator_ * denominator_;
	return Fraction(tmp_n, tmp_d);
}

Fraction Fraction::operator* (Fraction& right) {
	int tmp_n, tmp_d;
	tmp_d = denominator_ * right.denominator_;
	tmp_n = numerator_ * right.numerator_;
	return Fraction(tmp_n, tmp_d);
}

Fraction Fraction::operator/ (Fraction& right) {
	int tmp_n, tmp_d;
	tmp_d = denominator_ * right.numerator_;
	tmp_n = numerator_ * right.denominator_;
	return Fraction(tmp_n, tmp_d);
}
Fraction Fraction::operator++ () {
	numerator_ += denominator_;
	return *this;
}

Fraction Fraction::operator++ (int) {
	Fraction tmp = *this;
	numerator_ += denominator_;
	return tmp;
}
Fraction Fraction::operator-- () {
	numerator_ -= denominator_;
	return *this;
}

Fraction Fraction::operator-- (int) {
	Fraction tmp = *this;
	numerator_ -= denominator_;
	return tmp;
}