#pragma once

#include <iostream>
#include <vector>
#include "Rational.h"

class RationalSet {
  public:
    RationalSet ();
    size_t size () const;
    void add (const Rational &rcRational);
    void write (std::ostream &rcOut) const;

  private:
    std::vector<Rational> mcRationals;
};