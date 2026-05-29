#include <iostream>
using namespace std; 


int main () 
{
    int arr[5] = {23, 24, -1, 77, 88};
        int sm = INT_MAX;
        int idx = 0;

    for(int i = 0; i < 5; i++) {
    
     if(arr[i] < sm) {
        sm = arr[i];
        idx = i;
     }
     
    }

           cout<<sm<< "" << " is smaller"<<endl;
           cout<<idx<<""<<" idx position"<<endl;
}