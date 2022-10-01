#include<iostream>

using namespace std;

class Complex
{
    float nat;
    float comp;
public:
    Complex();
    Complex(float,float);
    void setvalue(float,float);
    void Display();
    Complex operator + (Complex);
    Complex operator - (Complex);
    Complex operator * (Complex);
    Complex operator / (Complex);
};

int main()
{
    Complex a,b,c;
    a.setvalue(2,3);
    b.setvalue(2,3);
    c = a + b;
    c.Display();
    return 0;
}

Complex::Complex()
{
    nat = 0;
    comp = 0;
}

Complex::Complex(float nat, float comp)
{
    this->nat = nat;
    this->comp = comp;
}

void Complex::setvalue(float nat, float comp)
{
    this->nat = nat;
    this->comp = comp;
}

void Complex::Display()
{
    cout << nat << " + " << comp << "i"<< endl;
}

Complex Complex::operator+(Complex b){
    float nat, comp;
    nat = this->nat + b.nat;
    comp = this->comp + b.comp;
    Complex ret(nat,comp);
    return ret;
}

Complex Complex::operator-(Complex b)
{
    float nat,comp;
    nat = this->nat - b.nat;
    comp = this->comp - b.comp;
    Complex ret(nat,comp);
    return ret;
}

Complex Complex::operator*(Complex b)
{
    float nat,comp;
    nat = (this->nat * b.nat) + (-1 *(this->comp * b.comp));
    comp = (this->comp * b.nat) + (this->nat * b.comp);
    Complex ret(nat,comp);
    return ret;
}

Complex Complex::operator/(Complex b)
{
    float nat,comp;
    nat = ((this->nat * b.nat) + (this->comp * b.comp)) / ((b.nat * b.nat) + (b.comp * b.comp));
    comp = ((this->nat * b.comp) - (this->comp * b.nat)) / ((b.nat * b.nat) + (b.comp * b.comp));
    Complex ret(nat, comp);
    return ret;
}