#include <iostream>
using namespace std;

// int main () 
// {

//     int a, b;
//     a = 6;
//     b = 10;

//     cout << (10 >> 1 ) << endl;

// }

//reverse a number

void reverseOfNum(int num) {
    int lastNumber;
    while(num > 0) {
     lastNumber = num%10;
     int rem = num/10;
     num = rem;
    cout<<lastNumber; 
    }

}

// factor of 2 

void isFactor(int value) {
    if(value % 2 == 0) {
      cout<<"Yes its factor"<<endl;
    } else {
         cout<<"No factor"<<"endl";
    }   
}


int main () 
{
    // int value;
    // cout<<"Enter a number"<<endl;
    // cin>>value;
    // reverseOfNum(value);

  isFactor(44);
}