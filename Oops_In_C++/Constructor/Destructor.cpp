#include <iostream>
using namespace std;

class Customer {
    string name;
    int *data;

public:
    // Constructor
    Customer() {
        cout << "Constructor is called\n";
        data = new int; // Allocate memory dynamically
    }

    // Destructor
    ~Customer() {
        cout << "Destructor is called\n";
        delete data; // Free allocated memory
    }
};

int main() {
    Customer A1; // Constructor is called
    return 0;    // Destructor is called when A1 goes out of scope
}
