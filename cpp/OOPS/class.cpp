#include <iostream>
using namespace std;

class Student {
private:
  int roll;
  string name;

public:
  void set(int r, string s) {
    roll = r;
    name = s;
  }
  void show() { cout << "Name: " << name << "\nRoll No.: " << roll << endl; }

  virtual void print(); // virtual enables runtime poly.
}; // always use ";" after class definition

class Nirman : public Student {
public:
  void print() override { cout << "Nirman inherited Student."; }
};

int main() {
  //   Student s1;
  //   s1.set(30, "Nirman Shandilya");
  //   s1.show();
  //   Student s2;
  //   s2.set(35, "Priyaj Gupta");
  //   s2.show();
  //   Student *s3 = new Student(); // DYNAMIC MEMORY ALLOCATION
  //   delete s3; // DESTRUCTOR CALLED MANUALLY FOR DYN. ALLOC. OBJ.
}