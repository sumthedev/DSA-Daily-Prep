#include <iostream>
using namespace std;

// int main () 
// {
//     int marks[5];
//     int smallest = INT_MAX; 
//     int size = sizeof(marks) / sizeof(int);

//     for(int i =0; i<size; i++) {
//         cout<<"Enter value of array"<<endl;
//         cin>> marks[i];
//     }

//     for(int i = 0; i<size; i++) {
//       if(marks[i] < smallest) {
//         smallest = marks[i];
//       }
//     }
   
//     cout<<"The smallest value"<<endl;

//     cout<<smallest<<endl;
  
// }



// int main () 
// {
//     int nums[5] = {5, 2 , 7, 0, -22};
//     int size = sizeof(nums) / sizeof(int);
//     int smallest = INT_MAX;
//     int largest = INT_MIN;
//     int indexOfSmallest;
//     int indexOfLargest;

//     for(int i = 0; i<size; i++) {
//     //  smallest = min(nums[i], smallest);
//     //  largest = max(nums[i], largest);

//     if(nums[i] < smallest) {
  
//         smallest = nums[i];
//         indexOfSmallest = i;
       
//     } else if (nums[i] > largest) {
     
//         largest = nums[i];
//         indexOfLargest = i;
   
//     }
    

//     }
 
//     cout<<"smallest = "<<smallest<<endl;
//     cout<<"index = "<<indexOfSmallest<<endl;

//     cout<<"largest = "<<largest<<endl;
//     cout<<"index = "<<indexOfLargest<<endl;
// }



int main () {
    int arr[6] = {6, 9, 88, 55, 7};
    int target = 55;
    int size = 6;

    for(int i = 0; i<size; i++) {
        if(arr[i] == target) {
         cout<<"target found at index :"<<i<<endl;
        }
        
    }
}