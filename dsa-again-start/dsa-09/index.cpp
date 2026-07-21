#include <iostream>
#include <vector>
using namespace std; 

void printDigit(int n) {
  while(n != 0 ) {
    int dig = n%10;
    cout<<dig <<endl;
    n = n/10;
  }

}


bool isArmStrong (int n) {
 int coptOfN = n;
 int sumOfCube = 0;

 while(n != 0) {
    int dig = n%10;
    sumOfCube += (dig * dig * dig);

    n = n / 10;
 }

 return  sumOfCube == coptOfN;
}

int main() {
  int dig = 12345;
  int n = 153; 



  cout<<  isArmStrong(n) <<endl;

//   printDigit(dig);

  return 0;

}