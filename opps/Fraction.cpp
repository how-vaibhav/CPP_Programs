#include<iostream>
using namespace std;

class Fraction {
public:
    float num;
    float den;

    Fraction(float n, float d) {
        num = n;
        den = d;
    }

    // Operator Overloading for +
    Fraction operator+(Fraction f) {
        float newNum = this->num * f.den + this->den * f.num;
        float newDen = this->den * f.den;
        return Fraction(newNum, newDen);
    }

    // Operator Overloading for -
    Fraction operator-(Fraction f) {
        float newNum = this->num * f.den - this->den * f.num;
        float newDen = this->den * f.den;
        return Fraction(newNum, newDen);
    }

    // Operator Overloading for *
    Fraction operator*(Fraction f) {
        float newNum = this->num * f.num;
        float newDen = this->den * f.den;
        return Fraction(newNum, newDen);
    }

    // Operator Overloading for /
    Fraction operator/(Fraction f) {
        float newNum = this->num * f.den;
        float newDen = this->den * f.num;
        return Fraction(newNum, newDen);
    }

    // Print function
    void print() {
        cout << num << "/" << den << endl;
    }
};

int main() {
    Fraction f1(1, 2);
    Fraction f2(1, 3);

    Fraction sum = f1 + f2;
    sum.print();  // 5/6

    Fraction diff = f1 - f2;
    diff.print(); // 1/6

    Fraction mul = f1 * f2;
    mul.print();  // 1/6

    Fraction div = f1 / f2;
    div.print();  // 3/2

    return 0;
}
