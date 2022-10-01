#include<iostream>
using namespace std;

class Address
{
  public:
  int house_no;
  int street;
  string city;
  string country;
  Address(int H_no,int St,string ci,string coun);
  void set_full_address(int a,int b,string c,string d);
  string get_full_address();

};

Address::Address(int H_no=0,int St=0,string ci="None",string cout="None")
{
    house_no=H_no;
    street=St;
    city=ci;
    country=cout;
}
void Address::set_full_address(int a,int b,string c,string d)
{
  house_no= to_string(a);
  street= to_string(b);
  city=c;
  country=d;

}

string Address::get_full_address()
{
    string z;
    z = "H. No ";
    z += house_no + " Street," + street + city + country;
    return(z);
}

int main()
{
  Address a1;
  a1.set_full_address(2,45,"pind","Pakistan");
  a1.get_full_address();
}