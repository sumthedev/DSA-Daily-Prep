#include <iostream>
#include <vector>
using namespace std;

// pair sum sol with brute force Time Complexity will be O(n)

// vector<int> pairSum(vector<int>& nums, int target) {
//   vector<int> ans;
   
// for(int i =0; i<nums.size(); i++) {
//     for(int j=i+1; j<nums.size(); j++) {
//     if(nums[i] + nums[j] == target) {
//         ans.push_back(i);
//         ans.push_back(j);
//         return ans;
//     }
    
//      }
// }
//  return ans;
// }


// most optimized approch using Two Pointer approach TC will be O(n)


vector<int> pairSum(vector<int>& nums, int target) {
  vector<int> ans;
  int n = nums.size();
  int i = 0; 
  int j = n-1;

  while(i<j) {
    int ps = nums[i] + nums[j];
    if(ps > target) {
        j--;
    } else if (ps < target) {
        i++;
    } else {
        ans.push_back(i);
        ans.push_back(j);
        return ans;
    }
  }

   
  return ans;

}

int main () 
{
    vector<int> vec = {2, 7, 11, 15};
    int target = 13;

    vector<int> ans = pairSum(vec, target);
    cout<<ans[0] <<", "<<ans[1]<<" ";
    
}


// profram to print all subarrays

// int main () 
// {
//     vector<int> vec = {1, 2, 3, 4, 5};
//     int n = vec.size();
//     for(int st = 0; st<n; st++) {
//         for(int end = st; end<n; end++) {
//             for(int i = st; i<=end; i++) {
//                 cout<<vec[i];
//             }
//             cout<< " ";
//         }
//         cout<<endl;
//     }
// }