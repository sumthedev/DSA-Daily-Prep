#include <iostream>
#include <utility>
using namespace std;

pair<int, int> linearSearch(int arr[][3], int rows, int cols, int tar) {

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {

            if (arr[i][j] == tar) {
                return {i, j};
            }
        }
    }

    return {-1, -1};
}

int maxRowSum (int arr[][3], int rows, int cols) {
       int maxRowsSum = INT_MIN;
    for(int i=0; i<rows; i++) {
        int rowsSumI = 0;
        for(int j=0; j<cols; j++) {
        rowsSumI += arr[i][j];
        }
       maxRowsSum = max(maxRowsSum, rowsSumI);
    }

    return maxRowsSum;
}


int maxColsSum (int arr[][3], int rows, int cols) {
       int maxColsSum = INT_MIN;
    for(int i=0; i<cols; i++) {
        int colsSumI = 0;
        for(int j=0; j<rows; j++) {
        colsSumI += arr[j][i];
        }
        maxColsSum= max(maxColsSum, colsSumI);
    }
    


    return maxColsSum;

}

int diagonalSum(int arr[][3], int n) {
int diagonalSum = 0;

 for(int i=0; i<n; i++) {
    for(int j=0; j<n; j++) {
        if(i == j) {
            diagonalSum += arr[i][j];
        } else if ( j== n-i-1) {
             diagonalSum += arr[i][j];
        }
    }
 }

 return diagonalSum;
}

int main() {

    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };
    int n = 3;
    int rows = 3;
    int cols = 3;
    int targ = 8;

    // pair<int, int> result = linearSearch(matrix, rows, cols, targ);

    // cout<<maxRowSum(matrix, rows, cols)<<endl;
    // cout<<maxColsSum(matrix, rows, cols)<<endl;

    cout<<diagonalSum(matrix, n)<<endl;

    // if (result.first != -1) {
    //     cout << "Target found at row: " << result.first << endl;
    //     cout << "Target found at column: " << result.second << endl;
    // } else {
    //     cout << "Target not found" << endl;
    // }

    return 0;
}