#include<iostream>
using namespace std;

int fact(int n){
    int ans = 1;

    for(int i = 1 ; i <= n ; i++){
        ans *= i;
    }
    return ans;
}

int main(){
    cout << fact(0) << endl << fact(1) << endl << fact(2) << endl << fact(3) << endl << fact(4) << endl << fact(5) << endl;;
}