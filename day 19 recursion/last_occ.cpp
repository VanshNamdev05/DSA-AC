#include <iostream>
#include <vector>
using namespace std;

int lastOcc(vector<int> arr, int n, int target, int i)
{
    if (i == n)
    {
        return -1;
    }

    int idxFound = lastOcc(arr, n, target, i + 1);

    if (idxFound == -1 && arr[i] == target)
    {
        return i;
    }

    return idxFound;
}

int main()
{
    vector<int> arr = {1, 2, 3, 3, 3, 4};
    cout << lastOcc(arr, arr.size(), 3, 0) << endl;
}