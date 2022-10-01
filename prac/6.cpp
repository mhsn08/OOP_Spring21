#include<iostream>

using namespace std;

class A
{
    int x;
protected:
    int y;
public:
    int p;
    A(){
        x = 0;
        y = 0;
        p = 0;
    }
    void disp(){
        cout << "X = " << x << endl;
        cout << "y = " << y << endl;
    }
};

class B : public A
{
    int b;
public:
    B(){
        y = 0;
        b = 0;
    }
};

class C : private A
{
    int c;
public:
    C(){
        y = 0;
        p = 0;
        c = 0;
    }
};

class D : protected A
{
    int d;
public:
    D(){
        y = 0;
        p = 0;
        d = 0;
    }
};

int main()
{
    C c;
    return 0;
}