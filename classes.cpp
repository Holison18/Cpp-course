#include <iostream>

using namespace std;

class room_dimension{
    private:
        // declararing variables
        double length;
        double height;
        double width;
    public:
        // take parameter method that takes the parameters from the user
        room_dimension(){
            cout<<"Enter the length of the room: ";
            cin>>length;
            cout<<"Enter the height of the room: ";
            cin>>height;
            cout<<"Enter the width of the room: ";
            cin>>width;
        }
        // calculate_volume function which calculates the volume
        double calculate_volume(){
            return length * height * width;
        }
        // calculate_area function which calculates the area 
        double calculate_area(){
            return length * width;
        }

};

int main(){

    room_dimension new_room;                                                                                                                        
    cout<<"The area of the room is: "<<new_room.calculate_area()<<endl;
    cout<<"The volume of the room is: "<<new_room.calculate_volume()<<endl;

}



