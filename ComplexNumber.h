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
    ComplexNumber(const ComplexNumber&);
    ComplexNumber(string&);
    ComplexNumber(string&, string&);
    ComplexNumber(double&, double&);
    ~ComplexNumber();

    //setters and getters
    void setReal(double);
    void setImag(double);
    void setReal(string);
    void setImag(string);
    double getReal();
    double getImag();

    //overload operators
//    ComplexNumber& operator = (ComplexNumber);
    ComplexNumber operator + (ComplexNumber&);
    ComplexNumber operator - (ComplexNumber&);
    ComplexNumber operator * (ComplexNumber&);
    ComplexNumber operator / (ComplexNumber&);

    //secondary methods
    string createStringResult();

private:
    double real;
    double imag;

    vector<double> parce(string);
    void CreatRealAndImag(vector<string>&, string&, string&, bool, char&);
    void AnalyzeSign(vector<string>&, string&, char&);
};

#endif // COMPLEXNUMBER_H
