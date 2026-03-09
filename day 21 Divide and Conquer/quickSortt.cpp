#include<iostream>
using namespace std;

int partition(int *arr, int si, int ei){
    int i = si - 1;
    int pivot = arr[ei];

    for(int j = si; j < ei; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }

    i++;
    swap(arr[i], arr[ei]);

    return i;
}

void quickSort(int *arr, int si, int ei){
    if(si >= ei){
        return;
    }

    int pivotIndex = partition(arr, si, ei);

    quickSort(arr, si, pivotIndex - 1);
    quickSort(arr, pivotIndex + 1, ei);
}

int main(){
    int arr[6] = {6,2,4,5,7,3};

    quickSort(arr,0,6);

    for(int i : arr){
        cout << i << " ";

    }cout << endl;
}