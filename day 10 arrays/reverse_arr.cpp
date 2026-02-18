#include<iostream>
using namespace std;

int main(){
    int arr[] = {5,4,3,9,2};
    int n = sizeof(arr) / sizeof(int);
    int e = n-1;

    for(int i = 0; i <= e; i++, e--){
        swap(arr[i], arr[e]);
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}