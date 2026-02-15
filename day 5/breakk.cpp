#include<iostream>
using namespace std;

int main(){
    int n = 1;

    while(n <= 10){
        if(n == 3){
            break;
        }
        cout << n << " ";
        n++;
    }

    cout << endl << "Out of loop now" << endl;
}