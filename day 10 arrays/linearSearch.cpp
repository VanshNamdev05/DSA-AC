#include<iostream>
using namespace std;

int linSearch(int *arr, int n, int key){
    for(int i = 0; i < n; i++){
        if(arr[i] == key){
            return i;
            break;
        }
    }
    return -1;
}

int main(){
    int arr[] = {2,4,6,8,10,12,14};
    int key = 10;
    int n = sizeof(arr) / sizeof(int);

    int ans = linSearch(arr, n, key);

    if(ans >= 0){
        cout << "Found the key at index : " << ans << endl;
    }
    else{
        cout << "Key not found" << endl;
    }
}