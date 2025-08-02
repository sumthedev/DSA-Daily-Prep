#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isValid(vector<int> &arr, int c, int n, int minimumDistance) { // O(n)
    int cows = 1;
    int lastPos = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] - lastPos >= minimumDistance) {
            cows++;
            lastPos = arr[i];
        }

        if(cows == c) return true;
    }

    return false;
}

int aggressiveCows(vector<int> &arr, int cows, int n) { // NLOGN
    sort(arr.begin(), arr.end()); // we need to sort first, is it becz the cows are place in order becz we calculate the diatance between them

    int st = 1;
    int end = arr[n-1] - arr[0]; // highes - lowest 
    int ans = -1;

    while(st <= end) { // O(log(range))
        int mid = st + (end - st)/2;

        if(isValid(arr, cows, n, mid)) {
            ans = mid;
            st = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return ans;
}

int main () {
    vector<int> arr = {1, 2, 8, 4, 9};
    int n = arr.size();
    int cows = 3;

    cout << aggressiveCows(arr, cows, n) << endl;
}
