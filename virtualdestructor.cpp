#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base constructor called" << endl;
    }

    // Virtual destructor
    virtual ~Base() {
        cout << "Base destructor called" << endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived constructor called" << endl;
    }

    ~Derived() {
        cout << "Derived destructor called" << endl;
    }
};

int main() {
    // Pointer of base class pointing to derived class object
    Base* obj = new Derived();

    // Deleting the object
    delete obj;

    return 0;
}
