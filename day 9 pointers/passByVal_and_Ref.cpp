#include<iostream>
using namespace std;

void passByVal(int a){
    a +=1;
}

void passByRef(int &a){
    a +=1;
}

void passByRef1(int *ptr){
    *ptr += 1;
}

int main(){
    // pass by value -> when parameter is a copy of actual argument variable in memory

    int a = 10;

    passByVal(a);
    cout << "Pass by val : " << a << endl;

    // pass by reference -> when parameter is pointing to the original variable address and any change will reflect in original variable

    passByRef(a);
    cout << "Pass by Ref : " << a << endl;

    passByRef1(&a);
    cout << "Pass by Ref1 : " << a << endl;


}