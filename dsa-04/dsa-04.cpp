#include <iostream>

using namespace std;

//unique element

// int main () 
// {
//     int arr[5] = {7, 4, 5,7,4};
//     int size = sizeof(arr) / sizeof(int);
//     int unique = -1;
//     int count = 0;
//     for(int i=0; i<size; i++) {
//         for(int j=0; j<size; j++) {
//             if(arr[i] == arr[j]) {
//              count++;            
//             }             
//             if(count == 1) {
//                 unique = arr[i];
//                 break;
//             }
//         }         
//     }

//     if (unique != -1) {
//         cout << "Unique element: " << unique << endl;
//     } else {
//         cout << "No unique element found." << endl;
//     }
// }



// int main () 
// {
//     int arr1[5] = {4,5,6,7,8};
//     int arr2[5] = {1,5,3,7,10};
//     int sz = 5;
//     int com[5] = {};
//     int k =0;

//     for (int i =0; i<sz; i++) {
//         for(int j=0; j<sz; j++) {
//             if(arr1[i] == arr2[j]) {
//                 com[k] = arr2[i];
//                 k++;
//             }
//         }
//     }

//     if (k == 0) {
//         cout << "No common elements found.\n";
//     } else {
//         cout << "Common elements: ";
//         for (int i = 0; i < k; i++) {
//             cout << com[i] << " ";
//         }
//         cout << endl;
//     }

// }


// int main () 
// {
//      int arr[5] = {4,5,6,7,8};
//      int sz = 5;
//      int sum = 0;
//      int product = 0;

//      for(int i =0; i<sz; i++) {     
//         sum = sum + arr[i];
//         product = sum * arr[i];
//      }

//      cout<<"Sum of array "<<sum<<endl;
//      cout<<"Product of an array "<<product<<endl;

// }



// int main ()
// {
//     int arr[7] = {3, 1, 9, 7, 9, 2, 1};
//     int sz = 7;
//     int temp;

//     for(int i =0; i<sz -1; i++) {
//         if(arr[i] < arr[i+1]) {
//               temp = arr[i];
//               arr[i] = arr[i+1];
//               arr[i] = temp;
//         }      
//     };
   
//     for(int i =0; i<sz; i++) {
//         cout<<arr[i]<<" ";
//     }
// }


int main() {
    int arr[7] = {3, 1, 9, 7, 9, 2, 1};
    int sz = 7;
    int temp;

    for (int i = 0; i < sz - 1; i++) {
        if (arr[i] < arr[i + 1]) {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    };

    for (int i = 0; i < sz; i++) {
        cout << arr[i] << " ";
    }
}