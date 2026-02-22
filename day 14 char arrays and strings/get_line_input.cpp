#include<bits/stdc++.h>
using namespace std;

int main(){
    // char work[30];
    // cin >> work; // it does not ignores whitespace

    // cout << "Your word was : " << work << endl;
    // cout << "Your word length was : " << strlen(work) << endl;

    char sentence[50];
    cin.getline(sentence,50, '*'); // it does not ignores whitespace
    // * is a delimiter here, if encountered *, ignore everything from and aFTER *

    cout << "Your sentence was : " << sentence << endl;
    cout << "Your sentence length was : " << strlen(sentence) << endl;
}