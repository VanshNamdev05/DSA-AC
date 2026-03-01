#include<iostream>
using namespace std;

int main(){
    // ptr1 points to first row
    // ptr1 points to second row.....
    // ptrn points to n row

    // array of integers -> int *arr = new int[size];

    // STEPS TO CREATE MATRIX : 
    
    // array of pointers -> int **matrix = new int*[rows]; (star star)
    // ptri = new int[cols];

    int rows, cols;
    cout << "Enter rows : ";
    cin >> rows;

    cout << "Enter cols : ";
    cin >> cols;

    int **matrix = new int *[rows];

    for(int i = 0; i < rows; i++){
        matrix[i] = new int[cols];
    }

    // storing data

    int x = 1;

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            matrix[i][j] = x++;
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    cout << matrix[2][2] << endl;
    cout << *( * (matrix+2) + 2 ) << endl;
}