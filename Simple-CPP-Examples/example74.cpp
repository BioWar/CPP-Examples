// standard macro names
#include <iostream>
using namespace std;

int main()
{
  cout << "This is the line number " << __LINE__ <<
  " of file " << __FILE__ << "." << endl <<
  "Its compilation began " << __DATE__ <<
  " at " << __TIME__ << "." << endl <<
  "The compiler gives a __cplusplus value of " << __cplusplus;
  return 0;
}
