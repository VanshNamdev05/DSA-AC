#include<iostream>
using namespace std;

int fact(int n){
    int ans = 1;
    for(int i = 1; i <= n; i++){
        ans *= i;
    }
    return ans;
}

int binCoeff(int n, int r){
    int numerator = fact(n);
    int denominator1 = fact(r);
    int denominator2 = fact(n-r);

    int ans = numerator / ((denominator1) * (denominator2));

    return ans;

}

int main(){
    cout << binCoeff(4,2);
}