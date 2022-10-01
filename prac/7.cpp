#include<iostream>

using namespace std;

class base1
{
    int x;
public:
    base1()
    {
        x = 0;
    }
    void print(){
        cout << "Base" << endl;
    }
};

class derived: public base1
{
    int y;
public:
    derived(){
        y = 0;
    }
    void print(){
        cout << "Derived" << endl;
    }
};

int main()
{
    derived * d1 = new derived;
    d1->base1::print();
    return 0;
}