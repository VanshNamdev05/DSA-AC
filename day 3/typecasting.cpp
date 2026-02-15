#include<iostream>
using namespace std;

int main(){

    // implicit -> done by compiler -> to avoid data loss -> also called type promotion
    // bool -> char -> int -> float -> double

    cout << (10 / 3) << endl;
    cout << (10/3.0) << endl;

    cout << ('A' - 0) << endl;
    cout << ('a' - 0) << endl;

}