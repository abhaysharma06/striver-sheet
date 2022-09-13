// print name 5 times
#include <iostream>
using namespace std;

void printName(int i, int num)
{

  if (i > num)
    return;
  cout << "A" << endl;
  printName(i + 1, num);
}

int main()
{
  int n;
  cin >> n;
  printName(1, n);
  return 0;
}