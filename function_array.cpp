#include <iostream>

using namespace std;

// function to calculate the average of an array
float calculate_avg(int arr[],int size){
    float sum = 0;
    for(int i=0;i<size;i++){
        sum += arr[i];
    }
    return sum/size;
}
int main(){
    // passing arrays as function parameters
    int size;
    int arr[50];
    cout<<"====Calculate Average from an array of numbers===="<<endl;
    cout<<"Enter the size of the array: ";
    cin>>size;

    // ask user to enter the elements of the array
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    // calculate the average of the array
    float avg = calculate_avg(arr,size);
    cout<<"The average of the values you entered is: "<<avg<<endl;

    return 0;
}