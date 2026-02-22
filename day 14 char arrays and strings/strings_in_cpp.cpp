#include<iostream>
using namespace std;

int main(){
    // c++ strings are objects of pre defined string class in STL.
    // c++ strings have useful member functions.
    // c++ strings are dynamic (Their size can change at runtime).
    // c++ strings supports operators like : >, <, +, ==, >= ,<=, etc.
    // c++ strings are stored contiguosly in memory.

    string s1;
    getline(cin, s1, '$');

    cout << s1 << endl;
}