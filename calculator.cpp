# include <iostream>

using namespace std;

int  main(){
    cout<<"Calculator"<<endl;
    cout<<"Enter two numbers"<<endl;
    int a,b;
    cout<<"Enter first number: ";cin>>a;
    cout<<"Enter second number: ";cin>>b;
    cout<<"Choose an operation"<<endl;
    bool isRun = true;
   do{ 
        cout<<"[1]Addition"<<endl;
        cout<<"[2]Subtraction"<<endl;
        cout<<"[3]Multiplication"<<endl;
        cout<<"[4]Division"<<endl;
        int choice;
        cout<<"Enter your choice: ";cin>>choice;
        if(choice==1){
            cout<<"The sum of "<<a<<" and "<<b<<" is "<<a+b<<endl;
        }
        else if(choice==2){
            cout<<"The difference of "<<a<<" and "<<b<<" is "<<a-b<<endl;
        }
        else if(choice==3){
            cout<<"The product of "<<a<<" and "<<b<<" is "<<a*b<<endl;
        }
        else if(choice==4){
            cout<<"The quotient of "<<a<<" and "<<b<<" is "<<a/b<<endl;
        }
        else{
            cout<<"Invalid choice"<<endl;
            isRun = false;
        }
   }while(isRun);
}