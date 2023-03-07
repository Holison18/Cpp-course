#include <iostream>

using namespace std;

int main(){
    /*
    There are basically two main types of type conversion in cpp
    1. Implicit type conversion and 
    2. Explicit type conversion or type casting

    Explicit type conversion includes three types
    1. Casting notation
    2. Function type casting or Old C++ style type conversion
    3. Type conversion operatior
    */

    // Casting notation
    int age = 23;
    double age2;

    // convert age to double
    age2 = (double)age;
    cout<<age2<<endl;

    // Function style casting
    int age3 = 74;
    double age4;

    // converting age to double
    age4 = double(age3);
    cout<<age4<<endl;
}