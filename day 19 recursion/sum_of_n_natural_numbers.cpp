#include<iostream>
using namespace std;

int sumUptoN(int n){
    if(n == 1){
        return 1;
    }
    return n + sumUptoN(n-1);
}

int main(){
    cout << sumUptoN(5) << endl;
}