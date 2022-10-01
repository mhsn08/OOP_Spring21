#include<iostream>

using namespace std;

class StCalculator
{
public:
    int sum(int,int);
    int difference(int,int);
    int mulitplication(int,int);
    float devision(int,int);
};

int main()
{
    return 0;
}


int StCalculator::sum(int x,int y){
    return x + y;
}
int StCalculator::difference(int x,int y)
{
    return x - y;
}
int StCalculator::mulitplication(int x,int y){
    return x*y;
}
float StCalculator::devision(int x,int y){
    return x/float(y);
}


