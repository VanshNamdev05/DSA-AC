#include<iostream>
using namespace std;

int main(){
    string str = "Vansh Namdev";

    cout << str.at(3) << endl;

    cout << str.substr(3) << endl;
    cout << str.substr(3,2) << endl;

    cout << str.find('a') << endl;
    cout << str.find('a', 4) << endl;
    cout << str.find('N') << endl;
    cout << str.find('V') << endl;
    cout << str.find('p') << endl; // equivalent to -1
    cout << int(str.find('p')) << endl;
}