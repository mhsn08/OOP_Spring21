#include<iostream>

using namespace std;

class Wheel
{
    string state;
public:
    void set_wheel_state(string);
    string get_wheel_state();
};

class Car
{
    Wheel wheel[4];
public:
    void set_car_to_moving();
    void set_car_to_stopped();
    void print_car_wheels_state();
};

int main()
{
    Car car;
    char choose;
    while(1){
        cout << "Press 1 to set state of car to turning, 2 for stopping, and E to exit : ";
        cin >> choose;
        if(choose == '1')
            car.set_car_to_moving();
        else if(choose == '2')
            car.set_car_to_stopped();
        else if(choose == 'e' || choose == 'E')
            break;
        else
            cout << "Invalid Input!!!" << endl;
        car.print_car_wheels_state();
    }
    return 0;
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