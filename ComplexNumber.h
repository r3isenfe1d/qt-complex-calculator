#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H

#include <string>
#include <iostream>
#include <cmath>
#include <vector>
#include <regex>

using namespace std;

class ComplexNumber
{
public:
    //constructors
    ComplexNumber();
    ComplexNumber(const ComplexNumber&);
    ComplexNumber(string&);
    ComplexNumber(string&, string&);
    ComplexNumber(double&, double&);
    ~ComplexNumber();

    //set-s and get-s
    void setReal(string);
    void setImag(string);
    double getReal();
    double getImag();

    //overload operators
    ComplexNumber& operator = (ComplexNumber);
    ComplexNumber operator + (ComplexNumber&);
    ComplexNumber operator - (ComplexNumber&);
    ComplexNumber operator * (ComplexNumber&);
    ComplexNumber operator / (ComplexNumber&);

    //secondary methods
    string createStringResult();
    vector<double> parce(string);

private:
    double real;
    double imag;
};

#endif // COMPLEXNUMBER_H
