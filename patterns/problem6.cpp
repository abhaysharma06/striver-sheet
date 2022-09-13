#include <iostream>
using namespace std;

int main()
{
  int row;
  cin >> row;

  for (int line = 1; line <= row; line++)
  {
    for (int space = 1; space <= row - line; space++)
    {
      cout << " ";
    }
    for (int col = 1; col <= line; col++)
    {
      cout << "*";
    }
    cout << "\n";
  }
}