#include "doctest.h"
#include "sources/Fraction.hpp"
using namespace ariel;


TEST_CASE("Standard arithmetic functions"){
    Fraction a(2, 5), b(4, 9);
    CHECK_EQ(a+b, Fraction(38 ,45));
    CHECK_EQ(b-a, Fraction(2, 45));
    CHECK_EQ(a-b, Fraction(-2, 45));
    CHECK_EQ(a+2, Fraction(12, 5));
    CHECK_EQ(b-1, Fraction(-5, 9));

    CHECK_EQ(a*b, Fraction(8, 45));
    CHECK_EQ(a/b, Fraction(9, 10));
    CHECK_EQ(b/a, Fraction(10,9));
    CHECK_EQ(a/5, Fraction(2, 25));
    CHECK_EQ(9*b, Fraction(4, 1));
}

TEST_CASE("Equality functions"){
    
}