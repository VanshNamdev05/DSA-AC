#include<iostream>
#include<climits>
using namespace std;

void maxSubarraySum1(int *arr, int n){
    int maxSum = INT_MIN;
    for(int start = 0; start < n; start++){
        for(int end = start; end < n; end++){
            int currSum = 0;
            for(int i = start; i <= end; i++){
                currSum += arr[i];
            }
            cout << currSum << "," ;
            maxSum = max(maxSum, currSum);
        }
        cout << endl;
    }

    cout << endl <<"Max SubArray Sum is : " << maxSum << endl;
}

void maxSubarraySum2(int *arr, int n){
    int maxSum = INT_MIN;

    for(int start = 0; start < n; start++){
        int currSum = 0;
        for(int end = start; end < n; end++){
            currSum += arr[end];
        }
        maxSum = max(maxSum, currSum);
    }

    cout << endl <<"Max SubArray Sum is : " << maxSum << endl;
}

void kadane(int *arr, int n){
    int maxSum = 0;
    int currSum = 0;

    for(int i = 0; i < n; i++){
        currSum += arr[i];
        maxSum = max(maxSum, currSum);

        if(currSum<0){
            currSum = 0;
        }
    }

    cout << "Max SubArray sum is : " << maxSum;
}

int main(){
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = 6;

    // maxSubarraySum1(arr, n);
    // maxSubarraySum2(arr, n);
    kadane(arr, n);
}