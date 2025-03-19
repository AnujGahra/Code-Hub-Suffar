// polymorphism means "many forms" and allows objects of different classes to be treated as objects of a common type, enabling them to respond differently to the same method call.


// Function OverLoading 
#include<iostream>
using namespace std;


class Area {
    public:
    int calculateArea(int r){ // circle
        return 3.14* r * r;
    }

    int calculateArea(int l, int b){ // rectangle
        return l*b;
    }
};

int main(){



    Area A1;
    cout << "Circle Area: " << A1.calculateArea(4) << endl;
    cout << "Rectangle Area: " << A1.calculateArea(4, 3) << endl;


    return 0;

};


