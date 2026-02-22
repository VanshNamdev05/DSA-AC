#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(char word1[], int length){
    int st = 0, end = length-1;

    while(st < end){
        if(word1[st] != word1[end]){
            return false;
        }
        st++;
        end--;
    }

    return true;
}

int main(){

    char word1[] = "apple"; 
    int len1 = strlen(word1);

    char word2[] = "racecar"; 
    int len2 = strlen(word2);

    int ans1 = isPalindrome(word1, len1);
    int ans2 = isPalindrome(word2, len2);

    if(ans1){
        cout << word1 <<  " is a Valid Palindrome "<< endl;
    }
    else{
        cout << word1 <<  " is Not a valid Palindrome" << endl;
    }

    if(ans2){
        cout << word2 << " is a Valid Palindrome "<< endl;
    }
    else{
        cout << word2 <<  " is Not a valid Palindrome" << endl;
    }

}