#include <iostream>
using namespace std;

int main(){
    int my_array[5];
     int m;
    // create a for loop to ask the user to input the values of my_array
    for (int i=0;i<5;i++){
        cout<<"Enter Number: ";
        cin>>m;
        my_array[i]=m;
    }

    // print the inputted values
    for(const int &n:my_array){
        cout<<n<<" ";
    }
    cout<<"\n\n"<<endl;
}