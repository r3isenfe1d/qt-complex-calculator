#include "ComplexNumber.h"

using namespace std;

//default constructor
ComplexNumber::ComplexNumber()
{
    this->real = 0;
    this->imag = 0;
}

//copy constructor
ComplexNumber::ComplexNumber(const ComplexNumber &other)
{
    this->real = other.real;
    this->imag = other.imag;
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
        strReal = "0";
    this->real = stod(strReal);
    //setReal();

    if (strImag.empty())
        strImag = "0";
    this->imag = stod(strImag);
}

ComplexNumber::ComplexNumber(double& r, double& i)
{
    this->real = r;
    this->imag = i;
}

//destructor
ComplexNumber::~ComplexNumber() {}

void ComplexNumber::setReal(double r)
{
    this->real = r;
}

void ComplexNumber::setImag(double i)
{
    this->imag = i;
}

void ComplexNumber::setReal(string str)
{
    if (str.empty())
        str = "0";
    this->real = stod(str);
}

void ComplexNumber::setImag(string str)
{
    if (str.empty())
        str = "0";
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

//ComplexNumber& ComplexNumber::operator = (ComplexNumber other)
//{
//    this->real = other.real;
//    this->imag = other.imag;
//    return *this;
//}

ComplexNumber ComplexNumber::operator + (ComplexNumber& other)
{
    ComplexNumber result;
    result.real = this->real + other.real;
    result.imag = this->real + other.real;
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
    if (other.real == 0.0 && other.imag == 0.0)
        throw "WARNING: division by 0 is not possible!";

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
    this->setReal(round(this->getReal() * 100) / 100);
    this->setImag(round(this->getImag() * 100) / 100);

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
    vector<string> list;
    string real, imag;
    bool sign = false;
    char ch;
    if (str[0] == '-')
    {
        sign = true;
        str = str.substr(1, str.size());
    }

    AnalyzeSign(list, str, ch);

    if (list[list.size() - 1] == "i")
        list[list.size() - 1] = "1";
    if (list[list.size() - 1] == ".i")
        list[list.size() - 1] = "0.1";

    CreatRealAndImag(list, real, imag, sign, ch);

    vector<double> arr;
    arr.push_back(stod(real));
    arr.push_back(stod(imag));
    return arr;
}

void ComplexNumber::AnalyzeSign(vector<string>& list, string& str, char& ch)
{
    if (str.find('-') != string::npos)
    {
        ch = '-';
        list.push_back(str.substr(0, str.find(ch)));
        list.push_back(str.substr(str.find(ch) + 1));
    }
    else if (str.find('+') != string::npos)
    {
        ch = '+';
        list.push_back(str.substr(0, str.find(ch)));
        list.push_back(str.substr(str.find(ch) + 1));
    }
    else
    {
        ch = ' ';
        list.push_back(str);
    }
}

void ComplexNumber::CreatRealAndImag(vector<string>& list, string& real, string& imag, bool sign, char& ch)
{
    if (list[0].find('i') != string::npos)
    {
        imag = list[0];
        if (sign)
            imag = '-' + imag;
        real = "0";
    }
    else if (list.size() == 2)
    {
        real = list[0];
        if (sign)
            real = '-' + real;
        imag = ch + list[list.size() - 1];
    }
    else
    {
        real = list[0];
        if (sign)
            real = '-' + real;
        imag = "0";
    }
}