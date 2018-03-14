#include<string>
#include "ComplexNumber.h"
using namespace std;

ComplexNumber::ComplexNumber() {}
ComplexNumber::ComplexNumber(int a, int b) {
    this->a = a;
    this->b = b;
}

ComplexNumber::ComplexNumber(ComplexNumber k1, ComplexNumber k2) {
    this->a = k1.a + k2.a;
    this->b = k1.b + k2.b;
}

void ComplexNumber::set_real(int a) {
    this->a = a;
}

void ComplexNumber::set_imaginary(int a) {
    this->b = a;
}

string ComplexNumber::get() {
    string privremeni_a = to_string(a);
    string privremeni_b = to_string(b);
    if (b < 0) {
        return privremeni_a + privremeni_b + "i";
    }
    else if (b == 0) {
        return privremeni_a;
    }
    else {
        return privremeni_a + "+" + privremeni_b + "i";
    }
}

ComplexNumber::~ComplexNumber() {
    cout << "Destruktor " << this->get() << endl;
}