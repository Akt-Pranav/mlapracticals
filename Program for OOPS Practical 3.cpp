//Program for OOPS Practical 3
#include <iostream>
using namespace std;
class DB;
class DM{
    double m,cm;
 public:
  void getdata(){
      cout<<"\nEnter value of meter : ";
      cin>>m;
      cout<<"Enter value of centimeter : ";
      cin>>cm;
  }  
  friend double sum(DM a ,DB b);
};
class DB{
    double ft,in;
 public:
  void getdata(){
      cout<<"\nEnter value of feet : ";
      cin>>ft;
      cout<<"Enter value of inch : ";
      cin>>in;
  }  
  friend double sum(DM a ,DB b);
};
double sum(DM a,DB b){
   float x,y,z;
   x=(a.m+(a.cm/100));
   y=(b.ft+(b.in/12));
   z=(x+(y*0.304)); //Since 1 ft = 0.304 m
   return z;
}
int main() {
   DM a;
   DB b; 
   cout<<"Enter the values of meter and centimeters->";
   a.getdata();
   cout<<"Enter the values of feet and inches->";
   b.getdata();
   cout<<"\nThe summed value in meter is : "<<sum(a,b)<<" meters";
    return 0;
}
 

