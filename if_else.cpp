#include <iostream>

using namespace std;

int main(){
    // Let's create a simple calculator
    int option;
    cout<<"________CALCULATOR__________"<<endl;
    cout<<"What operation do you want to perform?"<<endl;
    cout<<"[1]Addition"<<endl;
    cout<<"[2]Subtraction"<<endl;
    cout<<"[3]Division"<<endl;
    cout<<"[4]Multiplication\n"<<endl;
    cout<<"Enter option: ";
    cin>>option;

    if (option==1){
        float num1;
        float num2;
        cout<<"First number: ";
        cin>>num1;
        cout<<"Second number: ";
        cin>>num2;
        float results = num1 + num2;
        cout<<num1<<" + "<<num2<<" = "<<results<<endl;
    }else if(option == 2){
        float num1;
        float num2;
        cout<<"First number: ";
        cin>>num1;
        cout<<"Second number: ";
        cin>>num2;
        float results = num1 - num2;
        cout<<num1<<" - "<<num2<<" = "<<results<<endl;
    }else if(option == 3){
        float num1;
        float num2;
        cout<<"First number: ";
        cin>>num1;
        cout<<"Second number: ";
        cin>>num2;
        float results = num1 / num2;
        cout<<num1<<" / "<<num2<<" = "<<results<<endl;
    }else if(option == 4){
        float num1;
        float num2;
        cout<<"First number: ";
        cin>>num1;
        cout<<"Second number: ";
        cin>>num2;
        float results = num1 * num2;
        cout<<num1<<" * "<<num2<<" = "<<results<<endl;
    }else
        cout<<"Wrong Input!"<<endl;

    return 0;

}