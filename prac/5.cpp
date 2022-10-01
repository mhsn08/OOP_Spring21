#include<iostream>

using namespace std;

class pointtype
{
protected:
    int x;
    int y;
public:
    pointtype();
    pointtype(int,int);
    void setpoint(int,int);
    void disp();
};

class circletype: public pointtype
{
protected:
    int radius;
public:
    circletype();
    circletype(int,int,int);
    void calculatearea();
    void disp();
    void setpoint(int,int);
};

class cylindertype : public circletype
{
    int height;
public:
    cylindertype();
    cylindertype(int,int,int,int);
    void calculatvol();
    void disp();
    void setpoint(int,int);
};

int main()
{
    // circletype c(0,0,1);
    // // c.disp();
    // c.setpoint(1,1);
    // c.disp();
    cylindertype c(0,0,1,1);
    c.disp();
    return 0;
}

pointtype::pointtype()
{
    x = 0;
    y = 0;
}

pointtype::pointtype(int x, int y)
{
    this->x = x;
    this->y = y;
}

void pointtype::setpoint(int x, int y)
{
    this->x = x;
    this->y = y;
}

void pointtype::disp()
{
    cout << "X = " << x << endl;
    cout << "Y = " << y << endl;
}

circletype::circletype()
{
    radius = 1;
}

circletype::circletype(int x, int y, int radius)  : pointtype(x,y)
{
    if(radius > 0)
        this->radius = radius;
    else
        radius = 1;
}

void circletype::calculatearea()
{
    cout << "Area = " <<  2 * 3.14 * radius << endl;
}

void circletype::disp()
{
    // cout << "X = " << x << endl;
    // cout << "Y = " << y << endl;
    pointtype::disp();
    cout << "Radius = " << radius << endl;
    calculatearea();
}

void circletype::setpoint(int x, int y)
{
    this->x = x;
    this->y = y;
}

cylindertype::cylindertype()
{
    height = 1;
}

cylindertype::cylindertype(int x, int y, int radius, int height) : circletype(x,y,radius)
{
    this->height = height;
}

void cylindertype::setpoint(int x, int y)
{
    this->x = x;
    this->y = y;
}

void cylindertype::calculatvol()
{
    cout << "Vol = " << 2 * 3.14 * radius * height << endl;
}

void cylindertype::disp()
{
    circletype::disp();
    cout << "Height = " << height << endl;
    calculatvol();
}