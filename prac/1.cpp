#include<iostream>

using namespace std;

class Clock
{
    int hour;
    int min;
    int sec;
public:
    Clock();
    Clock(int,int,int);
    void settime(int,int,int);
    void incrementsec();
    void incrementmin();
    void incrementhour();
    void disp();
};

int main()
{
    Clock c(24,59,59);
    c.incrementsec();
    c.disp();
    return 0;
}

Clock::Clock()
{
    hour = 0;
    min = 0;
    sec = 0;
}

Clock::Clock(int hour, int min, int sec)
{
    hour = hour%24;
    min = min%60;
    sec = sec%60;
    this->hour = hour;
    this->min = min;
    this->sec = sec;
}

void Clock::settime(int hour, int min, int sec)
{
    hour = hour%24;
    min = min%60;
    sec = sec%60;
    this->hour = hour;
    this->min = min;
    this->sec = sec;
}

void Clock::incrementsec()
{
    sec ++;
    if(sec == 60){
        sec = 0;
        min++;
        if(min == 60){
            min = 0;
            hour++;
            if(hour == 24)
                hour = 0;
        }
    }
}

void Clock::incrementmin()
{
    min++;
    if(min == 60){
        min = 0;
        hour++;
        if(hour == 24)
            hour = 0;
    }
}

void Clock::incrementhour()
{
    hour++;
    if(hour == 24)
        hour = 0;
}

void Clock::disp()
{
    cout << hour << " : " << min << " : " << sec << endl;
}