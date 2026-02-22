#include<iostream>
using namespace std;

int main(){
    string str = "Vansh Namdev";

    for(int i = 0; i < str.length(); i++){
        cout << str[i] << " ";
    }
    cout << endl;

    for(char c : str){
        cout << c << " ";
    }
    cout << endl;

}