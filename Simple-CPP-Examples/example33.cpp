// rememb-o-matic
#include <iostream>
#include <new>
using namespace std;

int main()
{
  int i,n;
  int *p;
  cout << "how many numbers would you like to type?" << endl;
  cin >> i;
  p = new (nothrow) int [i];
  if (p==0)
    cout << "Error: memory could not be allocated" << endl;
  else
  {
    for (n=0;n<i;n++)
    {
      cout << "Enter number: ";
      cin >> p[n];
    }
    cout << "You have entered: ";
    for (n=0;n<i;n++)
      cout << p[n] << ", ";
    cout << endl;
    delete[] p;
  }
  return 0;
}
