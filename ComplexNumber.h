#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H

#include <string>
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

class ComplexNumber
{
public:
    //constructors
    ComplexNumber();
    ComplexNumber(string&);

    //setters and getters
    void setReal(double);
    void setImag(double);
    void setReal(string);
    void setImag(string);
    double getReal();
    double getImag();

    //overload operators
    ComplexNumber operator + (ComplexNumber&);
    ComplexNumber operator - (ComplexNumber&);
    ComplexNumber operator * (ComplexNumber&);
    ComplexNumber operator / (ComplexNumber&);

    //secondary methods
    string createStringResult();

private:
    double real;
    double imag;

    vector<double> parse(string);
    void createRealAndImag(vector<string>&, string&, string&, bool, char&);
    void analyzeSign(vector<string>&, string&, char&);
};

#endif // COMPLEXNUMBER_H
