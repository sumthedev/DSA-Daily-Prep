#include <iostream>
#include <vector>
using namespace std;


int partition(vector<int> &arr, int st, int end) {
    int idx = st-1, pivot = arr[end];
    for(int j=st; j<end; j++) {
        if(arr[j] <= pivot) {
            idx++;
            swap(arr[j], arr[idx]);
        }
    }
    idx++;
    swap(arr[end], arr[idx]);
    return idx;
}


void quickSort(vector<int> &arr, int st, int end) {
    if(st < end) {
        int pivIdx = partition(arr, st, end);
        quickSort(arr, st, pivIdx-1);
        quickSort(arr, pivIdx+1, end);
    }
}

int main () 
{
    vector<int> arr = {21, 11, 45, 8, 9, 1};
    int n = arr.size() - 1;

    quickSort(arr, 0, n);

    for(int val : arr) {
        cout << val <<" ";
    }

    cout<<endl;
    return 0;

}