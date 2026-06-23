#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 


// aggressive cows

bool isPossible(vector<int> &arr, int c, int n, int minAllowed) { /// minAllowed last allocated [1, 2, 4, 8,9]
  int lastAllocated = arr[0]; 
  int cows = 1; 

  for (int i = 0; i<n; i++) {
   if(arr[i] - lastAllocated >= minAllowed) { 
    lastAllocated = arr[i];
     cows++;
   } 
 
   if(cows == c) return true;

  }

  return false;

}


int placeCows(vector<int> &arr, int cows, int n) {

  sort(arr.begin(), arr.end());

  int st = 1, end = arr[n-1] - arr[0]; 
  int ans = -1; 

  while(st <= end) {
    int mid = st + (end - st)/2;
    if(isPossible(arr, cows, n, mid)) { // isValid 1 to 8 -> lets suppose id mid = 4 4 is not posiible ans so we go to left part
      ans = mid; 
      st = mid + 1;
    } else {
        end = mid - 1;
    }
  }


return ans;

}


int main () 
{
  vector<int> arr = {1,2,8,4,9}; 
  int c = 3; 
  int N = 5; 

  cout<<placeCows(arr, c, N)<<" ";

}

