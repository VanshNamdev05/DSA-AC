#include<iostream>
using namespace std;

void hii();

void sayHello(){
    cout << "Hello \n";
    hii();
}

void hii(){
    cout << "HI";
}

int main(){
    sayHello();
}