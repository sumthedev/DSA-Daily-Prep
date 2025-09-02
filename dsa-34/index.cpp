//backtracking

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void getPerm(string &str, int idx, string& ans) {
 if(idx == str.length()) {
    for(char val : str) {
     cout<<val<<" ";
    }
    cout<<endl;
 }

 for(int i = idx; i<str.size(); i++) {
    swap(str[idx], str[i]);
    getPerm(str, idx+1, ans);
    swap(str[idx], str[i]);
 }
}

int main ()
{
 string str = "abc";
 string ans;
 getPerm(str, 0, ans);
}