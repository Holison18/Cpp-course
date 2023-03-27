#include <iostream>

using namespace std;

// create an employee class
class employee{
    private:
        string name;
        unsigned int employee_number;
    
    public:
        // create a getter function
        void get_data(){
            cout<<"Enter name: ";cin>>name;
            cout<<"Enter number: ";cin>>employee_number;
        }

        // create a setter function
        void show_data(){
            cout<<"Name: "<<name<<endl;
            cout<<"Number: "<<employee_number<<endl;
        }
};

// create a manager class
class manager:public employee{
    private:
        string title;
        float dues;
    public:
        // create a getter function
        void get_data(){
            employee::get_data();
            cout<<"Title: ";cin>>title;
            cout<<"dues: ";cin>>dues;
        }

        // print data 
        void show_data(){
            employee::show_data();
            cout<<"Title: "<<title<<endl;
            cout<<"Dues: "<<dues<<endl;
        }
};

// create a scientist class 
class scientist:public employee{
    private:
        string publication;
    public:
        // create a getter function
        void get_data_sci(){
            employee::get_data();
            cout<<"Publications ";cin>>publication;
        }

        // print data 
        void show_data_sci(){
            employee::show_data();
            cout<<"Publications: "<<publication<<endl;
            
        }
};

class laborer:public employee{

};

// multiple inheritance
class foreman:public manager, public scientist{

};

// multiple level inheritance
class matron:public laborer{

};

int main(){
    // instantiate a manager object
    manager m1;
    m1.get_data();  // get data
    m1.show_data(); // print data

    // instantiate a scientist object
    scientist s1;
    s1.get_data_sci();
    s1.show_data_sci();

    // instantiate a laborer object
    laborer l1;
    l1.get_data();
    l1.show_data();

    // instantiate a foreman object
    foreman f1;
    f1.get_data_sci();
    f1.show_data_sci();

    // instantiate a matron object
    matron m2;
    m2.get_data();
    m2.show_data();
    

    return 0;

}