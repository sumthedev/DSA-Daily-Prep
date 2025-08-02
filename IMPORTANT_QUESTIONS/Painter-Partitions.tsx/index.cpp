#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> &arr, int m, int n, int maxTime) // O(n)
{
    int time = 0;
    int painters = 1;

    for (int i = 0; i < n; i++) 
    {
        if (arr[i] > maxTime)
        {
            return false;
        }

        if(time + arr[i] <= maxTime) {
              time += arr[i];
        } else {
            painters++;
            time = arr[i];

        }
       
    }

    return painters > m ? false : true;
}

int painterPartitions(vector<int> &arr, int m, int n) //O(log(sum) * n)
{
    // starting poiny will be max of the array
    int maxVal = INT_MIN;
    int sum = 0;
    int ans = -1;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        maxVal = (maxVal, arr[i]);
    }

    int st = maxVal;
    int end = sum;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if(isValid(arr, m, n, mid))
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

    // vector<int> arr = {40, 30, 12, 20};
    // vector<int> arr = {40, 30, 10, 20};
     vector<int> arr = {1,2,8,4,9};
    int n = 5;
    int m = 3;

    cout << painterPartitions(arr, m, n) << " ";
}


// binary search is applied on the range of possible answers