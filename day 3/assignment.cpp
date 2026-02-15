#include<iostream>
using namespace std;

int main(){
    // also called compound assignment
    // =, +=, -=, *=, /=
    // a+=5 -> a = a + 5

    int a = 10;
    
    a+=5;
    cout << a << endl;
    
    a-=5;
    cout << a << endl;
    
    a*=5;
    cout << a << endl;
    
    a/=5;
    cout << a << endl;
}