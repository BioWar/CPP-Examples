// reading a text file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
  string line;
  ifstream myfile ("example_2.txt");
  if (myfile.is_open())
  {
    while (! myfile.eof())
    {
      getline(myfile, line);
      cout << line << endl;
    }
    myfile.close();
  }
  else cout << "Unable to open file" << endl;
  return 0;
}
