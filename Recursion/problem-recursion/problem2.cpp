// print n to 1
#include <iostream>
using namespace std;

void printNum(int i, int num)
{
  if (num < i)
    return;
  cout << num << endl;
  printNum(i, num - 1);
}

int main()
{
  int n;
  cin >> n;
  printNum(1, n);
  return 0;
}