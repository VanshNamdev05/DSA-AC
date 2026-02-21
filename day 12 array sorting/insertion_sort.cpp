#include<iostream>
using namespace std;

void insertionSort(int *arr, int n){
    for(int i = 1; i < n; i++){
        int curr = arr[i];
        int prev = i - 1;

        while(prev >= 0 && arr[prev] > curr){
            swap(arr[prev], arr[prev+1]);
            prev--;
        }
    }
}

int main(){

    int arr[5] = {5, 1, 3, 2, 4};
    int n = 5;

    insertionSort(arr, n);

    for(int i : arr){
        cout << i << " ";
    }

}