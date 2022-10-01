#include<iostream>
#include<vector>
#include<typeinfo>

using namespace std;

void output_vectors(vector<int> v);
void reverse_output_vector(vector<int> v);

int main()
{
    vector<int> marks;
    for(int i = 1; i <= 5; i++)
        marks.push_back(i);
    output_vectors(marks);
    reverse_output_vector(marks);
    //Erasing
    auto it = marks.begin();
    marks.erase(it + 2);                //index 2
    output_vectors(marks);
    /*
    Alternative:
        vector<int> marks{1,2,3,4,5};
    */
    //    cout << marks[5] << endl;
    // cout << typeid(marks.begin()).name() << endl;
    return 0;
}

void output_vectors(vector<int> v)
{
    cout << "[ ";
    for(auto i = v.begin(); i != v.end(); i++)
        cout << *i << ' ';
    cout << ']' << endl;

    /*
    for(int x : v)                              //Python For loop               For each element in v ORR For each integer in vector v
        cout << x << endl;
    */
}

void reverse_output_vector(vector<int> v)
{
    cout << "[ ";
    for(auto i = v.rbegin(); i != v.rend(); i++)
        cout << *i << ' ';
    cout << ']' << endl;
}

// API = Application Programming Interface
// Interface which you use to interat with class                
//List of public functions
//The collection of all those public function in the class