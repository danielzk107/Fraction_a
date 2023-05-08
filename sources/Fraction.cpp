#include "Fraction.hpp"
using namespace ariel;

Fraction::Fraction(int num, int denom) {}

Fraction &Fraction::operator--() {
    return *this;
}    // Prefix
Fraction &Fraction::operator--(int) {
    return *this;
} // Postfix
Fraction &Fraction::operator++() {
    return *this;
}    // Prefix
Fraction &Fraction::operator++(int) {
    return *this;
} // Postfix

Fraction &operator+(Fraction &a, Fraction &b) {
    return a;
};
Fraction& operator+(Fraction &a, float b) {
    return a;
};
Fraction &operator+(float a, Fraction &b) {
    return b;
}

Fraction &operator-(Fraction &a, Fraction &b) {
    return a;
};;
Fraction &operator-(Fraction &a, float b) {
    return a;
};
Fraction &operator-(float a, Fraction &b) {
    return b;
}

Fraction &operator/(Fraction &a, Fraction &b) {
    return a;
};
Fraction &operator/(Fraction &a, float b) {
    return a;
};
Fraction &operator/(float a, Fraction &b) {
    return b;
}

Fraction &operator*(Fraction &a, Fraction &b) {
    return a;
};
Fraction &operator*(float a, Fraction &b) {
    return b;
};
Fraction &operator*(Fraction &a, float b) {
    return a;
}

bool operator==(Fraction &a, Fraction &b) {
    return false;
};
bool operator==(float a, Fraction &b) {
    return false;
};
bool operator==(Fraction &a, float b) {
    return false;
};

bool operator!=(Fraction &a, Fraction &b) {
    return false;
};
bool operator!=(float a, Fraction &b) {
    return false;
};
bool operator!=(Fraction &a, float b) {
    return false;
};

bool operator<(Fraction &a, Fraction &b) {
    return false;
};
bool operator<(float a, Fraction &b) {
    return false;
};
bool operator<(Fraction &a, float b) {
    return false;
};

bool operator>(Fraction &a, Fraction &b) {
    return false;
};
bool operator>(Fraction &a, float b) {
    return false;
};
bool operator>(float a, Fraction &b) {
    return false;
};

bool operator>=(Fraction &a, Fraction &b) {
    return false;
}
bool operator>=(float a, Fraction &b) {
    return false;
}
bool operator>=(Fraction &a, float b) {
    return false;
}

bool operator<=(Fraction &a, Fraction &b) {
    return false;
}
bool operator<=(float a, Fraction &b) {
    return false;
}
bool operator<=(Fraction &a, float b) {
    return false;
}

ostream &operator<<(ostream &a, Fraction &b) {
    return a;
}
Fraction &operator>>(istream &a, Fraction &b) {
    return b;
}