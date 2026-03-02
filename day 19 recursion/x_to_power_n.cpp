#include<iostream>
using namespace std;

int pow(int x, int n){
    
    //0(n)
    
    if(n == 1){
        return 2;
    }

    return x * pow(x, n-1);
}

int powOptimized(int x, int n){
    
    //0(logn)

    if(n == 0){
        return 1;
    }

    int halfPower = powOptimized(x, n/2);
    int halfPowerSquare = halfPower * halfPower;

    if(n % 2 != 0){
        return 2 * halfPowerSquare;
    }

    return halfPowerSquare;
}

int main(){
    int x = 2;
    int n = 10;
    // cout << pow(x,n) << endl;
    cout << powOptimized(x,n) << endl;
}