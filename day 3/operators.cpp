#include<iostream>
using namespace std;

int main(){
    // arithmetic -> two times, binary and unary
    // binary -> +, -, *, /, %
    // unary -> ++, --

    // ARITHMETIC
    int a = 3;
    int b = 5;

    cout << a+b << endl;
    cout << a-b << endl;
    cout << a*b << endl;
    cout << a/b << endl;
    cout << a%b << endl;


    // UNARY
    int c = 3;
    c++; // c = c + 1
    c--; // c = c - 1
    cout << c++ << endl; //first print then update
    cout << c << endl; 
    cout << ++c << endl; // first update then print
    cout << c << endl;

}