#include<iostream>
using namespace std;

int main(){
    // loop inside a loop
    int n = 7;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << i << " ";
        }
        cout << endl;
    } 
}