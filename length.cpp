#include <iostream>
using namespace std;

main(void)
{
  const int LENGTH = 21;
  char message[LENGTH];

  cout << "Enter a sentence on the line below." << endl;
  cin.getline(message, LENGTH, '\n');

  cout << message << endl;
}
