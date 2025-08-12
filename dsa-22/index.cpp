#include <iostream>
#include <algorithm>
using namespace std;

// Euclid's Algorithm

int gcd(int a, int b)
{
    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }

    if (a == 0)
        return b;
    return a;

}

int gcdRec(int a, int b) {
    if(b==0) return a;
    return gcd(b, a%b);
}

int lcm(int a, int b) {
    int gcd = gcdRec(a,b);
    return (a*b)/gcd;
}

int main()
{
    int a = 20, b = 28;
    int hcf = 1;

    for (int i = 1; i < min(a, b); i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }
   int digit = 3456;
   
    // cout<<gcd<<endl;
    // cout << gcd(28, 20) << endl;
    cout << lcm(28, 20) << endl;
}
