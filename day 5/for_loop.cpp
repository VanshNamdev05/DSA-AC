#include<iostream>
using namespace std;

int main(){
    // for(int n = 1; n <= 5; n++){
    //     cout << n << " ";
    // }

    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    int sum = 0;

    for(int i = 0; i <= n; i++){
        sum+=i;
    }
    cout << sum << endl;
}