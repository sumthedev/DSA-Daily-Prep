#include <iostream>
#include <vector>
#include <list>
using namespace std;


// Stack implemntation using Linked Lists 

class Stack {
    list<int> ll;

    public:

    void push(int val) { // O(1)
        ll.push_front(val);
    }


    int top() {
        return ll.front();
    }

    void pop () {
        ll.pop_front();
    }


    bool empty () {
        return ll.size() == 0;
    }

};


int main () 
{

    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    cout << endl;
    return 0;
}