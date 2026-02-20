#include<iostream>
#include<algorithm>
using namespace std;


int main(){
    int arr[8] = {1,4,2,3,5,7,4,2};

    sort(arr, arr+8);
    
    for(int i : arr){
        cout << i << " ";
    }

    cout << endl;
    
    sort(arr, arr+8, greater<int>());
    
    for(int i : arr){
        cout << i << " ";
    }

    return 0;
}