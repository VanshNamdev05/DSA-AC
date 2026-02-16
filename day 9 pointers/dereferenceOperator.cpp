#include<iostream>
using namespace std;

int main(){
    // gets the value of the variable pointed by any pointer

    int a = 10;
    int *ptr = &a;

    cout << &a << " " << ptr << endl;
    cout << a << " " << *ptr << " " << *(&a) << endl;

    // *operator can update the value of the original variable

    *ptr = 20;

    cout << a << endl;
}