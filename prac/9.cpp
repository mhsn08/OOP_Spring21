#include<iostream>

using namespace std;

class Parent
{
public:
    virtual void lmao() = 0;
};

class Child : public Parent
{
public:
    void lmao(){
        cout << "LMFAO" << endl;
    }
};

int main()
{
    Child c;
    c.lmao();
    return 0;
}