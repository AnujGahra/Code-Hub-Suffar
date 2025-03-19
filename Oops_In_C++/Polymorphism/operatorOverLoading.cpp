#include <iostream>
using namespace std;

class Complex {
    int real, img;

public:
    // Constructor
    Complex(int real = 0, int img = 0) { // Added default constructor
        this->real = real;
        this->img = img;
    }

    // Function to display complex numbers
    void display() {
        cout << real << " + i" << img << endl;
    }

    // Overloaded + operator
    Complex operator+(const Complex &C) { // Pass by reference with const
        return Complex(real + C.real, img + C.img);
    }
};

int main() {
    Complex C1(3, 4);
    Complex C2(4, 6);

    Complex C3 = C1 + C2; // Corrected addition operation

    C3.display();

    return 0;
}
