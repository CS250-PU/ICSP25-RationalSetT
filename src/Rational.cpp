#include <iostream>
#include <fstream>
#include "../include/Rational.h"

Rational::Rational (int numerator, int denominator) {
  mNumerator = numerator;
  mDenominator = denominator;
}

void Rational::write (std::ostream& rcOutStream) const {
  rcOutStream << mNumerator << " / " << mDenominator;
}

bool Rational::read (std::istream& rcInStream) {
  char slash;
  bool bIsReadSatisfied;

  if (rcInStream >> mNumerator >> slash >> mDenominator) {
    // not error checking
    bIsReadSatisfied = true;
  }
  else {
    bIsReadSatisfied = false;
  }

  return bIsReadSatisfied;
}

Rational Rational::add (Rational& rcRational) const {
  int commonDenominator = mDenominator * rcRational.mDenominator;

  return Rational (mNumerator * (commonDenominator / mDenominator) +
    rcRational.mNumerator * (commonDenominator / rcRational.mDenominator),
    commonDenominator);
}

Rational Rational::multiply (Rational& rcRational) const {

  return Rational (mNumerator * rcRational.mNumerator,
    mDenominator * rcRational.mDenominator);
}