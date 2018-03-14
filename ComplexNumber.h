#pragma once
#include<string>
#include<iostream>
using namespace std;

class ComplexNumber {

public:
    ComplexNumber();
    ComplexNumber(int a, int b);
    ComplexNumber(ComplexNumber k1, ComplexNumber k2);
    void set_real(int a);
    void set_imaginary(int a);
    string get();
    ~ComplexNumber();

private:
    int a;
    int b;

};