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

    // finding the sum, average and count of the array
    int sum=0;
    int count=0;
    for (int i=0;i<5;i++){
        sum+=my_array[i];
        count++;
    }
    cout<<"Sum: "<<sum<<endl;
    cout<<"Count: "<<count<<endl;

    // calculate average from sum and count
    int average = sum/count;
    cout<<"Average: "<<average<<endl;
    cout<<"\n\n"<<endl;


}