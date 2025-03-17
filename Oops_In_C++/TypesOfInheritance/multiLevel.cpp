#include <iostream>
using namespace std;

// Base Class
class A {
public:
    void displayA() {
        cout << "This is Class A (Base Class)" << endl;
    }
};

// Derived Class B from A
class B : public A {
public:
    void displayB() {
        cout << "This is Class B (Derived from A)" << endl;
    }
};

// Derived Class C from B (Multilevel Inheritance)
class C : public B {
public:
    void displayC() {
        cout << "This is Class C (Derived from B)" << endl;
    }
};

int main() {
    C obj; // Object of Class C

    // Accessing all functions from Class A, B, and C
    obj.displayA();  // Function from Class A
    obj.displayB();  // Function from Class B
    obj.displayC();  // Function from Class C

    return 0;
}
