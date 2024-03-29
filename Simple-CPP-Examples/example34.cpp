// example about structures
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct movies_t {
  string title;
  int year;
} mine, yours;

void printmovie (movies_t movie);

int main ()
{
  string mystr;

  mine.title = "2001 A Space Odyssey";
  mine.year = 1968;

  cout << "Enter title: ";
  //getline (cin, yours.title);
  cin >> yours.title;
  cout << "Enter year: ";
  //getline (cin, mystr);
  cin >> yours.year;
  stringstream(mystr) >> yours.year;

  cout << "My favourite movie is: " << endl;
  printmovie (mine);
  cout << "And yours is: " << endl;
  printmovie (yours);
  return 0;
}

void printmovie (movies_t movie)
{
  cout << movie.title;
  cout << " (" << movie.year << ")" << endl;
}
