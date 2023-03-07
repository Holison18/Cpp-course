 #include <iostream>
 using namespace std;

 class dvla{
   public:
      string name;
      string model;
      string color;
      string carNumber;
      string new_driver;
      string regDate;
      string expDate;

      void car_details(){
         cout<<"What's your car name: "<<endl;
         cin>>name;
         cout<<"What's your car model: "<<endl;
         cin>>model;
         cout<<"What's your car color: "<<endl;
         cin>>color;
      }

      void print_details(){
         
      }
 };

int main(){
   
   dvla car1;
   car1.carNumber ="AS 149 2023";
   car1.regDate = "01 / 01 /2023";
   car1.expDate = "01 / 07 / 2024";
   car1.car_details();
   

   dvla car2;
   car2.carNumber = "ER 666 2023";
   car2.regDate = "02 /06 2023";
   car2.expDate = "06 /12 /2024";


}
