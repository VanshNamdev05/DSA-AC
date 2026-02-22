#include<bits/stdc++.h>
using namespace std;

void toUpper(char word[], int length){

    for(int i = 0 ; i < length ; i ++){
        if(word[i] >= 'a' && word[i] <= 'z'){
            int pos = word[i] - 'a';
            word[i] = 'A' + pos;
        }
    }

}

void toLower(char word[], int length){

    for(int i = 0 ; i < length ; i ++){
        if(word[i] >= 'A' && word[i] <= 'Z'){
            int pos = word[i] - 'A';
            word[i] = 'a' + pos;
        }
    }

}

int main(){
    char word[] = "ApPle";
    int length = strlen(word);

    toUpper(word, length);

    cout << word << endl;

    toLower(word, length);

    cout << word << endl;
}