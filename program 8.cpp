#include <iostream>
using namespace std;

class MyClass {
private:
    int data;
public:
    MyClass(int d) : data(d) {}

    void setData(int d) {
        this->data = d; // Using 'this' pointer to access member variable
    }

    int getData() {
        return this->data; // Using 'this' pointer to access member variable
    }

    void* operator new(size_t size) {
        cout << "Custom new operator called" << endl;
        void* p = ::new MyClass(0); // Call global new operator
        return p;
    }

    void operator delete(void* p) {
        cout << "Custom delete operator called" << endl;
        ::delete p; // Call global delete operator
    }
};

int main() {
    // Using 'new' to dynamically allocate memory for object
    MyClass* obj = new MyClass(5);

    // Accessing object's member functions
    cout << "Data: " << obj->getData() << endl;

    // Using 'delete' to free dynamically allocated memory
    delete obj;

    return 0;
}
