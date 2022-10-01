#include<iostream>

using namespace std;

class Difference;

class Sum
{
    int x;
    int y;
public:
    Sum(int x, int y){
        this->x = x;
        this->y = y;
    }
    friend void prints(Sum,Difference);
};

class Difference
{
    int x;
    int y;
public:
    Difference(int x, int y){
        this->x = x;
        this->y = y;
    }
    friend void prints(Sum s,Difference d);
};

void prints(Sum s, Difference d){
    cout << "Sum = " << s.x + s.y << endl;
    cout << "Difference = " << d.x - d.y << endl;

}

// void printd(Difference d)
// {
//     cout << "Difference = " << d.x - d.y << endl;
// }

int main()
{
    Sum s(2,3);
    Difference d(5,2);
    prints(s,d);
    // printd(d);
    return 0;
}