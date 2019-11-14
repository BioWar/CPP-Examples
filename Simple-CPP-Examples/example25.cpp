// arrays example
#include <iostream>
using namespace std;

int billy [] = {2,3,4,5,6};
int n, result = 0;

int main()
{
  for (n=0;n<5;n++)
  {
    result += billy[n];
  }
  cout << result << endl;
  return 0;
}
