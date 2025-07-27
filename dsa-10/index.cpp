#include <iostream>
using namespace std;

int main () 
{
    int arr[6] = {1, 5, 8, 11, 14, 22};
    int target = 22;
    int size = sizeof(arr) / sizeof(int);
    

    // solved this by binary search (iterator code)
    int st = 0;
    int end = size-1;
   

    while(st <= end) {
      int mid = (st + end)/2;
        if(target < arr[mid]) {
            end = mid-1;
        } else if (target > arr[mid]) {
            st = mid + 1; 
        } else if (target == arr[mid]) {
            cout<<"target found " <<arr[mid]<<" ";
            return 0;
        } else {
            cout<<"target not found"<<endl;
            return 0; 
        }

        
    }

    
}