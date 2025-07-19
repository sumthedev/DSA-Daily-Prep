#include <iostream>
#include <vector>
using namespace std;

// int main () {

//     vector<int> vec;

//     vec.push_back(25);
//     vec.push_back(35);
//     vec.push_back(45);
//     vec.push_back(55);
//     vec.push_back(65);

//     for(int i : vec) {
//        cout<<i<<endl; 
//     }

// }


// Linear sreach using vector

// int main () 
// {
//     vector<int> vec = {4, 5, 88, 99, 100};
//     int target = 99;

//     for(int i =0; i<vec.size(); i++) {
//         if(target == vec[i]) {
//             cout<<vec[i]<<" Target is found at "<<i<<endl;
//         }
//     }


// }


// Reverse a Vector --> Two pointer approach 

void reverseVector(vector<int>& vec) {
     int start = 0;
    int end = vec.size() - 1;

    while (start < end) {
        swap(vec[start], vec[end]);
        start++;
        end--;
    }

}

int main () 
{
    vector<int> vec = {4, 5, 88, 99, 100};

    reverseVector(vec);
     for (int i : vec) {
        cout << i << endl;
    }
   
}


