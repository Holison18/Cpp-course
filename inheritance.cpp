// Inheritance is the process whereby certain attributes of a certain class called a  baseclass are passed unto another class called the child 

// let's create real estate application using this concert
// So create a base class called apartment and create base classes for two bedroom apartments, three and so on

#include <iostream>
#include <list>
#include <string.h>

using namespace std;

class apartment{
private:
    float price_of_apartment;
    string apartment;
    string location;
    list<string> room_specification;
    list<string> room_facilities;
    bool is_renovated;
    bool is_occupied;

public:
    void rent_out(){
        int response;
        if(is_occupied == false && is_renovated == false){
            cout<<"Room is not occupied and doesn't need any renovation hence you can go ahead and rent it out"<<endl;
        }else if(is_occupied == false && is_renovated == true){
            cout<<"Room is not occupied but needs renovation."<<endl;
            cout<<"Do you want to renovate room? Enter 1 for yes and 0 for no: ";
            cin>>response;
            if(response == 1){
                cout<<"Room renovated"<<endl;
                is_renovated == true;
            }else if(response == 0){
                cout<<"It is adviced to renovate room before giving it out.But feel free to do so at your own convenience"<<endl;
            }else
                cout<<"Wrong Input"<<endl;
        }else{
            cout<<"Room is occupied and therefore cannot be rented out again"<<endl;
        }
    }

    void add_apartment(){
        string apt_name;
        string apt_location;
        int no_spec;
        int no_fac;
        float price;
        bool is_apt_occupied;
        bool is_apt_renovated;
        string spec;
        string fac;
        int response;

        cout<<"Enter apartment eg (three bed room): ";
        cin>>apt_name;
        cout<<"Location: ";
        cin>>apt_location;
        cout<<"Price: ";
        cin>>price;
        cout<<"Add apartment specification"<<endl;
        cout<<"No of specifications you want to add: ";
        cin>>no_spec;
        for(int i=0;i<no_spec;i++){
            cout<<"Specification: ";
            cin>>spec;
            room_specification.push_back(spec);
        }
        cout<<"\n"<<endl;
        cout<<"Add available facilities"<<endl;
        cout<<"No of facilities you want to add: ";
        cin>>no_fac;
        for(int i=0;i<no_fac;i++){
            cout<<"Facility: ";
            cin>>fac;
            room_specification.push_back(fac);
        }

        // ask user of room is occupied
        cout<<"\n"<<endl;
        cout<<"Is room occupied?(Enter 1 for Yes / 0 for No): ";
        cin>>response;
        if(response == 1){
            is_occupied == true;
        }else if(response == 0){
            is_occupied == false;
        }else
            cout<<"Wrong Input"<<endl;
        cout<<"\n"<<endl;

        // ask user if room needs renovation
        cout<<"Does room need renovation?(Enter 1 for Yes / 0 for No): ";
        cin>>response;
        if(response == 1){
            is_renovated == true;
        }else if(response == 0){
            is_renovated == false;
        }else
            cout<<"Wrong Input"<<endl;

        cout<<"Apartment added succesfully"<<endl;

    }

};

class two_bedroom_apartment:public apartment{

};


int main(){

    two_bedroom_apartment apt1;

    // creat a two bedroom apartment
    cout<<"\t\t\t\t\nMANAGE YOUR APARTMENTS"<<endl;
    cout<<"[1] Rent Apartment"<<endl;
    cout<<"[2] Add Apartment"<<endl;
    cout<<"[3] Exit"<<endl;
    int response;
    cout<<"Enter an option: ";
    cin>>response;
    if(response == 1){
        apt1.rent_out();
    }else if(response == 2){
        apt1.add_apartment();
    }else
        exit(0);

}