#include <iostream>
#include <vector>
using namespace std; 



bool isValid(vector<int> arr, int m, int n, int minAllowedTime) {
 
    int time = 0; 
    int painters = 1;
    
    for(int i=0; i<n; i++) {
       if(arr[i] > minAllowedTime)  {
        return false;
       }

       if(arr[i] + time <= minAllowedTime) {
        time += arr[i];
       } else {
        painters++; 
        time = arr[i];
       }
    }

    return painters > m ? false :  true;

}

int painterPartition(vector<int> arr, int m, int n) {

    int sum = 0;

    for(int i =0; i<arr.size(); i++) {
       sum += arr[i];
    }

    if (m > n) {
        return -1;
    }

    int st = 0; 
    int end = sum;
    int ans = -1;

    while(st <= end) {
        int mid = st + (end - st)/2;
        if(isValid(arr, m, n, mid)) {
            ans = mid;
            end = mid - 1;
        } else {
            st = mid + 1;
        }
    }

  return ans;
}

int main() 
{

    vector<int> arr = {40, 30, 10, 20};
    int m = 2; 
    int n = 4; 

    cout<<painterPartition(arr, m, n)<<" ";
   

}