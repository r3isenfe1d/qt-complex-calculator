#include "ComplexNumber.h"

using namespace std;

//default constructor
ComplexNumber::ComplexNumber()
{
    this->real = 0;
    this->imag = 0;
}

//parameterized constructor
ComplexNumber::ComplexNumber(string& str)
{
    vector<double> list;

    list = parce(str);

    this->real = list[0];
    this->imag = list[1];
}

ComplexNumber::ComplexNumber(string& strReal, string& strImag)
{
    if (strReal.empty())
    {
        strReal = "0";
    }
    this->real = stod(strReal);

    if (strImag.empty())
    {
        strImag = "0";
    }
    this->imag = stod(strImag);
}

ComplexNumber::ComplexNumber(double& r, double& i)
{
    this->real = r;
    this->imag = i;
}

//copy constructor
ComplexNumber::ComplexNumber(const ComplexNumber& other)
{
    this->real = other.real;
    this->imag = other.imag;
}

//destructor
ComplexNumber::~ComplexNumber() {};

void ComplexNumber::setReal(string str)
{
    if (str.empty())
    {
        str = "0";
    }
    this->real = stod(str);
}

void ComplexNumber::setImag(string str)
{
    if (str.empty())
    {
        str = "0";
    }
    this->imag = stod(str);
}

double ComplexNumber::getReal()
{
    return this->real;
}

double ComplexNumber::getImag()
{
    return this->imag;
}

ComplexNumber& ComplexNumber::operator = (ComplexNumber other)
{
    this->real = other.real;
    this->imag = other.imag;
    return *this;
}

ComplexNumber ComplexNumber::operator + (ComplexNumber& other)
{
    ComplexNumber result;
    result.real = this->getReal() + other.getReal();
    result.imag = this->getImag() + other.getImag();
    return result;
}

ComplexNumber ComplexNumber::operator - (ComplexNumber& other)
{
    ComplexNumber result;
    result.real = this->getReal() - other.getReal();
    result.imag = this->getImag() - other.getImag();
    return result;
}

ComplexNumber ComplexNumber::operator * (ComplexNumber& other)
{
    ComplexNumber result;
    result.real = this->getReal() * other.getReal() - this->getImag() * other.getImag();
    result.imag = this->getReal() * other.getImag() + other.getReal() * this->getImag();
    return result;
}

ComplexNumber ComplexNumber::operator / (ComplexNumber& other)
{
    ComplexNumber result;
    result.real =
            ((this->getReal() * other.getReal()) +
             (this->getImag() * other.getImag())) /
            ((other.getReal() * other.getReal()) +
             (other.getImag() * other.getImag()));

    result.imag =
            ((other.getReal() * this->getImag()) -
             (this->getReal() * other.getImag())) /
            ((other.getReal() * other.getReal()) +
             (other.getImag() * other.getImag()));

    return result;
}

string ComplexNumber::createStringResult()
{
    string str;
    str = to_string(this->getReal());
    str.erase(str.size() - 4, str.size() - 1);
    str += (this->getImag() < 0 ? "" : "+");
    str += to_string(this->getImag());
    str.erase(str.size() - 4, str.size() - 1);
    str += 'i';
    return str;
}

vector<double> ComplexNumber::parce(string str)
{
    string real, imag;
    bool sign = false;
    char ch;

    if (str[0] == '-')
    {
        sign = true;
        str = str.substr(1, str.size());
    }

    if (str.find('+') != string::npos)
    {
        ch = '+';
    }
    else
    {
        ch = '-';
    }

    string list[2] = {str.substr(0, str.find(ch)), str.substr(str.find(ch) + 1)};

    if (list[0].find('i') != string::npos)
    {
        imag = list[0];
        if (sign)
        {
            imag = '-' + imag;
        }
        real = "0";
    }
    else
    {
        real = list[0];
        if (sign)
        {
            real = '-' + real;
        }
        str = str.substr(list[0].size());
        imag = str;
    }

    real = real == "" ? "0" : real;
    imag = imag == "" ? "0" : imag;

    vector<double> arr;
    arr.push_back(stod(real));
    arr.push_back(stod(imag));

    return arr;
}