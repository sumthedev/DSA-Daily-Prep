
// solved problem of inversion count
#include <iostream>
#include <vector>
using namespace std;

int mergeArr(vector<int> &arr, int st, int mid, int end)
{
    vector<int> temp;
    int i = st, j = mid + 1;
    int invCount = 0;

    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
            invCount += mid - i +1; 
        }

        return invCount;
    }

    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }

    while (j <= end)
    {
        temp.push_back(arr[j]);
        j++;
    }

    for (int idx = 0;  idx < temp.size(); idx++)
    {
        arr[idx + st] = temp[idx];
    }

    return invCount;
}

int mergeSort(vector<int> &arr, int st, int end)
{
  if(st < end) {
    int mid = st + (end - st) / 2;
    // left
    int left = mergeSort(arr, st, mid);
    // right
    int right = mergeSort(arr, mid + 1, end);

    int invCount = mergeArr(arr, st, mid, end);

    return left + right + invCount;
  }

  return 0;
}

int main()
{
    vector<int> arr = {20, 31, 25, 8, 35, 7};
    int n = arr.size();

    mergeSort(arr, 0, n - 1);

    for (int val : arr)
    {
        cout << val << " ";
    }

    cout<<endl;
    cout<< mergeSort(arr, 0, n - 1)<<endl;


}