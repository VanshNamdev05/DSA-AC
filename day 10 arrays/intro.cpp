#include<iostream>
using namespace std;

int main(){
    // linear collection of same type of elements that are stored together in contiguous memory space
    int marks[50] = {1,2,3};

    // index 0,1,2 will get values 1,2,3 but after it each value will be 0

    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;

    int m[] = {1,2,3,4,5,6}; // automaticall size will be allocated according to the values, i.e 6

    cout << sizeof(m) << endl; // 24 -> number of bytes m[] occupies...
    cout << sizeof(m) / sizeof(int) << endl; // 24/4 = 6
}