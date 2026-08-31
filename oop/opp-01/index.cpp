#include <iostream>
using namespace std;


class Teacher {
 
    private:
     double salary;

   public:
   
   Teacher () {
    cout<<"Hi im cute constructor"<<endl;
   }

  string name;
  string dep;
  
  void setSlaray(double s) {
    salary = s;
  }

  double getSal() {
    return salary;
  }


};

int main () 
{
  Teacher t1;

  t1.setSlaray(25000);

  cout<<t1.getSal()<<endl;

  return 0;
}