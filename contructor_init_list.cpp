#include <iostream>

using namespace std;

// student class 
class student{
    private:
        string name;
        int ID;
    public:
        student(string n,int m) : name(n),ID(m){}

        // setter function
        void get_details(){
            cout<< "Name: " << name << endl;
            cout<< "ID: " << ID << endl;
        }
};
int main(){
    // create an object of the student class
    student s1("John", 1234);
    s1.get_details();
    return 0;
}