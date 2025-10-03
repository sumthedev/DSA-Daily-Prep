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



int main () 
{
  
    Teacher t1;
    t1.name = "Anaya";
   
    t1.setSal(2500);
    cout<<t1.name<<endl;
    cout<<t1.getSal()<<endl;
    return 0;
}