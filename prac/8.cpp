#include<iostream>

using namespace std;

class test
{
    int * x;
    int size;
public:
    test();
    test(int);
    test(const test &);
    ~test();
    int * printref();
};

test rettest(test t)
{
    cout << "First" << endl;
    // test rett(t);
    // cout << "After making return type" << endl;
    int * ref = t.printref();
    // int * ref2 = rett.printref();
    return t;
}

int main()
{
    test t1;
    // test t2(&t1);
    // test * t3;
    // t3 = new test(t1);
    // test * t4;
    // t4 = new test(t3);
    int * ref1, *ref2 , *ref3 , *ref4;
    ref1 = t1.printref();
    // ref1 = t1.printref();
    // ref2 = t2.printref();
    // ref3 = t3->printref();
    // ref4 = t4->printref();
    test t2 = rettest(t1);
    cout << "Here";
    ref2 = t2.printref();
    return 0;
}

test::test()
{
    size = 10;
    x = new int[10];
    for(int i = 0; i < size; i++)
        x[i] = 0;
}

test::test(int size)
{
    this->size = size;
    x = new int[10];
    for(int i = 0; i < size; i++)
        x[i] = 0;
}

test::test(const test & t)
{
    size = t.size;
    x = new int[size];
    cout << "Copy constructer" << endl;
    for(int i = 0; i < size; i++)
        x[i] = 0;
}

test::~test()
{
    delete []x;
}

int * test::printref()
{
    cout << x << endl;
    return x;
}