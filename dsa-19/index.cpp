#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <utility>
#include <map>

using namespace std;

int main()
{
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    //     for(int i : vec) {
    //         cout<<i<<" ";
    //     }
    //   cout<<endl;

    // i need to de refferece it

    // cout << *vec.end() << endl;  //vec.end() ➝ points **one position past the last element**

    // map<string, int> m;
     multimap<string, int> m;

    // m["laptop"] = 100;
    // m["tablet"] = 50;
    // m["headphones"] = 120;
    // m["tv"] = 90;
    // m["camera"] = 120;

    m.emplace("tv", 100);
    m.emplace("tv", 100);
    m.emplace("tv", 100);
    m.emplace("tv", 100);
    m.emplace("tv", 100);

    for (auto p : m)
    {
        cout << p.first << " " << p.second << endl;
    }

    cout << m.count("laptop") << endl;

    if (m.find("camera") != m.end())
    {
        cout << "found" << endl;
    }
    else
    {
        cout << "not found" << endl;
    }
}
