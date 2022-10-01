#include <iostream>

using namespace std;

// Address class here 
class Address
{
public:
    int house_no;
    int street;
    string city;
    string country;
    string get_full_address();
};

// Employee class here 
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

// Wheel class here 
class Wheel
{
    string state;
public:
    void set_wheel_state(string);
    string get_wheel_state();
};

// Car class here 
class Car
{
    Wheel wheel[4];
public:
    void set_car_to_moving();
    void set_car_to_stopped();
    void print_car_wheels_state();
};

int main() { 

    // Start of PART - 1  -----------------------
    Address a; 

    a.house_no = 4; 
    a.street = 25; 
    a.city = "Peshawar"; 
    a.country = "Pakistan";

    cout << a.get_full_address() << endl;

    // End of Part - 1    -----------------------




    // Start of PART - 2  -----------------------

    Employee e1; 

    e1.set_current_address(4, 25, "Peshawar", "Pakistan"); 
    e1.set_permanent_address(14, 9, "Lahore", "Pakistan"); 
    e1.print_addresses();  

    // End of Part - 2     -----------------------




    // Start of PART - 3   -----------------------

    Wheel w1; 

    w1.set_wheel_state("Turning"); 
    cout << w1.get_wheel_state() << endl; 

    // End of Part - 3     -----------------------




    // Start of PART - 4   -----------------------

    Car c; 
    
    c.set_car_to_moving(); 
    c.print_car_wheels_state(); 

    c.set_car_to_stopped(); 
    c.print_car_wheels_state();

    // End of Part - 4     -----------------------


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

void Wheel::set_wheel_state(string state)
{
    this->state = state;
}

string Wheel::get_wheel_state()
{
    return state;
}

void Car::set_car_to_moving()
{
    for(int i = 0; i < 4; i++)
        wheel[i].set_wheel_state("Turning");
    
}

void Car::set_car_to_stopped()
{
    for(int i = 0; i < 4; i++)
        wheel[i].set_wheel_state("Stopped");
}

void Car::print_car_wheels_state()
{
    for(int i = 0; i < 4; i++){
        cout << "Wheel 1 is " ;
        cout << wheel[i].get_wheel_state() << endl;
    }
}

