#include<iostream>
using namespace std;

int friendsPairing(int n){

    if(n == 1){
        return 1;
    }
    if(n == 2){
        return 2;
    }

    // single
    // int ans1 = friendsPairing(n-1);

    // pair
    // int ans2 = (n-1) * friendsPairing(n-2);
    // return ans1 + ans2;

    return friendsPairing(n-1) + (n-1) * friendsPairing(n-2);
}

int main(){
    cout << friendsPairing(4);
}