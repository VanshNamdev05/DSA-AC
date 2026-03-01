#include<iostream>
using namespace std;

void printNum(int n){
    if(n == 1){
        cout << n << endl;
        return;
    }
    cout << n << endl;
    printNum(n-1);
}

int main(){
    printNum(9);
}