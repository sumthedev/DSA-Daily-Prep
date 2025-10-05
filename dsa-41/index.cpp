#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;

    // Person(string name, int age)
    // {
    //     this->name = name;
    //     this->age = age;
    // }

    // Person()
    // {
    //     cout<<"im called"<<endl;
    // }

      ~Person () {
        cout<<"parant destructor called"<<endl;
    }
};

class Student : public Person
{
public:
    int rollno;

    // Student (string name, int age, int rollno) : Person(name, age) {
    //     this->rollno = rollno;
    // }


    void getInfo()
    {
        cout << "name : " << name << endl;
        cout << "age : " << age<< endl;
        cout << "roll no : " << rollno << endl;
    }

    // ~Student () {
    //     cout<<"child destructor called"<<endl;
    // }
};

class GraduStudent : public Student {
 public: 
 string researchArea;
  void getInfo()
    {
        cout << "name : " << name << endl;
        cout << "age : " << age<< endl;
        cout << "roll no : " << rollno << endl;
        cout<<"research  area :"<<researchArea<<endl;
    }

};

int main()
{
    // Student s1("anaya", 26, 73);
    // s1.name = "anaya";
    // s1.age = 26;
    // s1.rollno = 73;
    GraduStudent s1;
    s1.name = "anaya";
    s1.age = 26;
    s1.rollno = 73;
    s1.researchArea = "Quantum Physics";
    

    s1.getInfo();

}