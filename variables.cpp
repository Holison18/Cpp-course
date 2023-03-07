#include <iostream>

using namespace std;

int main(void){
    // variables in cpp
    // in cpp we have integers, characters, string, floating point numbers and boolean values

    int age = 25;

    // char is used for storing characters. The value is enclosed in single qoutes
    char sex ='M';
    string name  = "Kobina Akofi-Holison";
    string favourite_quote = "With God all things are possible";
    float weight = 69.56;
    double balance = 143432.4943; // Double is used to store decimals and exponet
    bool love_color_red = true;

    cout<<"My name is "<<name<<endl;
    cout<<"I am "<<age<<" years old"<<endl;
    cout<<"I am a "<<sex<<endl;
    cout<<"I weigh "<<weight<<" kg"<<endl;
    cout<<"My favourite quote is "<<favourite_quote<<endl;
    cout<<"Bank account balance is: "<<balance<<endl;

    // in C++ we declare a constant variable by using the const keyword
    const string food = "koko";
    cout<<food<<endl;

    // wide character 
    wchar_t abbrev = 'Y';
    cout<<abbrev<<endl;

    // C++ type modifiers
    /*
    1. Unsigned
    2. Signed
    3. Short
    4. Long

    datatypes that can be modified with the above modifiers include;
    1.int
    2.double
        3.char
    */

    unsigned int speed = 843;
    unsigned short int money = 8493;
    cout<<speed<<endl;
    cout<<money<<endl;

    long long int light_years = 28342984238402;
    cout<<light_years<<endl;
    
    /*
    Derived Datatypes in cpp
    They include;
    1. Pointers
    2. Arrays
    3. Functions types
    4. structures
    */
}