#include <iostream>
#include <algorithm>
using namespace std;

bool isPalindrom(string name)
  
{
    string reversed = name; 
    reverse(reversed.begin(), reversed.end());
    if(name ==  reversed) {
        return true;
    };

    return false;

}

string removeOccurrences(string s, string part) {
      int n = s.length();
      int pos;
      if(pos = s.find(part) < n) {
        int len = part.length();
        s.erase(pos, len);
      }
         return s;
    }

int main()
{
    // cout << "Enter any nword to check its palindrom or not" << " " << endl;
    // string word;
    // getline(cin, word);
    // cout << isPalindrom(word) << endl;
    string name = "sumballl";
    string part = "ll";
 cout<<removeOccurrences(name, part);
 

}