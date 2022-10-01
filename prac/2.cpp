#include<iostream>

using namespace std;

class RomanType
{
    int x;
    string rom;
public:
    RomanType();
    RomanType(int);
    RomanType(string);
    void setRom();
    void setint();
    void dispRom();
    void dispint();
    void disp();
    void setnewRom(string);
    void setnewint(int);
};

int main()
{
    // RomanType r(10);
    RomanType r2("MDCLXVII");
    r2.disp();
    return 0;
}

RomanType::RomanType()
{
    x = 0;
    rom = "";
}

RomanType::RomanType(int x)
{
    this->x = x;
    setRom();
}

RomanType::RomanType(string rom)
{
    this->rom = rom;
    setint();
}

void RomanType::setRom()
{
    int rem,def;
    def = x;
    rem = x/1000;
    for(int i = 0; i < rem; i++)
        rom += 'M';
    x = x%1000;
    rem = x/500;
    for(int i = 0; i < rem; i++)
        rom += 'D';
    x = x%500;
    rem = x/100;
    for(int i = 0; i < rem; i++)
        rom += 'C';
    x = x%100;
    rem = x/50;
    for(int i = 0; i < rem; i++)
        rom += 'L';
    x = x%50;
    rem = x/10;
    for(int i = 0; i < rem; i++)
        rom += 'X';
    x = x%10;
    rem = x/5;
    for(int i = 0; i < rem; i++)
        rom += 'V';
    x = x%5;
    rem = x;
    for(int i = 0; i < rem; i++)
        rom += 'I';
    x = def;
}

void RomanType::dispRom()
{
    cout << rom << endl;
}

void RomanType::setint()
{
    int req = 0;
    for(int i = 0; i < rom.length(); i++){
        if(rom[i] == 'M')
            req += 1000;
        if(rom[i] == 'D')
            req += 500;
        if(rom[i] == 'C')
            req += 100;
        if(rom[i] == 'L')
            req += 50;
        if(rom[i] == 'X')
            req += 10;
        if(rom[i] == 'V')
            req += 5;
        if(rom[i] == 'I')
            req += 1;
    }
    x = req;
}

void RomanType::dispint()
{
    cout << x << endl;
}

void RomanType::setnewRom(string rom)
{
    this->rom = rom;
    setint();
}

void RomanType::setnewint(int x)
{
    this->x = x;
    setRom();
}

void RomanType::disp()
{
    cout << "Roman Value : " << rom << endl;
    cout << "Integer Value : " << x << endl;
}