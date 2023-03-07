#include <iostream>

using namespace std;

// recursive function to find the factorial of a number
int factorial_fxn(int n){
    if(n==0 || n==1){
        return 1;
    }else{
        return n * factorial_fxn(n-1);
    }
}

int main(){
    // coding factorial

    cout<<"\n\nFinding factorial using a loop\n\n"<<endl;
    int n;
    int factorial = 1;
    cout<<"Enter Number: ";
    cin>>n;

    if(n==0){
        cout<<"0 factorial is 1"<<endl;
    }else if(n==1){
        cout<<"1 factorial is 1"<<endl;
    }else{
        for(int i = 1;i<=n;i++){
            factorial *= i;
        }
        cout<<"The factorial of "<<n<<"is: "<<factorial<<endl;
    }


    // using recursive function to find for the factorial
    cout<<"\n\nFinding factorial using recursive function\n"<<endl;
    int fact = factorial_fxn(n);
    cout<<"The factorial of "<<n<<"is: "<<fact<<endl;
    cout<<"\n\n";
    system("pause");
}