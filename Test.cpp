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
    Fraction a(4, 7), b(22, 15);
    CHECK(a!=b);
    CHECK(a==a);
    CHECK(b==b);
    CHECK_FALSE(a+b == b);
    CHECK(a == float(4/7.0));
    CHECK(a <= b);
    CHECK_FALSE(b >= a);
    CHECK(a < 1);
    CHECK(b > 0.9);    
}

TEST_CASE("I/O functions"){
    Fraction a(2, 10);
    cout << "a+2.421" << a+2.421 << endl; 
    cout << "First value: " << a << ", please insert new values" << endl;
    cin >> a;
    cout << "New value: " << a << endl;
}