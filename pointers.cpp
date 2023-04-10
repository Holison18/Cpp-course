#include <iostream>

using namespace std;

int add_one(int* num1);

void swap(int& x, int& y);

void swap2(int* x, int* y);

void print_array(int* arr, int size);

int main(){
    int num1 = 5;

    cout<<"num1: "<<num1<<endl;
    cout<<"Address of num1: "<<&num1<<endl;

    int added = add_one(&num1);
    cout<<"Added: "<<added<<endl;

    cout<<num1<<endl;


    //using pointers with arrays
    int* ptr;
    int arr[5];
    ptr = arr;

    // ask the user for inputs for the array
    for(int i = 0; i < 5; i++){
        cout<<"Enter a number: ";
        cin>>*(ptr+i);
    }

    // print the array
    for(int i = 0; i < 5; i++){
        cout<<*(ptr+i)<<endl;
    }

    /*
    Passing pointers to functions
    This is called passing by reference
    the address of the variable is passed to the function  
    */
    cout<<"\n\nPassing pointers to functions"<<endl;
    int arr2[5] = {1,2,3,4,5};
    print_array(arr2, 5);

    // we can also pass by reference without the use of pointers
    // initialize variables
    int a = 1, b = 2;

    cout<<"\nPassing by reference without pointers"<<endl;
    // print values before swapping
    cout << "Before swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // call function to swap numbers
    swap(a, b);

    cout << "\nAfter swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;


    cout<< "Passing by reference with pointers" <<endl;
    int m = 10,n=20;
    // printing the values before swapping
    cout<< "\nBefore swapping the values" << endl;
    cout<< "m = " << m << endl;
    cout<< "n = " << n << endl;

    swap2(&m,&n);
    cout<< "\nAfter swapping the values" << endl;
    cout<< "m = " << m << endl;
    cout<< "n = " << n << endl;


    // dynamic memory allocation 
    // using new and delete
    cout<<"\n\nDynamic memory allocation"<<endl;
    int* p = new int;
    *p = 5;
    cout<<*p<<endl;
    delete p;

}

int add_one(int* num){
    ++*num;
    return *num;
}

void print_array(int* arr, int size){
    for(int i = 0; i < size; i++){
        cout<<*(arr+i)<<endl;
    }
}

void swap(int& x, int& y){
    int temp = x;
    x = y;
    y = temp;
}

void swap2(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}