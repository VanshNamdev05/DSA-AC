#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n = 13;
    bool isPrime = true;

    int limit = sqrt(n);

    for(int i = 2; i <= limit; i++){
        if(n % i == 0){
            isPrime = false;
            break;
        }
    }

    isPrime ? cout << "Prime" : cout << "Not Prime";
}