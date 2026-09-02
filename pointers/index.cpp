#include <iostream>
using namespace std;

int main () 

{
    string food = "pizza";
    string *ptr = &food; // we store the address of piza like that 0xc1263ffa20


    cout<<&food<<endl; // for print the address of food 0xc1263ffa20
    
    cout<<food<<endl; // its print pizza

    
    cout<<*ptr<<endl; // its deference the address means what values stored in here

    cout<<ptr<<endl; // its gives the adress value 0xc1263ffa20
}