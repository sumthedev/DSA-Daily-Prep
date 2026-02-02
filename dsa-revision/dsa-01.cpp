#include <iostream>
using namespace std;

// decimanl to binary


int decimalToBinary(int num) {
    int ans = 0;
    int pow = 1;

    while(num>0) {
        int decimal;
        decimal = num % 2;
        num = num/2;

        ans += (decimal *= pow);
        pow = pow * 10;
    }

    return ans;
}

int binaryToDecimal(int num) {
    int ans = 0;
    int pow = 1;

    while(num>0) {
        int rem = num % 10;
        ans += (rem * pow);
        num = num/10;
        pow *= 2;

    }

    return ans;
}

int main () {
    int ans = decimalToBinary(101);
    int ans2 = binaryToDecimal(10);

    // cout<<ans;
    cout<<ans2;;

}