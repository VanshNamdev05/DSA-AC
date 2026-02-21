#include<iostream>
using namespace std;

void searchInSortedMatrix(int mat[][4], int n, int m, int key){
    int i = n-1, j = 0;

    while(i >= 0 && j < m){
        if(mat[i][j] == key){
            cout << "Key found at : ( " << i << "," << j << " )" << endl;
            return;
        }
        else if(mat[i][j] > key){
            i--;
        }
        else if(mat[i][j] < key){
            j++;
        }
    }

    cout << "Key not found" << endl;
}

int main(){

    int mat[4][4] = {{10,20,30,40},
                     {15,25,35,45},
                     {27,29,37,48},
                     {32,33,39,50}};

    searchInSortedMatrix(mat, 4, 4, 48);
    searchInSortedMatrix(mat, 4, 4, 41);
}