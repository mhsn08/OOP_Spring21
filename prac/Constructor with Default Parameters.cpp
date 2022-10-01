#include<iostream>

using namespace std;

class testClass
{
public:
	void print() const;			

	testClass(int = 0, int = 0, double = 0.0, char = '*');

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


testClass::testClass(int tX, int  tY, double tZ, char tCh)
{
	x = tX;
	y = tY;
	z = tZ;
	ch = tCh;
}


int main()
{
	testClass  one;						//Line 1
	testClass  two(5, 0, 6.0);			//Line 2
	testClass  three(5, 7, 4.5);		//Line 3
	testClass  four(4, 9, 12);			//Line 4
	testClass  five(0, 0, 3.4, 'D');	//Line 5

	one.print();					//Line 6; Output one
	two.print();					//Line 7; output two
	three.print();					//Line 8; output three
	four.print();					//Line 9; output four
	five.print();					//Line 10; output five

	return 0;
}
