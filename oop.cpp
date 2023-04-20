#include <iostream>
using namespace std;

// class shubham{
// public:
//  shubham(){
//   cout<<" shubhzz here "<<endl;
// }
// void shubh(){
//   cout<<"hii oop"<<endl;
// }
// };

// class jadhav: public shubham{
// public:
// void abc(){
//   cout<<" im in child class ";
// }
// };

class animal {
public:
  int age = 20;
  void sleep() { cout << " sleeping " << endl; }
};
// using private access modifier getter and setter method
class animal1 {
private:
  int weight = 89;

public:
  int getweight() { return weight; }
  // void setweight(int w){
  //   weight=w;

  // }
};

class animal2 {
public:
  int age;

  animal2() { cout << " condtructor called !! default" << endl; }
  // PARAMETRIZED CONSTRUCTOR
  animal2(int age) {
    cout << " parametrized called " << age << endl;
    cout << age << endl;
  }
  // copy constructor
  animal2(animal &obj) {
    this->age = obj.age;
    cout << " copy const. called" << endl;
  }
  ~animal2() { cout << " destuctor called " << endl; }
};

// INHERITANCE

class child : public animal {
public:
  int age;
  child() { cout << " im in child class "; }
  void sleep() { cout << " child sleeping " << endl; }
};

int main() {
  // // shubham obj;

  // //obj.shubh();
  // jadhav obj2;
  // obj2.shubh();
  // obj2.abc();
  // animal obj;
  // obj.age=20;
  // obj.sleep();
  // cout<<obj.age<<endl;
  // animal1 obj1;
  // obj1.setweight(101);
  // cout << "weight is :" << obj1.getweight();

  // USING DYNAMIC MEMORY ALLOCATION
  //  animal * obj=new animal;
  //  obj->age=67;
  //  obj->sleep();
  //  cout<<" age is : "<<obj->age;

  // CONSTRUCTOR
  // animal2 obj2;
  //  animal2 obj2(11);
  // dynamically calling
  // animal2*obj2=new animal2(100);

  // for copy const.
  //  animal2 obj(10);
  //  animal2 obj2=obj;

  // animal2*obj2=new animal2();

  // delete obj2;

  // child obj;
  // obj.sleep();

  // DOWNCASTING
  //  animal *a=new child();
  //  a->sleep(); //give parent sleep function

  // UPCASTING

  // child *a=(child*)new animal();
  // a->sleep(); // give child wala sleep fun
}