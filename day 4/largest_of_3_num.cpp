#include<iostream>
using namespace std;

int main(){
    int a = 10, b = 20, c = 30;

    if(a >= b && a >= c){
        cout << a << endl;
    }
    else if(b >= c){
        cout << c << endl;
    }
    else{
        cout << c << endl;
    }
}