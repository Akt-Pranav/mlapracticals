//Program for OOPS Practical 2
#include <iostream>
#include <cstdlib> 
#include <ctime>  
#include <string>
using namespace std;
class bank {
private:
    string name;
    long acc_no;
    char type[10];
    long bamt;
public:
   void initalize(){
        cout << "Enter Your name: ";
        cin.ignore();
        getline(cin,name);      
        cout<<"Enter the type of account (Current=c || Saving=s): ";
        cin>>type;
        cout<<"Enter the Balance Amount: ";
        cin>>bamt;
        srand(time(nullptr)); 
        acc_no = rand() % 900000000000 + 100000000000; 
   }
    void deposit(){
        long dep;
        cout<<endl<<"Enter the amount you want to deposit: ";
        cin>>dep;
        bamt=bamt+dep;
        cout<<endl<<"The amount is deposited sucessfully!!!";
        cout<<endl<<"Your Current balance is: "<<bamt;} 
    void enquiry_wd(){
        long wd;
        char opt;
        cout<<endl<<"Your Current balance is: "<<bamt;
        cout<<endl<<"Enter the amount to be Withdrawned: ";
        cin>>wd;
        bamt=bamt-wd;
        cout<<endl<<"The amount is Withdrawned sucessfully!!!";
         cout<<endl<<"Your Available balance is: "<<bamt;
    } 
    void display(){
        cout<<endl<<"------------------------------";
        cout<<endl<<"        Bajaj Bank ";
        cout<<endl<<"------------------------------";
        cout<<endl<<"Name: "<<name;
        cout<<endl<<"Type of account : "<<type;
        cout<<endl<<"Account Number: "<<acc_no;
        cout<<endl<<"Balance Amount: "<<bamt;
        cout<<endl<<"------------------------------";
    }
};
int main(){
 bank b;
 int choice;
 while(1){
      cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~~WELCOME~~~~~~~~~~"
             << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout << "Enter Your Choice\n";
        cout << "\t1. Enter name, Account "
             << "number, Account type\n";
        cout << "\t2. Deposit Money\n";
        cout << "\t3. Balance Enquiry and Withdraw Money\n";
        cout << "\t4. Display the account info\n";
        cout << "\t5. Cancel\n";
        cin >> choice;    
    switch(choice){
     case 1:
      b.initalize();
       break;
     case 2:
      b.deposit();
        break;
     case 3:
      b.enquiry_wd();
       break;
     case 4:
      b.display();
       break;
     case 5:
       exit(1);
       break;
     default:
       cout << "\nInvalid choice\n";
  }
 }
 return 0;
}
Output



