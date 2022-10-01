#include<iostream>

using namespace std;

class Address
{
public:
    int house_no;
    int street;
    string city;
    string country;
    string get_full_address();
};

class Employee
{
    string name;
    Address current_adress;
    Address permenant_adress;
public:
    void set_current_address(int house_no, int street, string city, string country);
    void set_permanent_address(int house_no, int street, string city, string country);
    void print_addresses();
};



int main()
{
    int house_no,street;
    string city,country;
    cout << "Enter Data for Current Adress: " << endl;
    cout << "Enter House Number: ";
    cin >> house_no;
    cout << "Enter Street: ";
    cin >> street;
    cout << "Enter City : ";
    cin >> city;
    cout << "Enter Country: ";
    cin >> country;
    Employee e;
    e.set_current_address(house_no,street,city,country);
    cout << "Enter Data for Permenant Adress: " << endl;
    cout << "Enter House Number: ";
    cin >> house_no;
    cout << "Enter Street: ";
    cin >> street;
    cout << "Enter City : ";
    cin >> city;
    cout << "Enter Country: ";
    cin >> country;
    e.set_permanent_address(house_no,street,city,country);
    e.print_addresses();
    return 0;
}

string Address::get_full_address()
{
    string address;
    address = "H No. ";
    address += to_string(house_no);
    address += " , Street ";
    address += to_string(street);
    address += ", " + city + " " + country;
    return address;
}

void Employee::set_current_address(int house_no, int street, string city, string country)
{
    current_adress.house_no = house_no;
    current_adress.street = street;
    current_adress.city = city;
    current_adress.country = country;
}

void Employee::set_permanent_address(int house_no, int street, string city, string country)
{
    permenant_adress.house_no = house_no;
    permenant_adress.street = street;
    permenant_adress.city = city;
    permenant_adress.country = country;
}

void Employee::print_addresses()
{
    cout << "Current Adress: " << endl;
    string str;
    cout << current_adress.get_full_address() << endl;
    cout << "Permenant Adress: " << endl;
    cout << permenant_adress.get_full_address() << endl;
}