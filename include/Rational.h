#pragma once

#include <iostream>

class Rational {
public:
  Rational (int numerator = 0, int denominator = 1);
  void write (std::ostream& rcOutStream) const;
  bool read (std::istream& rcInStream);
  Rational add (Rational& rcRational) const;
  Rational multiply (Rational& rcRational) const;

private:
  int mNumerator;
  int mDenominator;
};