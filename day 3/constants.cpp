#include<iostream>
using namespace std;
// symbolic constants -> macros

#define ll long long

#define X 25;

int main(){

    const float PI = 3.14;

    // const float g; -> should be initialized at the time

    const int Y = 35;

    // const take actual memory size, but macros doesn't take any extra size in memory...

    cout << X; // at the runtime, this will be replaced by cout << 25;,

    const int num = 25;
    int num1 = 1;

    num1+=1;
    // num+=1; -> can't change the value of a constant var

    ll vansh;

    return 0;
}