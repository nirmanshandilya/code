#include <iostream>
using namespace std;

class Complex
{
public:
  float real, imag;

  Complex(float r = 0, float i = 0)
  {
    real = r;
    imag = i;
  } // constructor

  /*another way of Initializing Constructor:

    Complex (float r = 0, float i = 0) : real(r), imag(i) {} //member intializer
    list

    */

  Complex operator+(const Complex &c)
  { // operator overloaded
    return Complex(real + c.real,
                   imag + c.imag); // (this->real + c.real, this->imag + c.imag)
  }

  void show() { cout << real << " " << "+" << " " << imag << "i" << endl; }
};

int main()
{
  Complex c1(3, 3), c2(4, 0);
  Complex c3 = c1 + c2;
  c3.show();

  return 0;
}
