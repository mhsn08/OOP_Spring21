#include<iostream>

using namespace std;

class illustrate
{
public: 
    static int count;	

    void print() const;
      
    void setX(int a);
      

    static void incrementY();
	      
    illustrate(int a = 0);
       

private:
    int x;
    static int y;	
};


int illustrate::count = 0;
int illustrate::y = 0;

void illustrate::print() const
{
    cout << "x = " << x << ", y = " << y
         << ", count = " << count << endl;
}

void illustrate::setX(int a)
{
	x = a;
}

void illustrate::incrementY()
{
	 y++;
}

illustrate::illustrate(int a)
{
	 x = a;
}


int main()
{
	illustrate illusObject1(3);	                           //Line 1
	illustrate illusObject2(5);	                           //Line 2

	illustrate::incrementY();                              //Line 3
	illustrate::count++;                                   //Line 4
	illusObject1.print();                                  //Line 5
	illusObject2.print();                                  //Line 6

	cout << "Line 7: ***Increment y using illusObject1***"     
		 << endl;                                          //Line 7
	illusObject1.incrementY();                             //Line 8
	illusObject1.setX(8);                                  //Line 9
	illusObject1.print();                                  //Line 10
	illusObject2.print();                                  //Line 11

	cout << "Line 12: ***Increment y using illusObject2***" 
		 << endl;                                          //Line 12
	illusObject2.incrementY();                             //Line 13
	illusObject2.setX(23);                                 //Line 14
	illusObject1.print();                                  //Line 15
	illusObject2.print();                                  //Line 16

	return 0;
}