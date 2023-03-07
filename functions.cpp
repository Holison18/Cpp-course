#include <iostream>


using namespace std;

// function declaration
void circumference_of_circle(float rad);
void area_of_circle(float rad);

int main() {
    // A function is a block of code that performs a specific function
    /*
    Types of functions
    1. Predefined functions
    2. User defined functions
    */


    // function call
    cout<<"Select a option to perform!"<<endl;
    cout<<"[1] Calculate the circumference of a circle"<<endl;
    cout<<"[2] Calculate the area of a circle"<<endl;
    int response;
    cout<<">>> ";
    cin>>response;

    // declare the radius variable
    float radius;

    if (response == 1){
        cout<<"Enter Radius: ";
        cin>>radius;
        circumference_of_circle(radius);
    }else if(response == 2){
        cout<<"Enter Radius: ";
        cin>>radius;
        area_of_circle(radius);
    }else
        cout<<"Wrong Input! Rerun the program"<<endl;
 

   return 0;
}

// function definition
void circumference_of_circle(float rad){
    float circumference = 2 * 3.143 * (rad *rad);
    cout<<"The circumference is: "<<circumference<<endl;
}

void area_of_circle(float rad){
    float area = 3.143 * (rad * rad);
    cout<<"The area is: "<<area<<endl;
}