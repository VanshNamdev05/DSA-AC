#include<iostream>
using namespace std;

int main(){
    int income;
    float tax;
    cout << "Enter income (in Lakhs) : ";
    cin >> income;

    if(income < 5){
        // 0% tax
        tax = 0;
    }
    else if(income <= 10){
        // 20% tax
        tax = 0.2 * income;
    }
    else{
        // 30% tax
        tax = 0.3 * income;
    }

    cout << "Tax : " << (tax * 100000) << endl;
}