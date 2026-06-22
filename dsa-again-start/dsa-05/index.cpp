#include <iostream>
#include <vector>
using namespace std; 

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


bool isValid(vector<int> &arr, int m, int n, int maxAllowed) {

    int stu = 1; 
    int pages = 0; 

    for(int i = 0; i<n; i++) {
        if(arr[i] > maxAllowed) {
            return false;
        }

        if(arr[i] + pages <= maxAllowed) {
             pages += arr[i];
        } else {
            stu++;
            pages = arr[i];
        }

    }
    
    return stu > m ? false : true;
  
}

int allocatedBook(vector<int> &arr, int m, int n) {
    int sum = 0;

    int ans = -1;

    if (m > n) {
        return - 1;
    }
 
    for (int i =0; i<arr.size(); i++) {
       sum = arr[i] + sum;        
    }

    int st = 0, end = sum;
    while (st <= end) {
        int mid = st + (end - st)/2;
        if (isValid(arr, m, n, mid)) {
         ans = mid; 
         end =  mid - 1;
        } else {
            st = mid + 1;
        }
    }

  return ans;

}


int main () 
{
    vector<int> arr = {15,17,20};
    int m = 2;
    int n = 3;

  cout << allocatedBook(arr, m, n) << " ";

 
}