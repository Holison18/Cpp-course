#include <iostream>
using namespace std;

int main(){
    // declaring a two dimensional array
    int my_arr1[3][3] = {{1,2,3},
                         {4,5,6},
                         {7,8,9}};
    // print the array
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            cout<<"my_arr["<<i<<"]"<<"["<<j<<"]"<<"= "<<my_arr1[i][j]<<" ";
        }
        cout<<endl;
    }


}