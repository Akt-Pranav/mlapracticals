/*program 5:

Name:-Soham Pokharkar
Roll No:- A- D3*/

 #include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string name;
    int age;
    string course;
public:
    Student(string name, int age, string course) : name(name), age(age), course(course) {
        cout << "Constructor called" <<endl;
    }
    Student() {
        cout << "Destructor called" << endl;
    } 
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Course: " << course << endl;
    }
};
int main() {
    Student student1("Soham", 20, "AI");
    student1.displayInfo();
    return 0;
}
