#include <iostream>
#include <string>
using namespace std;

class Teacher {
    private: 
    double salaray;
    public:

    string name;
    string subject;
    string department;

    // non parameteried constructor
    // Teacher () {
    //     cout<<"Im constructor, and im called"<<endl;
    // }

    //parameteried constructor
    Teacher(string n, string d, double s) {
        name = n;
        department = d;
        salaray = s;
    }

    // copy constructor

    Teacher(Teacher &obj) {
        this->name = obj.name;
        this->department = obj.department;
        this->salaray  = obj.salaray;
    }


    void changeDep(string dep) {
        department = dep;
    };

    void setSal(double sal) {
        salaray = sal;
    };

    double getSal() {
        return salaray;
    }   
    
};


class Student {
    public: 
    string name;
    double* cgpaPtr;

    Student(string name, double cgpa) {
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

     Student(Student &obj) {
        this->name = obj.name;
        cgpaPtr = new double;
        *cgpaPtr = *obj.cgpaPtr;
    }
    
    ~Student() {
     cout<<"Hi im destructure";
     delete cgpaPtr;
    }
    void getInfo() {
        cout<<"name : " <<name<<endl;
        cout<<"cgpa : " <<*cgpaPtr<<endl;

    }

};



int main () 
{
  
    // Teacher t1;
    // t1.name = "Anaya";
   
    // t1.setSal(2500);
    // cout<<t1.name<<endl;
    // cout<<t1.getSal()<<endl;
    

    // Teacher t1("anaya", "cs", 2500);
    // Teacher t2(t1);
    // cout<<t2.name<<endl;

    Student s1("Ali", 8.5);
    Student s2(s1);

    *(s2.cgpaPtr) = 9.9;

  
    s2.getInfo();
    cout<<*(s1.cgpaPtr)<<endl;

    return 0;
}