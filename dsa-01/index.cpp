#include <iostream>
using namespace std;

int binaryToDecimal(int num)
{

    int decimal;
    int power = 1;
    int ans = 0;

    while (num > 0)
    {
        decimal = num % 2;
        num = num /= 2;
        ans += (decimal *= power);
        power = power *= 10;
    };

    return ans;
};

int decimalToBinary(int binaryNum)
{

    int ans = 0;
    int power = 1;

    while (binaryNum > 0)
    {

        int rem = binaryNum % 10;
        ans += rem *= power;
        binaryNum /= 10;
        power *= 2;
    }

    return ans;
}

int main()
{

    cout << decimalToBinary(101) << " ";
}