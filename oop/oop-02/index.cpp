#include <iostream>
using namespace std;


class Student {
    public:
    string name;
    double cgpa;

    Student (string name, double cgpa) {
      this->name = name;
      this->cgpa = cgpa;
    };


    void getInfo() {
        cout << name<<endl;
        cout << cgpa << endl;
    }

};


int main () 
{
    Student s1("Sumbal", 9.3);

    Student s2(s1);

    s2.getInfo();


}