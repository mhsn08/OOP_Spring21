#include<iostream>

using namespace std;

class testClass
{
public:
	void print() const;				//Line a

	testClass();					//Line b
	testClass(int, int);			//Line c
	testClass(int, int, double);	//Line d
	testClass(double, char);		//Line e

private:
	int x;
	int y;
	double z;
	char ch;
};

void testClass::print() const
{
	cout << "x = " << x << ", y = " << y << ", z = " << z
		 << ", ch = " << ch << endl;
}


testClass::testClass()	//default constructor
{
	x = 0;
	y = 0;
	z = 0;
	ch = '*';
}

testClass::testClass(int tX, int tY)
{
	x = tX;
	y = tY;
	z = 0;
	ch = '*';
}

testClass::testClass(int tX, int tY, double tZ)
{
	x = tX;
	y = tY;
	z = tZ;
	ch = '*';
}

testClass::testClass(double tZ, char tCh)
{
	x = 0;
	y = 0;
	z = tZ;
	ch = tCh;
}

int main()
{
	testClass  one;					//Line 1
	testClass  two(5, 6);			//Line 2
	testClass  three(5, 7, 4.5);	//Line 3
	testClass  four(4, 9, 12);		//Line 4
	testClass  five(3.4, 'D');		//Line 5

	one.print();					//Line 6; output one
	two.print();					//Line 7; output two
	three.print();					//Line 8; output three
	four.print();					//Line 9; output four
	five.print();					//Line 10; output five

	return 0;
}
