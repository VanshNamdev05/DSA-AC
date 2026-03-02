#include <iostream>
#include <vector>
using namespace std;

int firstOcc(vector<int> arr, int n, int target, int i){
    if(i == n){
        return -1;
    }

    if(arr[i] == target){
        return i;
    }
    else{
        return firstOcc(arr,n,target,i+1);
    }
}

int main(){
    vector<int> arr = {1,2,3,3,3,4};
    cout << firstOcc(arr, arr.size(), 4, 0) << endl;
}