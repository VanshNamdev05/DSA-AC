#include<iostream>
using namespace std;

void removeDuplicates(string str, string &ans, int i, bool *map){
    if(i == str.length()){
        return;
    }

    int index = str[i] - 'a';
    if(map[index] == false){
        ans.push_back(str[i]);
        map[index] = true;
    }

    removeDuplicates(str, ans, i+1, map);
}

int main(){
    bool map[26] = {false};

    string ans = "";
    string str = "appnnacollege";

    removeDuplicates(str, ans, 0, map);

    cout << ans << endl;
}