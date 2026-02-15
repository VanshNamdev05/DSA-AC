#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int n){
    if(n == 1){
        return false;
    }
    for(int i = 2; i <= sqrt(n); i++){
        if(n % 2 == 0){
            return false;
            break;
        }
    }
    return true;
}

void allPrime(int range){
    // print all prime num from 2 to n
    for(int i = 2; i <= range; i++){
        if(isPrime(i)){
            cout << i << endl;
        }
    }
}

int main(){
    allPrime(20);
}