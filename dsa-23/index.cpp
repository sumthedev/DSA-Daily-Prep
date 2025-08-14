#include <iostream>
#include <utility>
using namespace std;



int diagonalSumOtimized(int matrix[][4], int n ){
  int sum =0;
  for(int i=0; i<n; i++) {
    sum += matrix[i][i];
    if(i !=n-i-1 ) {
        sum += matrix[i][n-1-i];
    }

  }

  return sum;
}

int diagonalSum(int martix[][4], int n) //O(n*n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int pdSum = 0;
        int sdSum = 0;
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum += martix[i][j];
            }
            else if (j == n - 1 - i)
            {
                sum += martix[i][j];
            }
        }
    }

    return sum;
}

pair<int, int> linearSearch(int matrix[][3], int rows, int cols, int target)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] == target)
            {
                return {i, j};
            }
        }
    }
    return {-1, -1};
}

int maxColSum(int matrix[][3], int rows, int cols)
{
    int maxSum = INT_MIN;

    for (int col = 0; col < cols; col++)
    {
        int colSum = 0;
        for (int row = 0; row < rows; row++)
        {
            colSum += matrix[row][col];
        }
        maxSum = max(maxSum, colSum);
    }

    return maxSum;
}

int maxArraySum(int matrix[][3], int cols, int rows)
{
    int maxSum = INT_MIN;
    for (int i = 0; i < rows; i++)
    {
        int rowsSum = 0;
        for (int j = 0; j < cols; j++)
        {
            rowsSum += matrix[i][j];
        }

        maxSum = max(maxSum, rowsSum);
    }

    return maxSum;
}

int main()
{
    int matrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int matrix2[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrix3[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int n = 4;
    int rows = 3;
    int cols = 3;
    int target = 8;

    pair<int, int> pos = linearSearch(matrix, cols, rows, target);

    cout << pos.first << " " << pos.second << " ";

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            //   cout<<matrix[i][j]<<" ";
        }
        cout << endl;
    }

    // cout << maxArraySum(matrix2, rows, cols) << " ";
    // cout << maxColSum(matrix2, rows, cols) << " ";
    // cout << diagonalSum(matrix3, n) << " ";
     cout << diagonalSumOtimized(matrix3, n) << " ";
}