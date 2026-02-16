#include<iostream>
using namespace std;

int main(){
    int a = 10;

    int *ptr = &a;

    cout << "Value of &a : " << &a << endl;
    cout << "Value of ptr : " << ptr << endl;
    cout << "Value of &ptr : " << &ptr << endl;
    cout << "Value of *ptr : " << *ptr << endl;

    cout << "Size of &a : " << sizeof(&a) << endl;
    cout << "Size of ptr : " << sizeof(ptr) << endl;
    cout << "Size of &ptr : " << sizeof(&ptr) << endl;
    cout << "Size of *ptr : " << sizeof(*ptr) << endl;

    float pi = 3.14;
    float *ptr1 = &pi;

    float **ptr2 = &ptr1;

    cout << &pi << " " << ptr1 << endl;
    cout << &ptr1 << " " << ptr2 << endl;
}