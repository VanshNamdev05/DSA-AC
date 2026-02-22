#include<bits/stdc++.h>
using namespace std;

void reverseArray(char word[], int length){
    int st = 0, end = length-1;

    while(st < end){
        swap(word[st++], word[end--]);
    }
}

int main(){
    char word[] = "Vansh";
    int length = strlen(word);

    reverseArray(word, length);

    cout << word << endl;
}