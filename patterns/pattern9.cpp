#include <iostream>
using namespace std;

int main()
{
  int row;
  cin >> row;

  for (int line = 1; line <= row; line++)
  {
    for (int space = (2 * row) - 1; space > (2 * row) - line; space--)
    {
      cout << " ";
    }
    for (int col = 1; col <= 2 * row - (line - 1); col++)
    {
      cout << "*";
    }
    cout << "\n";
  }
}