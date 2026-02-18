#include<iostream>
using namespace std;

int main(){
    int arr[] = {5,4,3,9,2};
    int max = arr[0];

    int n = sizeof(arr) / sizeof(int);

    for(int i = 1; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    cout << "Max value : " << max << endl;
}