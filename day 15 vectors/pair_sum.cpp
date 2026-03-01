#include<iostream>
#include<vector>
using namespace std;

void pairSum(vector<int> v, int target){
    int currSum = 0;
    int n = v.size();
    int st = 0, e = n-1;

    while(st < e){
        currSum = v[st] + v[e];

        if(currSum == target){
            cout << "The pair having sum equal to target is ( " << v[st] << "," << v[e] << " )"<< endl;
            return;
        }
        else if(currSum > target){
            e--;
        }
        else{
            st++;
        }
    }

    cout << "No pair is having sum equal to the target" << endl;
}

int main(){
    vector<int> arr = {2, 7, 11, 15};

    pairSum(arr, 18);
}