// goto loop example
#include <iostream>
using namespace std;

int main()
{
  int n = 10;
  loop:
  cout << n << ", ";
  n-- ;
  if (n > 0) goto loop;
  cout << '\n' << "End." << endl;
  return 0;
}
