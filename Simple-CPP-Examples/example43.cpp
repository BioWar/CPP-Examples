// vectors: overloading operators example
#include <iostream>
using namespace std;

class CVector {
  public:
    int x,y;
    CVector () {};
    CVector (int, int);
    CVector operator + (CVector);
};

CVector::CVector (int a, int b){
  x = a;
  y = b;
}

CVector CVector::operator + (CVector param) {
  CVector temp;
  temp.x = x + param.x;
  temp.y = y + param.y;
  return (temp);
}

int main() {
  CVector a (3,1);
  CVector b (1,2);
  CVector c;
  c = a + b;
  a = a + a;
  cout << "c vector " << c.x << "," << c.y << endl;
  cout << "a vector " << a.x << "," << a.y << endl;
  return 0;
}
