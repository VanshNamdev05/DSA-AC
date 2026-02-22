#include<bits/stdc++.h>
using namespace std;

int main(){

    char str[5] = {'a', 'b', 'c', 'd', 'e'};
    cout << str[0] << endl;
    cout << str[1] << endl;
    cout << str[2] << endl;
    cout << str[3] << endl;
    cout << str[4] << endl;
    
    cout << str << endl;

    char str1[5] = {'c', 'o', 'd', 'e', '\0'};

    cout << str1 << endl;

    // "vansh namdev"
    // "HelloWorld"
    // "a" -> all are string literals, we cant change the values

    char work[] = "work";
    char work1[5] = "work"; // one extra space for \0

    char work3[] = {'c', 'o', 'd', 'e', '\0'};
    char work4[50] = {'c', 'o', 'd', 'e', '\0'};
    char work5[50] = {'c', 'o', 'd', 'e'};

    cout << work3 << endl;
    cout << work4 << endl;
    cout << work5 << endl;
    
    cout << strlen(work3) << endl;
    cout << strlen(work4) << endl;
    cout << strlen(work5) << endl;

}