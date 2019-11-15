// typeid
#include <iostream>
#include <typeinfo>
using namespace std;

int main () {
  int *a, b;
  a = 0; b = 0;
  if (typeid(a) != typeid(b))
  {
    cout << "a and b are of different types:" << endl;
    cout << "a is: " << typeid(a).name() << endl;
    cout << "b is: " << typeid(b).name() << endl;
  }
  return 0;
}
