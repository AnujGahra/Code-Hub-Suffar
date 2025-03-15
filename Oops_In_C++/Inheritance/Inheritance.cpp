// Inheritance
// The capability of a class to derive property and characteristic from another class. 

#include<iostream>
using namespace std;


class Human {
    private:
    int a;
    protected:
    int b;
    public:
    int c;


    void fun(){
        a = 10;
        b = 20;
        c = 30;
    }
};

int main(){
    Human Anuj;
    // Anuj.c = 10;
    Anuj.fun();
};