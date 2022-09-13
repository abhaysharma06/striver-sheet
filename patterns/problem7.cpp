#include <iostream>
using namespace std;

int main()
{
  int row;
  cin >> row;

  for (int line = 1; line <= row; line++)
  {
    for (int space = row - (line - 1); space < row; space++)
    {
      cout << " ";
    }
    for (int col = 1; col <= row - (line - 1); col++)
    {
      cout << "*";
    }
    cout << "\n";
  }
}