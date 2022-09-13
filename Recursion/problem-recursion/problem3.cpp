// print linearly from 1 to N (Back tracking)
#include <iostream>
using namespace std;

void printNum(int i, int num)
{
  if (i < 1)
    return;
  cout << num << endl;
  printNum(i - 1, num);
}

int main()
{
  int n;
  cin >> n;
  printNum(3, n);
  return 0;
}