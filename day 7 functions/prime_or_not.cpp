#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int n){
    if(n == 0 || n == 1){
        return false;
    }
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
            break;
        }
    }
    return true;
}

int main(){
    if(isPrime(133)){
        cout << "Prime Number" << endl;
    }
    else{
        cout << "Not a Prime Number" << endl;
    }
}