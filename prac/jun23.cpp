#include<iostream>

using namespace std;

class Date
{
    int day;
    int month;
    int year;
public:
    Date(int,int,int);
    void showDate();
};

class Person
{
    string name;
    Date dob;
public:
    Person(string,int,int,int);
    void Showinfo();
};

int main()
{
    Person * person = new Person("Name",6,5,2001);
    person->Showinfo();
    return 0;
}

Date::Date(int day, int month, int year)
{
    this->day = day;
    this->month = month;
    this->year = year;
}

void Date::showDate()
{
    cout << day << "-" << month << "-" << year << endl;
}

Person::Person(string name, int day, int month, int year):
    dob(day, month, year)
{
    this->name = name;
}

void Person::Showinfo()
{
    cout << "Name : " << name << endl << "Date of Birth : ";
    dob.showDate();
}