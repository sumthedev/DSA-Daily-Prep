#include <iostream>
using namespace std;


void printNum(int n) {
    if(n==1) {
        cout<<1<<" ";
        return;
    }

    cout<<n<<" ";
    printNum(n-1);
}

int factorial(int n) {
    if(n==0) {
        return 1;
    };
    return n * factorial(n-1);
}

int sumInt(int n) {
 int sum = 0;
 if(n==1) {
    return 1;
 }
 return  n + sumInt(n-1);
}


int main () 

{

  int n = 4;
//   printNum(n);
//   cout<<factorial(n)<<endl;
cout<<sumInt(n)<<" ";


}

//imp logic 
//factorial(1) = 1 * factorial(0) = 1 * 1 = 1
// (returns 1 to the waiting call)

// factorial(2) = 2 * factorial(1) = 2 * 1 = 2
// (returns 2)

// factorial(3) = 3 * factorial(2) = 3 * 2 = 6
// (returns 6)

// factorial(4) = 4 * factorial(3) = 4 * 6 = 24
// (returns 24 — final answer)