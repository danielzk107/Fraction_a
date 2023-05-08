#include "doctest.h"
#include "sources/Fraction.hpp"
using namespace ariel;


TEST_CASE("Standard arithmetic functions"){
    Fraction a(2, 5), b(4, 9);
    CHECK(a+b == 38/45.0);
    CHECK(b-a == 2.0/45);
    CHECK(a-b == -2.0/45);
    CHECK(a+2 == 12/5.0);
    CHECK(b-1 == -5/9.0);

    CHECK(a*b == 8/45.0);
    CHECK(a/b == 9/10.0);
    CHECK(b/a == 10/9.0);
    CHECK(a/5 == 2/25.0);
    CHECK(9*b == 4);
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
    cout << "First value: " << a << ", please type 4 , 6" << endl;
    cin >> a;
    CHECK(a == 4/6.0);
    cout << "New value: " << a << endl;
}