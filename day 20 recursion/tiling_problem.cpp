#include<iostream>
using namespace std;

int tp(int n){

    if(n == 1 || n == 0){
        return 1;
    }
    
    // vertical
    int ans1 = tp(n-1);

    // horizontal
    int ans2 = tp(n-2);

    return ans1 + ans2;

}

int main(){
    cout << tp(1) << endl;
    cout << tp(2) << endl;
    cout << tp(3) << endl;
    cout << tp(4) << endl;
}