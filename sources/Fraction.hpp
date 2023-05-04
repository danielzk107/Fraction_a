namespace ariel
{
    class Fraction;
}
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;

class ariel::Fraction
{
public:
    int num, denom; // Numerator and denominator

    Fraction(int num, int denom);

    Fraction &operator--();   // Prefix
    Fraction operator--(int); // Postfix
    Fraction &operator++();   // Prefix
    Fraction operator++(int); // Postfix

    friend Fraction operator+(Fraction a, Fraction b);
    friend Fraction operator+(Fraction a, float b);
    friend Fraction operator+(float a, Fraction b);

    friend Fraction operator-(Fraction a, Fraction b);
    friend Fraction operator-(Fraction a, float b);
    friend Fraction operator-(float a, Fraction b);

    friend Fraction operator/(Fraction a, Fraction b);
    friend Fraction operator/(Fraction a, float b);
    friend Fraction operator/(float a, Fraction b);

    friend Fraction operator*(Fraction a, Fraction b);
    friend Fraction operator*(float a, Fraction b);
    friend Fraction operator*(Fraction a, float b);

    friend bool operator==(Fraction a, Fraction b);
    friend bool operator==(float a, Fraction b);
    friend bool operator==(Fraction a, float b);

    friend bool operator<(Fraction a, Fraction b);
    friend bool operator<(float a, Fraction b);
    friend bool operator<(Fraction a, float b);

    friend bool operator>(Fraction a, Fraction b);
    friend bool operator>(Fraction a, float b);
    friend bool operator>(float a, Fraction b);

    friend bool operator>=(Fraction a, Fraction b);
    friend bool operator>=(float a, Fraction b);
    friend bool operator>=(Fraction a, float b);

    friend bool operator<=(Fraction a, Fraction b);
    friend bool operator<=(float a, Fraction b);
    friend bool operator<=(Fraction a, float b);
};

ostream& operator<<(ostream &a, Fraction &b);
Fraction& operator>>(Fraction &a, istream &b);

