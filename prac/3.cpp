#include<iostream>
#include<cmath>

using namespace std;

class calculator
{
public:
    static void sum(int,int);
    static void difference(int,int);
    static void multiplication(int,int);
    static void devision(int,int);
};

class Scalculator : public calculator
{
public:
    static void tangent(int);
};

int main()
{
    Scalculator::tangent(0);
    return 0;
}

void calculator::sum(int x,int y)
{
    cout << x + y << endl;
}

void calculator::difference(int x, int y)
{
    cout << x - y << endl;
}

void calculator::multiplication(int x, int y)
{
    cout << x * y << endl;
}

void calculator::devision(int x, int y)
{
    cout << x / (float (y)) << endl;
}

void Scalculator::tangent(int x)
{
    cout << tan(x) << endl;
}