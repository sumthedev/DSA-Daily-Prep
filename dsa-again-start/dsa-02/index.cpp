#include <iostream>
using namespace std; 

int search (int arr[], int sz, int tar) {
 for(int i =0; i<sz; i++) {
    if(arr[i] == tar) {
        return true;
    }
 }

 return -1;
}


int main () {
 int arr[] = {5,7,9,0,7,9};
 int sz = 6;
 int target = 7;
 cout<<search(arr, sz, target)<<endl;
}