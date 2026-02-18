#include<iostream>
using namespace std;

void printArr(int *ptr, int n){
    for(int i = 0; i < n; i++){
        // cout << *ptr << endl;
        // ptr = ptr + 1;
        
        cout << *(ptr+i)<< endl;
    }
}

int main(){
    
    // int x = 10;
    // int *ptr = &x;

    // int y = 25;
    // ptr = &y;

    // cout << *ptr << endl;//25

    // This is not possible in arrays, ptrs in array act as a const ptr

    // int arr[5];
    // cout << arr << endl;
    // int y = 25;
    // arr = &y; // not possible

    // int arr[] = {1,2,3,4,5};
    // int n = 5;

    // printArr(arr,n);

    int a[20] = {1,2,3,4,5,6};
    int *ptr1 = a;
    int *ptr2 = ptr1+3;

    cout << *ptr2 << endl;
    cout << *ptr1 << endl;

    cout << ptr2 - ptr1 << endl; // 3 integers space

    cout << (ptr1 > ptr2) << endl;
    cout << (ptr2 > ptr1) << endl;
    cout << (ptr2 == ptr1) << endl;
    cout << (ptr1 == a) << endl;
    
}