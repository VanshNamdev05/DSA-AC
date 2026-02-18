#include<iostream>
using namespace std;

void func(int arr[]){
    arr[0] = 1000;
}

void func1(int *ptr){
    ptr[0] = 1000;
}

void printArr(int arr[], int n){
    for(int i = 0;  i < n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[] = {1,2,3};

    // cout << arr << " " << &arr << endl;

    // cout << *arr << endl; // arr[0]
    // cout << *(arr+1) << endl; // arr[1]
    // cout << *(arr+2) << endl; // arr[2]

    // func1(arr);

    // cout << arr[0] << endl;

    int n = sizeof(arr) / sizeof(int);

    printArr(arr,n);
    
}