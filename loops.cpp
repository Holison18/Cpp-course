#include <iostream>

using namespace std;

int main(){
    // calculate the sum of integers

    int integer_value;
    cout<<"Enter an integer: ";
    cin>>integer_value;

    int total = 0;
    for(int i = 0;i<=integer_value;i++){
        total+=i;
    }

    cout<<"Ans: "<<total<<endl;
    cout<<"\n"<<endl;
    // ranged based for loop
    /*
    syntax:
    for (variable:collection){
        statement
    }
    */ 

    cout<<"Printing the values from my_array"<<endl;
    int my_array[] = {1,2,3,4,5,6,7,8,9,10};
    for(int i:my_array){
        if(i!=6){
            cout<<1<<endl;
            break;
        }else
            continue;
    }
    cout<<"\n"<<endl;

    // While loops are used to perform iterations when a particular condition is true
    // for example;
    int num1=0;
    while(num1<=5){
        cout<<num1<<" ";
        num1 ++;
    }
    cout<<"\n"<<endl;

    // performing sum of positive numbers only
    int sum = 0;
    int num2;
    cout<<"Enter a positive number: ";
    cin>>num2;

    while(num2>=0){
        // add num2 to sum
        sum += num2;

        // take another input from the user
        cout<<"Enter another number: ";
        cin>>num2;
    }
    // print the sum of all the positive numbers inputted
    cout<<"The sum of the positive numbers you inputted is: "<<sum<<endl;
    cout<<"\n"<<endl;

    //  Do whiles loops will perform at least one iteration and later check the conditions
    //For example; Print numbers from 1 to 5
    int i = 1;
    do{
        cout<<i<<" ";
        ++i;
    }while (i<=5);


}