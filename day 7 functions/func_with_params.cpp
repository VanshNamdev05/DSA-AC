#include<iostream>
using namespace std;

int sum(int a, int b=1){
    return a+b;
}

int main(){
    int ans = sum(1,2);
    cout << ans << endl;

    int ans1 = sum(1);
    cout << ans1 << endl;
}