#include<iostream>
#include<fstream>
using namespace std;



int main(){
    // File ko open karna
    ofstream fout;
    fout.open("zoom.txt"); // create kar dega aur open kr dega
    // write kr sakte ho
    fout << "Hello India";

    fout.close(); // Resourse release 
}