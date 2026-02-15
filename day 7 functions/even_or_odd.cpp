#include<iostream>
using namespace std;

void isEven(int num){
    num % 2 == 0 ? cout << "EVEN" : cout << "ODD" << endl;
}

int main(){
    isEven(20);
    cout << endl;
    isEven(21);
}