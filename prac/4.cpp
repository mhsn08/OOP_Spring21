#include<iostream>

using namespace std;

class datetype
{
    int day;
    int month;
    int year;
    bool leap;
public:
    datetype();
    datetype(int,int,int);
    bool checkval(int,int,int);
    void def();
    void setdate(int,int,int);
    void showdate();
    bool isleap(int);
    void showleap();
};

int main()
{
    datetype d(33,-1,-2001);
    d.showdate();
    d.showleap();
    return 0;
}

datetype::datetype()
{
    day = 1;
    month = 1;
    year = 2000;
    leap = true;
}

datetype::datetype(int day, int month, int year)
{
    if(checkval(day,month,year)){
        this->day = day;
        this->month = month;
        this->year = year;
        leap = isleap(year);
    }
    else
        def();
}

bool datetype::isleap(int year)
{
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        return true;
    return false;
}

void datetype::def()
{
    day = 1;
    month = 1;
    year = 2000;
    leap = true;
}

void datetype::setdate(int day, int month, int year)
{
    if(checkval(day,month,year)){
        this->day = day;
        this->month = month;
        this->year = year;
        leap = isleap(year);
    }
    else
        def();
}

void datetype::showdate()
{
    cout << day << " - " << month << " - " << year << endl;
}

void datetype::showleap()
{
    if(leap)
        cout << "This is a leap year" << endl;
    else
        cout << "This is not a leap year" << endl;
}

bool datetype::checkval(int day, int month, int year)
{
    leap = isleap(year);
    if(day < 1 || month < 1 || year < 1)
        return false;
    if(day > 31)
        return false;
    if(month > 12)
        return false;
    if(month == 2){
        if(leap && day > 29)
            return false;
        if((!leap) && day > 28)
            return false;
        else
            return true;
    }
    if(month == 4 || month == 6 || month == 9 || month == 11)
        if(day > 30)
            return false;
        else
            return true;
    return true;
}