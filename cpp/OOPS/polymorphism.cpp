#include <iostream>
using namespace std;

class A {
public:
  int a, val1, val2;

  // OPERATOR OVERLOADING(COMPILE-TIME POLYMORPHISM)
  void operator+(A &obj) {
    val1 = this->a;
    val2 = obj.a;
    cout << "output: " << val2 - val1 << endl;
  }
};

class Animal {
public:
  // methods
  void speak() { cout << "Animal speaks" << endl; }
};

class Dog : public Animal {
public: // private by default
  void speak() { cout << "Dog barks" << endl; }
};

class Labrador : public Dog {
public:
  void speak() { cout << "Labrador barks" << endl; }
};

class Base {
public:
  virtual void show() { cout << "Base"; }
};
class Derived : public Base {
public:
  virtual void show() { cout << "Derived"; }
};

int main() {

  // A obj1, obj2;
  // obj1.a = 2;
  // obj2.a = 5;

  // obj1 + obj2; // 5-2=3
  // obj2 + obj1; // 2-5=-3
  /*in '+' operator, operand2 is the input parameter, operand1 is
   * this->parameter*/

  Labrador l;
  l.speak(); // METHOD OVERRIDING (RUN-TIME POLYMORPHISM)

  Base *b1 = new Derived;
  b1->show();
}