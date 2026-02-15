#include<iostream>
using namespace std;

double sum(double a, double b){
    cout << a + b << endl;
    return a + b;
}

int sum(int a, int b){
    cout << (a + b) << endl;
    return a + b;
}

int sum(int a, int b, int c){
    cout << a + b + c;
    return a + b+ c;
}

int main(){
    sum(2,3);
    sum(4,3);
    sum(2.5,3.5);
    sum(2,3,5);
}