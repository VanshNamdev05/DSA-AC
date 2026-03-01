#include<iostream>
using namespace std;

void fun(){
    cout << "Fun Call" << endl;
    // fun(); // will run infinitely if not used with base case
}

int main(){
    // when a function calls itself again and again then that is called recursion
    fun();
}