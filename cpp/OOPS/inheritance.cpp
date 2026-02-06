#include <iostream>
using namespace std;

class Animal {
public:
  virtual void breathe() = 0;
  virtual void walk() = 0;
  virtual void talk() = 0;
};

class Dog : public Animal {
public:
  void breathe() override { cout << "Dog is breathing" << endl; }
  void walk() override { cout << "Dog walks on 4 legs" << endl; }
  void talk() override { cout << "Dog barks" << endl; }
};

class GermanShephard : public Dog {
public:
  void talk() { cout << "German Shephard barks" << endl; }
  void skin() { cout << "German Shephard has furry skin" << endl; }
};

int main() {
  GermanShephard g1;
  g1.skin();
  g1.talk();

  Dog *d1 = new Dog;
  d1 = &g1;
  d1->talk();
}