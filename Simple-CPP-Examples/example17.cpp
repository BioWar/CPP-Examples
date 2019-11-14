// function example
#include <iostream>
using namespace std;

int a_ = 10;
int b_ = 20;

int subtraction (int a, int b)
{
  int r;
  r = a - b;
  return (r);
}

int main()
{
  int x=5, y=3, z;
  z = subtraction(7,2);
  cout << "The first result is: " << z << endl;
  cout << "The second result is: " << z + subtraction(a_, b_) << endl;
  z = 4 + subtraction (x, y);
  cout << "The third result is: " << z << endl;
  return 0;
}

