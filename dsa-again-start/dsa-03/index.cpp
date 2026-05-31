#include <iostream>

using namespace std; 

int main () 
{
    int n = 5; 
    int arr[5] = {1, 2, 3, 4, 5};

    // Brute Force approch

    // for (int st = 0; st<n; st++) {
    //     for(int end = st; end<n; end++) {
    //      for(int i=st; i<=end; i++) {
    //         cout << arr[i];
    //      }

    //      cout << " ";
    //     }
    //     cout << endl;
    // }

     int maxSum = 0;

      for (int st = 0; st<n; st++) {
        int currentSum = 0;
        for(int end = st; end<n; end++) {    
            currentSum += arr[end];
            maxSum = max(currentSum, maxSum)  ; 
        }
        
    }
      cout << maxSum;
}