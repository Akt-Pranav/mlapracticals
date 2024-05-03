/*Program no. 6
Name:Pranav Mahajan 
roll no. : D4*/


#include <iostream>
using namespace std;
class person {
public:
	string name;
	int code;
	person(string name, int code) {
    	this->name = name;
    	this->code = code;
	}
	void display() {
    	cout << "----------------------------------"<<endl;
    	cout << "         	Google LLC"<<endl;
    	cout << "----------------------------------"<<endl;
    	cout << "Name: " << name << endl;
    	cout << "Code: " << code << endl;
	}
};
class account : public person {
public:
	int experience;
	account(string name, int code, int experience) : person(name, code) {
    	this->experience = experience;
	}
	void display() {
    	person::display();
    	cout << "Experience: " << experience << endl;
	}
};
class admin : public person {
public:
	int pay;
	admin(string name, int code, int pay) : person(name, code) {
    	this->pay = pay;
	}
	void display() {
    	cout << "Pay: " << pay << endl;
    	cout << "----------------------------------";
	}
};
class master : public account, public admin {
public:
	master(string name, int code, int experience, int pay) : account(name, code, experience), admin(name, code, pay) {}
	void display() {
    	account::display();
    	admin::display();
	}
};
int main() {
	string nm;
	int c,p,ex;
	cout<<"Enter the name of the employee: ";
	cin>>nm;
	cout<<"Enter the code of the employee: ";
	cin>>c;
	cout<<"Enter the experience of the employee: ";
	cin>>ex;
	cout<<"Enter the salary of the employee: ";
	cin>>p;
    
	master m(nm,c,ex,p);

	m.display();
	return 0;
}
