#include <iostream>
using namespace std;

void printDigit(int n)
{
    while (n != 0)
    {
        // we need to module to base 10
        int lastDigit = n % 10;
        cout << lastDigit << endl;
        // divide by 10 we get the reaming digit ok
        n = n / 10;
    }
}

bool isArmstrong(int n) {
    int copN = n;
    int sumOfCube = 0;
    while(n != 0) {
        int digit = n % 10;
         sumOfCube += (digit * digit * digit);
         n = n / 10;

    }

    return sumOfCube == copN;
}

int main()
{

    // int digit = 3586;
    // printDigit(digit);
    int digit = 153;
    if(isArmstrong(digit)) {
        cout<<"yes is armstrong"<<endl;
    } else {
        cout<<"no its not armstrong"<<endl;
    }
}