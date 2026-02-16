#include<iostream>
using namespace std;

int main(){
    int *ptr = NULL; //it doesnt point to any valid memory address
    // it stores 0 address

    cout << ptr << endl;

    // not possible to dereference this pointer
    cout << *ptr << endl; // segmentation fault, nothing after this will be printed, code execution will stop

    cout << 10 << endl;
}