#include <iostream>
#include <vector>
#include <utility>
#include <queue>
using namespace std; 


int main() 
{
    // pair <int, string> p = {11, "sumbal"};

    // cout<<p.first<<endl;

    // cout <<p.second<<" "<<endl;

    // vector<pair<int, int>> vec = {{1, 2}, {1,3}};


    // vec.push_back({1,6}); 
    // vec.emplace_back(1,8); // create in-place objects 

    // for(auto p : vec) {
    //     cout << p.first << " " ;
    //     cout<< p.second<< " ";
    //     cout<<endl;
    // }

    
    priority_queue<int, vector<int>, greater<int>> q ;

    q.push(16);
    q.push(1);
    q.push(6);
    q.push(8);
    q.push(7);

    while(!q.empty()) {
      cout<<q.top()<<" ";
      q.pop();
    }

    cout<<endl;
}
