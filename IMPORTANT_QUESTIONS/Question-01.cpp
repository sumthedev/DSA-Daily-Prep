// //📘 Book Allocation Problem
// You are given N books, where each i-th book has A[i] number of pages.

// You have to allocate books to M students such that the maximum number of pages allocated to a student is minimized.

// Conditions:
// Each book should be allocated to only one student.

// Each student must get at least one book.

// Allocation of books must be contiguous (i.e., a student cannot get book 1 and book 3, skipping book 2).

// Task:
// Calculate and return the minimum possible value of the maximum number of pages allocated to a student.

// Return -1 if a valid assignment is not possible.

// Solution

#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> &arr, int m, int n, int maxAllowed)
{

    int students = 1;
    int pages = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxAllowed)
            return false;

        if (pages + arr[i] <= maxAllowed)
        {
            pages += arr[i];
        }
        else
        {
            students++;
            pages = arr[i];
        }
    }

    return students > m ? false : true;
}

int allocatedBook(vector<int> &arr, int m, int n)
{

    if (m > n)  //Each student must get at least one book
    {
        return -1;
    }

    int st = 0;
    int sum = 0;
    int ans = -1;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    int end = sum;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;
      if (isValid(arr, m, n, mid))
        { 
            ans = mid;
            end = mid - 1;
        }
        else
        { 
            st = mid + 1;
        }
    }

    return ans;
}

int main()
{

    // vector<int> arr = {2, 1, 3, 4};
    vector<int> arr = {15,17,20};
    int m = 2;
    int n = 3;

    cout << allocatedBook(arr, m, n) << " ";
}


//logic behind 
// If you have 5 students and only 3 books, it’s impossible to give at least one book to each student → invalid.

// But if you have 3 students and 5 books, it’s fine some students will get more than one book.

// we need to find minimum book in maximise books 


