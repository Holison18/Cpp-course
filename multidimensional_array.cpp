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

    cout<<"\n\nPrinting the array in another way"<<endl;
    // two dimensionall array can be initialize also as below
    int my_arr3[3][3] = {1,2,3,4,5,6,7,8,9};
    //printing the values of the array
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            cout<<"my_arr["<<i<<"]"<<"["<<j<<"]"<<"= "<<my_arr3[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"\n\nPrinting a three dimensional array"<<endl;
    // creating a three dimensional array
    int my_arr2[3][4][2] = {{{1,2},{3,4},{5,6},{7,8}},
                            {{9,10},{11,12},{13,14},{15,16}},
                            {{17,18},{19,20},{21,22},{23,24}}};

    // print the array
    for (int i=0;i<3;i++){
        for (int j=0;j<4;j++){
            for (int k=0;k<2;k++){
                cout<<"my_arr["<<i<<"]"<<"["<<j<<"]"<<"["<<k<<"]"<<"= "<<my_arr2[i][j][k]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    


}