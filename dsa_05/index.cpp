#include <iostream>
#include <vector>
using namespace std;

int main () {

    vector<int> vec;

    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    vec.push_back(55);
    vec.push_back(65);

    for(int i : vec) {
       cout<<i<<endl; 
    }


}
