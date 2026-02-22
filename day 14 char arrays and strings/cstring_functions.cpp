#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char str1[100];
    // str1 = "Vansh Namdev";
    strcpy(str1, "Vansh Namdev");
    cout << str1 << endl;

    char s1[100] = "Hello ";
    char s2[100] = "World";

    strcat(s1, s2); // s1 will be changed
    cout << s1 << endl;
    cout << s2 << endl; // s2 will remain same

    char a[100] = "abc";
    char b[100] = "abc";
    cout << strcmp(a, b) << endl; // 0  if equal, 1 if not equal, negative if abc < xyz, pisitive if xyz > abc

    char a1[100] = "abc";
    char a2[100] = "xyz";

    cout << "Comaparing abc with xyz : " << strcmp(a1, a2) << endl;
    cout << "Comaparing xyz with abc : " << strcmp(a2, a1) << endl;
}