#include <iostream>
using namespace std;

int binSearch(int *arr, int n, int key)
{
    int s = 0;
    int e = n - 1;

    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if(arr[mid] < key)
        {
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }

    return -1;
}

int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int n = 8;

    int ans = binSearch(arr,n,4);

    if(ans >= 0){
        cout << "Key found at index : " << ans << endl;
    }
    else{
        cout << "Key not found :(" << endl;
    }
}