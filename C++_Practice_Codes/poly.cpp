#include <iostream>
using namespace std;
class base {
public:
  virtual vfunc() {
 cout << "This is base's vfunc().\n";
  } };
class derived1 : public base {
public:
void vfunc() {
    cout << "This is derived1's vfunc().\n";
  }};
/* derived2 inherits virtual function vfunc() from derived1. */
class derived2 : public base {
public:
  // vfunc() is still virtual
  /*void vfunc() {
    cout << "This is derived2's vfunc().\n";
  }*/
  };
  class derived3 : public derived2 {
public:
  // vfunc() is still virtual
  void vfunc() {
    cout << "This is derived3's vfunc().\n";
  }};

int main()
{
  base *p, b;
  derived1 d1;
  derived2 d2;
  derived3 d3;
  // point to base
  p = &b;
  p->vfunc(); // access base's vfunc()
// point to derived1
  p = &d1;
  p->vfunc(); // access derived1's vfunc()
   // point to derived2
  p = &d2;
  p->vfunc(); // access derived2's vfunc()
  p = &d3;
  p->vfunc(); // access derived2's vfunc()
  return 0;
}


