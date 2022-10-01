#include <iostream>
#include <string> 
#include <sstream> 

using namespace std; 

string int_to_string(int v) { 
    stringstream ss;
    ss << v;
    return ss.str();
}

// Address class here 

// Employee class here 

// Wheel class here 

// Car class here 


int main() { 

    // Start of PART - 1  -----------------------
    // Address a; 

    // a.house_no = 4; 
    // a.street = 25; 
    // a.city = "Peshawar"; 
    // a.country = "Pakistan";

    // cout << a.get_full_address() << endl;

    // End of Part - 1    -----------------------




    // Start of PART - 2  -----------------------

    // Employee e1; 

    // e1.set_current_address(4, 25, "Peshawar", "Pakistan"); 
    // e1.set_permanent_address(14, 9, "Lahore", "Pakistan"); 
    // e1.print_addresses();  

    // End of Part - 2     -----------------------




    // Start of PART - 3   -----------------------

    // Wheel w1; 

    // w1.set_wheel_state("Turning"); 
    // cout << w1.get_wheel_state() << endl; 

    // End of Part - 3     -----------------------




    // Start of PART - 4   -----------------------

    // Car c; 
    
    // c.set_car_to_moving(); 
    // c.print_car_wheels_state(); 

    // c.set_car_to_stopped(); 
    // c.print_car_wheels_state();

    // End of Part - 4     -----------------------


    return 0; 
}